import conf
from boltiot import Sms, Bolt
import json, time

# Thresholds
INTERMEDIATE_LEVEL = 55
MAX_LEVEL = 80

# Initialize Bolt and Twilio objects
mybolt = Bolt(conf.API_KEY, conf.DEVICE_ID)
sms = Sms(conf.SID, conf.AUTH_TOKEN, conf.TO_NUMBER, conf.FROM_NUMBER)

def send_sms(message):
    try:
        response = sms.send_sms(message)
        print("SMS sent:", response)
    except Exception as e:
        print("Error sending SMS:", e)

while True:
    try:
        # Read water level from Bolt
        response_level = mybolt.serialRead('10')  # Assumes Arduino sends % value over serial
        level_data = json.loads(response_level)
        water_level = int(level_data['value'].strip())

        # Read temperature from Bolt (analog read from LM35)
        response_temp = mybolt.analogRead('A0')
        temp_data = json.loads(response_temp)
        temp_raw = int(temp_data['value'])
        temperature = round((100 * temp_raw) / 1024, 2)

        print(f"Water Level: {water_level}% | Temperature: {temperature}°C")

        # Send alerts
        if water_level >= MAX_LEVEL:
            msg = f"🚨 Red Alert! Water level at {water_level}%! Stay indoors. Temp: {temperature}°C."
            send_sms(msg)
        elif water_level >= INTERMEDIATE_LEVEL:
            msg = f"⚠️ Orange Alert: Water level at {water_level}%. Be prepared. Temp: {temperature}°C."
            send_sms(msg)

    except Exception as e:
        print("Error:", e)

    time.sleep(15)
