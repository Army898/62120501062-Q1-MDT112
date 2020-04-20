void setup(){
    pinMode(2, INPUT_PULLUP);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(13, OUTPUT);    
    tone(8,200,500);
    delay(250);
    tone(8,400,100);
    Serial.begin(9600);
}
void loop()
{
    int light = 3; 
    double count = 0;
    for (light = 3 ; light <= 13 ; light++)
    {
        digitalWrite(light, 1);
        delay(100);
        digitalWrite(light, 0);        
    }
    for (light = 13 ; light >= 3 ; light--)
    {
        digitalWrite(light, 1);
        delay(100);
        digitalWrite(light, 0);
    }
    if (digitalRead(2)==0){         
        Serial.println("Faster X 2 (Current Speed : X" + String(count*2) + ")");
        tone(8,400,100); 
        count++;       
    }    
}