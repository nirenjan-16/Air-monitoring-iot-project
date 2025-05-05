void send_parameters() 
{ 
ch4 = analogRead(methane) - 130; 
co = analogRead(carbon_mono) - 30; 
Blynk.virtualWrite(V2, ch4); 
Blynk.virtualWrite(V4, co);
 }
