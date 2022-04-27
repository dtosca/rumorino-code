void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // opens a serial communication with the host
  pinMode(2, INPUT_PULLUP); // says whether a pin is an INPUT, an OUTPUT, or an INPUT using a PULLU
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);

  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  
}

void loop() {
  //toggle on/off button for turning on loop
  boolean togLoop = !digitalRead(2); // read in the value of pin 2

  //toggle on/off button for tuning on sound
  boolean togPower = !digitalRead(3);

  //forward the sound sample button
  boolean forwardButton = !digitalRead(4);

  //back up sound sample button
  boolean backButton = !digitalRead(5);

  //pot for volume
  int volPot = analogRead(A0); // read in the value of pin A0

  //pot for pitch
  int pitchPot = analogRead(A1); // read in the value of pin A1\\

  //pot for speed
  int speedPot = analogRead(A2); // read in the value of pin A1

  //all the noise sound categories
  boolean cat6 = !digitalRead(6);
  boolean cat5 = !digitalRead(7);
  boolean cat4 = !digitalRead(8);
  boolean cat3 = !digitalRead(9);
  boolean cat2 = !digitalRead(10);
  boolean cat1 = !digitalRead(11);


  Serial.print(togPower); // send the value of toggle power down the serial line
  Serial.print(" "); // send a space
  
  Serial.print(backButton); // send the value of back button down the serial line
  Serial.print(" "); // send a space
  Serial.print(forwardButton); // send the value of forward down the serial line
  Serial.print(" "); // send a space

  Serial.print(cat1);
  Serial.print(" "); // send a space
  Serial.print(cat2);
  Serial.print(" "); // send a space
  Serial.print(cat3);
  Serial.print(" "); // send a space
  Serial.print(cat4);
  Serial.print(" "); // send a space
  Serial.print(cat5);
  Serial.print(" "); // send a space
  Serial.print(cat6);
  Serial.print(" "); // send a space
  
  Serial.print(togLoop); // send the value of the loop toggle down the serial line
  Serial.print(" "); // send a space
  
  Serial.print(volPot); // send the value of volume down the serial line
  Serial.print(" "); // send a space
  Serial.print(pitchPot); // send the value of pitch down the serial line
  Serial.print(" "); // send a space
  Serial.print(speedPot); // send the value of speech down the serial line
  Serial.println(); // send a carriage return / line feed
}
