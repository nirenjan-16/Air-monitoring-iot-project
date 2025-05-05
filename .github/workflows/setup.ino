
void setup()
 {
 pinMode(motor1_A,OUTPUT); 
pinMode(motor1_B, OUTPUT); 
pinMode(motor2_A, OUTPUT); 
pinMode(motor2_B, OUTPUT); 
Serial.begin(9600); 
EspSerial.begin(9600); 
delay(100); 
Blynk.begin(auth, wifi, ssid, pass);
timer.setInterval(1000L,
send_parameters);
 }
