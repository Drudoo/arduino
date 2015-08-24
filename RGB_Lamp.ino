#include <MicroView.h>			// include MicroView library

MicroViewWidget *widget;		// create widget pointer
MicroViewWidget *widget2;		// create widget pointer
MicroViewWidget *redWidget, *greenWidget, *blueWidget;	// declare 3 widget pointers

int sensorPinR = A1;    // select the input pin for the potentiometer
int sensorPinG = A2;
int sensorPinB = A3;
int R = 0;  // variable to store the value coming from the sensor
int G = 0;
int B = 0;
int RED = 6;			// declare RED LED pin 6
int GREEN = 5;			// declare GREEN LED pin 5
int BLUE = 3;			// declare BLUE LED pin 3

void setup() {
	digitalWrite(sensorPinR, HIGH);		// Internal Pull-up
	digitalWrite(sensorPinG, HIGH);		// Internal Pull-up
	digitalWrite(sensorPinB, HIGH);		// Internal Pull-up

	pinMode(sensorPinR, INPUT);			// make pin as INPUT
    pinMode(sensorPinG, INPUT);
    pinMode(sensorPinB, INPUT);
	uView.begin();						// start MicroView
	uView.clear(PAGE);					// clear page
	redWidget = new MicroViewSlider(0,0,0,255);		// declare RED widget as slider
	greenWidget = new MicroViewSlider(0,10,0,255);	// declare GREEN widget as slider
	blueWidget = new MicroViewSlider(0,20,0,255);	// declare BLUE widget as slider
	
	pinMode(RED, OUTPUT);							// set RED LED pin as OUTPUT
	pinMode(GREEN, OUTPUT);							// set GREEN LED pin as OUTPUT
	pinMode(BLUE, OUTPUT);							// set BLUE LED pin as OUTPUT
}

void loop() {
	R = analogRead(sensorPinR);	// read sensorPin
    G = analogRead(sensorPinG);	// read sensorPin
    B = analogRead(sensorPinB);	// read sensorPin
    
    R = map(R, 0, 1023, 0, 255);
    G = map(G, 0, 1023, 0, 255);
    B = map(B, 0, 1023, 0, 255);
    
    analogWrite(RED,R);
    analogWrite(GREEN,G);
    analogWrite(BLUE,B);
        
	redWidget->setValue(R);			// set value of sensorPin to widget
	greenWidget->setValue(G);			// set value of sensorPin to widget
	blueWidget->setValue(B);			// set value of sensorPin to widget

	uView.display();						// display the content in the screen buffer
}

