int SER_Pin = 8;   
int RCLK_Pin = 9;  
int SRCLK_Pin = 10; 

int randNumber;

#define number_of_74hc595s 2 
#define numOfRegisterPins number_of_74hc595s * 8

boolean registers[numOfRegisterPins];

void setup() {
	Serial.begin(9600);
	pinMode(SER_Pin, OUTPUT);
	pinMode(RCLK_Pin, OUTPUT);
	pinMode(SRCLK_Pin, OUTPUT);

	clearRegisters();
	writeRegisters();
}               

void clearRegisters() {
	for(int i = numOfRegisterPins - 1; i >=  0; i--){
		registers[i] = LOW;
	}
} 

void writeRegisters() {
	digitalWrite(RCLK_Pin, LOW);
	for(int i = numOfRegisterPins - 1; i >=  0; i--){
		digitalWrite(SRCLK_Pin, LOW);

		int val = registers[i];

		digitalWrite(SER_Pin, val);
		digitalWrite(SRCLK_Pin, HIGH);
	}

	digitalWrite(RCLK_Pin, HIGH);
}

void setRegisterPin(int index, int value) {
	registers[index] = value;
}

void writeNumber(int number) {
	switch(number) {
		case 0:
			setRegisterPin(0,LOW);
			setRegisterPin(1,LOW);
			setRegisterPin(2,LOW);
			setRegisterPin(3,LOW);
			setRegisterPin(4,LOW);
			setRegisterPin(5,LOW);
			setRegisterPin(6,LOW);
			setRegisterPin(7,LOW);
            setRegisterPin(8,HIGH);
			setRegisterPin(9,HIGH);
			setRegisterPin(10,HIGH);
			setRegisterPin(11,HIGH);
			setRegisterPin(12,HIGH);
			setRegisterPin(13,HIGH);
			setRegisterPin(14,LOW);
			setRegisterPin(15,LOW);
			break;
		case 1:
			setRegisterPin(0,LOW);
			setRegisterPin(1,LOW);
			setRegisterPin(2,LOW);
			setRegisterPin(3,LOW);
			setRegisterPin(4,LOW);
			setRegisterPin(5,LOW);
			setRegisterPin(6,LOW);
			setRegisterPin(7,LOW);
            setRegisterPin(8,LOW);
			setRegisterPin(9,HIGH);
			setRegisterPin(10,HIGH);
			setRegisterPin(11,LOW);
			setRegisterPin(12,LOW);
			setRegisterPin(13,LOW);
			setRegisterPin(14,LOW);
			setRegisterPin(15,LOW);
			break;
		case 2:
			setRegisterPin(0,LOW);
			setRegisterPin(1,LOW);
			setRegisterPin(2,LOW);
			setRegisterPin(3,LOW);
			setRegisterPin(4,LOW);
			setRegisterPin(5,LOW);
			setRegisterPin(6,LOW);
			setRegisterPin(7,LOW);
            setRegisterPin(8,HIGH);
			setRegisterPin(9,HIGH);
			setRegisterPin(10,LOW);
			setRegisterPin(11,HIGH);
			setRegisterPin(12,HIGH);
			setRegisterPin(13,LOW);
			setRegisterPin(14,HIGH);
			setRegisterPin(15,LOW);
			break;
		case 3:
			setRegisterPin(0,LOW);
			setRegisterPin(1,LOW);
			setRegisterPin(2,LOW);
			setRegisterPin(3,LOW);
			setRegisterPin(4,LOW);
			setRegisterPin(5,LOW);
			setRegisterPin(6,LOW);
			setRegisterPin(7,LOW);
            setRegisterPin(8,HIGH);
			setRegisterPin(9,HIGH);
			setRegisterPin(10,HIGH);
			setRegisterPin(11,HIGH);
			setRegisterPin(12,LOW);
			setRegisterPin(13,LOW);
			setRegisterPin(14,HIGH);
			setRegisterPin(15,LOW);
			break;
		case 4:
			setRegisterPin(0,LOW);
			setRegisterPin(1,LOW);
			setRegisterPin(2,LOW);
			setRegisterPin(3,LOW);
			setRegisterPin(4,LOW);
			setRegisterPin(5,LOW);
			setRegisterPin(6,LOW);
			setRegisterPin(7,LOW);
            setRegisterPin(8,LOW);
			setRegisterPin(9,HIGH);
			setRegisterPin(10,HIGH);
			setRegisterPin(11,LOW);
			setRegisterPin(12,LOW);
			setRegisterPin(13,HIGH);
			setRegisterPin(14,HIGH);
			setRegisterPin(15,LOW);
			break;
		case 5:
			setRegisterPin(0,LOW);
			setRegisterPin(1,LOW);
			setRegisterPin(2,LOW);
			setRegisterPin(3,LOW);
			setRegisterPin(4,LOW);
			setRegisterPin(5,LOW);
			setRegisterPin(6,LOW);
			setRegisterPin(7,LOW);
            setRegisterPin(8,HIGH);
			setRegisterPin(9,LOW);
			setRegisterPin(10,HIGH);
			setRegisterPin(11,HIGH);
			setRegisterPin(12,LOW);
			setRegisterPin(13,HIGH);
			setRegisterPin(14,HIGH);
			setRegisterPin(15,LOW);
			break;
		case 6:
			setRegisterPin(0,LOW);
			setRegisterPin(1,LOW);
			setRegisterPin(2,LOW);
			setRegisterPin(3,LOW);
			setRegisterPin(4,LOW);
			setRegisterPin(5,LOW);
			setRegisterPin(6,LOW);
			setRegisterPin(7,LOW);
            setRegisterPin(8,HIGH);
			setRegisterPin(9,LOW);
			setRegisterPin(10,HIGH);
			setRegisterPin(11,HIGH);
			setRegisterPin(12,HIGH);
			setRegisterPin(13,HIGH);
			setRegisterPin(14,HIGH);
			setRegisterPin(15,LOW);
			break;
		case 7:
			setRegisterPin(0,LOW);
			setRegisterPin(1,LOW);
			setRegisterPin(2,LOW);
			setRegisterPin(3,LOW);
			setRegisterPin(4,LOW);
			setRegisterPin(5,LOW);
			setRegisterPin(6,LOW);
			setRegisterPin(7,LOW);
            setRegisterPin(8,HIGH);
			setRegisterPin(9,HIGH);
			setRegisterPin(10,HIGH);
			setRegisterPin(11,LOW);
			setRegisterPin(12,LOW);
			setRegisterPin(13,LOW);
			setRegisterPin(14,LOW);
			setRegisterPin(15,LOW);
			break;
		case 8:
			setRegisterPin(0,LOW);
			setRegisterPin(1,LOW);
			setRegisterPin(2,LOW);
			setRegisterPin(3,LOW);
			setRegisterPin(4,LOW);
			setRegisterPin(5,LOW);
			setRegisterPin(6,LOW);
			setRegisterPin(7,LOW);
            setRegisterPin(8,HIGH);
			setRegisterPin(9,HIGH);
			setRegisterPin(10,HIGH);
			setRegisterPin(11,HIGH);
			setRegisterPin(12,HIGH);
			setRegisterPin(13,HIGH);
			setRegisterPin(14,HIGH);
			setRegisterPin(15,LOW);
			break;
		case 9:
			setRegisterPin(0,LOW);
			setRegisterPin(1,LOW);
			setRegisterPin(2,LOW);
			setRegisterPin(3,LOW);
			setRegisterPin(4,LOW);
			setRegisterPin(5,LOW);
			setRegisterPin(6,LOW);
			setRegisterPin(7,LOW);
            setRegisterPin(8,HIGH);
			setRegisterPin(9,HIGH);
			setRegisterPin(10,HIGH);
			setRegisterPin(11,HIGH);
			setRegisterPin(12,LOW);
			setRegisterPin(13,HIGH);
			setRegisterPin(14,HIGH);
			setRegisterPin(15,LOW);
			break;
        case 10:
			setRegisterPin(0,LOW);
			setRegisterPin(1,HIGH);
			setRegisterPin(2,HIGH);
			setRegisterPin(3,LOW);
			setRegisterPin(4,LOW);
			setRegisterPin(5,LOW);
			setRegisterPin(6,LOW);
			setRegisterPin(7,LOW);
            setRegisterPin(8,HIGH);
			setRegisterPin(9,HIGH);
			setRegisterPin(10,HIGH);
			setRegisterPin(11,HIGH);
			setRegisterPin(12,HIGH);
			setRegisterPin(13,HIGH);
			setRegisterPin(14,LOW);
			setRegisterPin(15,LOW);
			break;
        case 11:
			setRegisterPin(0,LOW);
			setRegisterPin(1,HIGH);
			setRegisterPin(2,HIGH);
			setRegisterPin(3,LOW);
			setRegisterPin(4,LOW);
			setRegisterPin(5,LOW);
			setRegisterPin(6,LOW);
			setRegisterPin(7,LOW);
            setRegisterPin(8,LOW);
			setRegisterPin(9,HIGH);
			setRegisterPin(10,HIGH);
			setRegisterPin(11,LOW);
			setRegisterPin(12,LOW);
			setRegisterPin(13,LOW);
			setRegisterPin(14,LOW);
			setRegisterPin(15,LOW);
			break;
        case 12:
			setRegisterPin(0,LOW);
			setRegisterPin(1,HIGH);
			setRegisterPin(2,HIGH);
			setRegisterPin(3,LOW);
			setRegisterPin(4,LOW);
			setRegisterPin(5,LOW);
			setRegisterPin(6,LOW);
			setRegisterPin(7,LOW);
            setRegisterPin(8,HIGH);
			setRegisterPin(9,HIGH);
			setRegisterPin(10,LOW);
			setRegisterPin(11,HIGH);
			setRegisterPin(12,HIGH);
			setRegisterPin(13,LOW);
			setRegisterPin(14,HIGH);
			setRegisterPin(15,LOW);
			break;
        case 13:
			setRegisterPin(0,LOW);
			setRegisterPin(1,HIGH);
			setRegisterPin(2,HIGH);
			setRegisterPin(3,LOW);
			setRegisterPin(4,LOW);
			setRegisterPin(5,LOW);
			setRegisterPin(6,LOW);
			setRegisterPin(7,LOW);
            setRegisterPin(8,HIGH);
			setRegisterPin(9,HIGH);
			setRegisterPin(10,HIGH);
			setRegisterPin(11,HIGH);
			setRegisterPin(12,LOW);
			setRegisterPin(13,LOW);
			setRegisterPin(14,HIGH);
			setRegisterPin(15,LOW);
			break;
        case 14:
			setRegisterPin(0,LOW);
			setRegisterPin(1,HIGH);
			setRegisterPin(2,HIGH);
			setRegisterPin(3,LOW);
			setRegisterPin(4,LOW);
			setRegisterPin(5,LOW);
			setRegisterPin(6,LOW);
			setRegisterPin(7,LOW);
            setRegisterPin(8,LOW);
			setRegisterPin(9,HIGH);
			setRegisterPin(10,HIGH);
			setRegisterPin(11,LOW);
			setRegisterPin(12,LOW);
			setRegisterPin(13,HIGH);
			setRegisterPin(14,HIGH);
			setRegisterPin(15,LOW);
			break;
        case 15:
			setRegisterPin(0,LOW);
			setRegisterPin(1,HIGH);
			setRegisterPin(2,HIGH);
			setRegisterPin(3,LOW);
			setRegisterPin(4,LOW);
			setRegisterPin(5,LOW);
			setRegisterPin(6,LOW);
			setRegisterPin(7,LOW);
            setRegisterPin(8,HIGH);
			setRegisterPin(9,LOW);
			setRegisterPin(10,HIGH);
			setRegisterPin(11,HIGH);
			setRegisterPin(12,LOW);
			setRegisterPin(13,HIGH);
			setRegisterPin(14,HIGH);
			setRegisterPin(15,LOW);
			break;
        case 16:
			setRegisterPin(0,LOW);
			setRegisterPin(1,HIGH);
			setRegisterPin(2,HIGH);
			setRegisterPin(3,LOW);
			setRegisterPin(4,LOW);
			setRegisterPin(5,LOW);
			setRegisterPin(6,LOW);
			setRegisterPin(7,LOW);
            setRegisterPin(8,HIGH);
			setRegisterPin(9,LOW);
			setRegisterPin(10,HIGH);
			setRegisterPin(11,HIGH);
			setRegisterPin(12,HIGH);
			setRegisterPin(13,HIGH);
			setRegisterPin(14,HIGH);
			setRegisterPin(15,LOW);
			break;
        case 17:
			setRegisterPin(0,LOW);
			setRegisterPin(1,HIGH);
			setRegisterPin(2,HIGH);
			setRegisterPin(3,LOW);
			setRegisterPin(4,LOW);
			setRegisterPin(5,LOW);
			setRegisterPin(6,LOW);
			setRegisterPin(7,LOW);
            setRegisterPin(8,HIGH);
			setRegisterPin(9,HIGH);
			setRegisterPin(10,HIGH);
			setRegisterPin(11,LOW);
			setRegisterPin(12,LOW);
			setRegisterPin(13,LOW);
			setRegisterPin(14,LOW);
			setRegisterPin(15,LOW);
			break;
        case 18:
			setRegisterPin(0,LOW);
			setRegisterPin(1,HIGH);
			setRegisterPin(2,HIGH);
			setRegisterPin(3,LOW);
			setRegisterPin(4,LOW);
			setRegisterPin(5,LOW);
			setRegisterPin(6,LOW);
			setRegisterPin(7,LOW);
            setRegisterPin(8,HIGH);
			setRegisterPin(9,HIGH);
			setRegisterPin(10,HIGH);
			setRegisterPin(11,HIGH);
			setRegisterPin(12,HIGH);
			setRegisterPin(13,HIGH);
			setRegisterPin(14,HIGH);
			setRegisterPin(15,LOW);
			break;
        case 19:
			setRegisterPin(0,LOW);
			setRegisterPin(1,HIGH);
			setRegisterPin(2,HIGH);
			setRegisterPin(3,LOW);
			setRegisterPin(4,LOW);
			setRegisterPin(5,LOW);
			setRegisterPin(6,LOW);
			setRegisterPin(7,LOW);
            setRegisterPin(8,HIGH);
			setRegisterPin(9,HIGH);
			setRegisterPin(10,HIGH);
			setRegisterPin(11,HIGH);
			setRegisterPin(12,LOW);
			setRegisterPin(13,HIGH);
			setRegisterPin(14,HIGH);
			setRegisterPin(15,LOW);
			break;
        case 20:
			setRegisterPin(0,HIGH);
			setRegisterPin(1,HIGH);
			setRegisterPin(2,LOW);
			setRegisterPin(3,HIGH);
			setRegisterPin(4,HIGH);
			setRegisterPin(5,LOW);
			setRegisterPin(6,HIGH);
			setRegisterPin(7,LOW);
            setRegisterPin(8,HIGH);
			setRegisterPin(9,HIGH);
			setRegisterPin(10,HIGH);
			setRegisterPin(11,HIGH);
			setRegisterPin(12,HIGH);
			setRegisterPin(13,HIGH);
			setRegisterPin(14,LOW);
			setRegisterPin(15,LOW);
			break;
                        
		default:
			break;
    }
    
	writeRegisters();
}

void loop() {
	Serial.println("clear");

	for (int i = 0; i < numOfRegisterPins; ++i) {
		setRegisterPin(i,LOW);
	}
	writeRegisters();
       
       
       
	for (int i = 0; i <= 20; ++i) {
		Serial.println(i);
		writeNumber(i);
		delay(500);
	}


}