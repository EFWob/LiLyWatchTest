#define LILYGO_WATCH_2020_V1             //To use T-Watch2020, please uncomment this line


// => Function select
//#define LILYGO_WATCH_LVGL                   //To use LVGL, you need to enable the macro LVGL

#include <LilyGoWatch.h>

int axp202PinValue = 3;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(AXP202_INT, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x = digitalRead(AXP202_INT);
  if (x != axp202PinValue) {
    Serial.printf("AXP202-Int-Pin value = %d\r\n", x);
    axp202PinValue = x;
  }
}
