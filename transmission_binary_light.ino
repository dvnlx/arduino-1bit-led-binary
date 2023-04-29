#define btnPin 2
#define ledPin 3
#define arduinoLED LED_BUILTIN
// change the numbers array to any binary text
int numbers[] = {0, 1, 0, 0, 1, 0, 0, 0, 1, 1, 0, 0, 1, 0, 1, 0, 1, 1, 0, 1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1};
int length = sizeof(numbers);
void setup(){
    pinMode(ledPin, OUTPUT);
    pinMode(btnPin, INPUT);
    pinMode(arduinoLED, OUTPUT);
}

void loop(){
    int btnSwitch = digitalRead(btnPin);
    if(btnSwitch == LOW){
        digitalWrite(ledPin, LOW);
        digitalWrite(arduinoLED, LOW);
    }
    else{
        digitalWrite(arduinoLED, HIGH);
        for (size_t i = 0; i < length; i++)
        {
            digitalWrite(ledPin, numbers[i]);
            delay(200);
        }
        digitalWrite(arduinoLED, LOW);
        
    }
}