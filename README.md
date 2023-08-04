# UID and LCD    
Uses Arduino Mega 2560 RC522 and LCD screen to display UID card or tag. 

**Hardware:**    
-RC522 RFID reader   
-LCD
-Jumper wire   
-Potentiometer   

**MFRC522 to Arduino Mega**    
|MFRC522 Reader| Arduino|
|--------------|--------|
|3.3V|3.3V|
|GND|GND|
|RST|5|
|SDA/SS|53|
|MOSI| 51|
|MISO| 50|
|SCK|52| 

**LCD to Arduino Mega**
|LCD Pin| Arduino Pin|Potentiometer|
|-------|-------------|------------|
|15|5V|Front Right Leg|
|16|GND|Front Left Leg|
|3| |Back Leg|
|RW/5| GND| |
|RS/4| 7| |
|EN/6| 8| |
|D/14|| 12| |
|D6/13|11| |
|D5/12|10| |
|D4/11|9| |

