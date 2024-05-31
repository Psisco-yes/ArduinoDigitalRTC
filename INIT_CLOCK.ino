#include <DS3231.h>

void setup() {
  DS3231 RTC;
  Wire.begin();
  RTC.setClockMode(false);
  RTC.setHour(0);
  RTC.setMinute(0);
  RTC.setSecond(0);
  RTC.setDate(1);
  RTC.setMonth(1);
  RTC.setYear(20);
  RTC.enable32kHz(true);
  RTC.enableOscillator(true,false,0);
}

void loop() {

}
