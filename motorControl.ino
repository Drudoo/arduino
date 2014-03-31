int IN1 = 10;
int IN2 = 9;
int ENA1 = 3;
int BUTTON = 2;

void setup() {
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(BUTTON,INPUT);
}

void loop() {
    analogWrite(ENA1, 200);
    if(digitalRead(BUTTON) == LOW) {
        digitalWrite(IN1,HIGH);
        digitalWrite(IN2,LOW);
    } else {
        digitalWrite(IN1,LOW);
        digitalWrite(IN2,HIGH);
    }
}