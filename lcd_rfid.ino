#include <MFRC522.h>
#include <MFRC522Extended.h>
#include <deprecated.h>
#include <require_cpp11.h>
#include <SPI.h>
#include <LiquidCrystal.h>

#define RSTpin 5
#define SSpin 53

//MFRC522 Instance
MFRC522 mfrc522(SSpin, RSTpin);
LiquidCrystal lcd(7,8,9,10,11,12);
byte card[4];
int successread;


void setup() {
  //RFID setup
  Serial.begin(9600);
  //init SPI bus
  SPI.begin();
  mfrc522.PCD_Init();
  delay(5);

  //LCD setup
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("Scan RFID: ");

 


 
  
}

void loop() {
  lcd.setCursor(0,1);
  getID();
  

}

int getID(){
  if(! mfrc522.PICC_IsNewCardPresent()){
    return;
  }
  if(! mfrc522.PICC_ReadCardSerial()){
    return;
  }
  lcd.setCursor(0,1);
  lcd.print("UID: ");
  //reads RFID cards UID and prints
  for(int i=0;i<mfrc522.uid.size;i++){
    card[i] = mfrc522.uid.uidByte[i];
    Serial.print(card[i], HEX);
    lcd.print(card[i], HEX);
  }
  //stops reading
  mfrc522.PICC_HaltA();

}