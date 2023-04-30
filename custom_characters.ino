
// #include <Servo.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

int lcdColumns = 16;
int lcdRows = 2;
// make some custom characters:
byte Heart[8] = {
0b00000,
0b01010,
0b11111,
0b11111,
0b01110,
0b00100,
0b00000,
0b00000
};

byte Bell[8] = {
0b00100,
0b01110,
0b01110,
0b01110,
0b11111,
0b00000,
0b00100,
0b00000
};


byte Alien[8] = {
0b11111,
0b10101,
0b11111,
0b11111,
0b01110,
0b01010,
0b11011,
0b00000
};

byte Check[8] = {
0b00000,
0b00001,
0b00011,
0b10110,
0b11100,
0b01000,
0b00000,
0b00000
};

byte Speaker[8] = {
0b00001,
0b00011,
0b01111,
0b01111,
0b01111,
0b00011,
0b00001,
0b00000
};


byte Sound[8] = {
0b00001,
0b00011,
0b00101,
0b01001,
0b01001,
0b01011,
0b11011,
0b11000
};


byte Skull[8] = {
0b00000,
0b01110,
0b10101,
0b11011,
0b01110,
0b01110,
0b00000,
0b00000
};

byte Lock[8] = {
0b01110,
0b10001,
0b10001,
0b11111,
0b11011,
0b11011,
0b11111,
0b00000
};



//I2C pins declaration
LiquidCrystal_I2C lcd(0x27, lcdColumns,lcdRows);

// int servoPin = 2;
// Servo servo;

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT); // set digital pin 13 to output.Generate electrical signal
  // servo.attach(servoPin);
  lcd.init();
  lcd.backlight(); // To power on the back light
  // Create the custom heart characters
  // create a new characters
  lcd.createChar(0, Heart);
  lcd.createChar(1, Bell);
  lcd.createChar(2, Alien);
  lcd.createChar(3, Check);
  lcd.createChar(4, Speaker);
  lcd.createChar(5, Sound);
  lcd.createChar(6, Skull);
  lcd.createChar(7, Lock);

  // Clears the LCD screen
  lcd.clear();

  // Print a message to the lcd.
  lcd.print("Custom Character");
}

void loop() {
  // put your main code here, to run repeatedly:
  // blink();
  // servoMotor();
  lcdDisplay();

}

void blink() {
    digitalWrite(13, HIGH); // Turn on the LED
    delay(250); // Wait for a quarter of a second
    digitalWrite(13, LOW); // Turn off the LED
    delay(250); // Wait for a quartet of a second
}

void servoMotor() {
  // Make servo go to 0 degrees 
  //  servo.write(0); 
   delay(1000); 
   // Make servo go to 90 degrees 
  //  servo.write(90); 
   delay(1000); 
   // Make servo go to 180 degrees 
  //  servo.write(180); 
   delay(1000);
}

void lcdDisplay() {
  lcd.setCursor(0, 1);
  lcd.write(0);

  lcd.setCursor(2, 1);
  lcd.write(1);

  lcd.setCursor(4, 1);
  lcd.write(2);

  lcd.setCursor(6, 1);
  lcd.write(3);

  lcd.setCursor(8, 1);
  lcd.write(4);

  lcd.setCursor(10, 1);
  lcd.write(5);

  lcd.setCursor(12, 1);
  lcd.write(6);

  lcd.setCursor(14, 1);
  lcd.write(7);

       
}

