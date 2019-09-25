const int lm35_pin=A1;

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int temp_adc_val;
  float temp_val;

  temp_adc_val=analogRead(lm35_pin);
  temp_val=(temp_adc_val*4.88);
  temp_val=temp_val/10;
  Serial.print("Temperature=");
  Serial.print(temp_val);
  Serial.print("Degree Celsius");
  delay(1000);

}
