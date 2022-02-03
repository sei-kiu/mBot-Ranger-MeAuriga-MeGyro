#include <Arduino.h>
#include <MeAuriga.h>

MeGyro gyro_0(0, 0x69);

void setup()
{
  // put your setup code here, to run once:

  Serial.begin(115200);
  Serial.println("Start... MeGyro...");

  gyro_0.begin();
}

void loop()
{
  // put your main code here, to run repeatedly:

  gyro_0.update();

  Serial.print(" x-axis: ");
  Serial.print(gyro_0.getAngle(1));
  Serial.print(" y-axis: ");
  Serial.print(gyro_0.getAngle(2));
  Serial.print(" z-axis: ");
  Serial.println(gyro_0.getAngle(3));

  delay(100);
}
