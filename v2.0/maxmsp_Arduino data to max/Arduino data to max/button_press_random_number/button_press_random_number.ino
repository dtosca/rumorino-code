//Programming for People
//2016
//Mmck

//This is an arduino patch to generate a random number everytime a wired button is pressed.
//it then puts that number on to the serial port to be read by other programs

//!!! DO NOT HAVE THE SERIAL WINDOW OPEN WHEN TRYING TO USE OTHER PROGRAMS!!!


// this constant won't change:
const int  buttonPin = 2;    // the pin that the pushbutton is attached to
const int ledPin = 13;       // the pin that the LED is attached to

// Variables will change:
int buttonState = 0;         // current state of the button
int lastButtonState = 0;     // previous state of the button
int randomVal = 0; //random 

void setup() {
  // initialize the button pin as a input:
  pinMode(buttonPin, INPUT);
  // initialize the LED as an output:
  pinMode(ledPin, OUTPUT);
  // initialize serial communication:
  Serial.begin(9600);
}


void loop() {
  // sets a new random number between 0-999
  randomVal = random(1000);
  // read the pushbutton input pin:
  buttonState = digitalRead(buttonPin);

  // compare the buttonState to its previous state
  if (buttonState != lastButtonState) {
    
    // if the state has changed, increment the counter
    if (buttonState == HIGH) {
      // if the current state is HIGH then the button
      // wend from off to on
    } else {
      // if the current state is LOW then the button
      // went from on to off:
      Serial.println(randomVal);
    }
    // Delay a little bit to avoid bouncing
    delay(50);
  }
  // save the current state as the last state,
  //for next time through the loop
  lastButtonState = buttonState;

}

