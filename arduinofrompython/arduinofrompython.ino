int x;
void setup() {
 Serial.begin(115200);
 Serial.setTimeout(1);
}
void loop() {
 while (!Serial.available());
 x = Serial.read();
 if(x == '5'){
   Serial.write("yes");

 } else {
 Serial.write(x); 
 }
 Serial.println();
}
