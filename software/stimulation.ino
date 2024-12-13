// USER PARAMETERS

// row A wells
const float periodA = 100; // seconds
const float dutyCycleA = 1.0;

// row B wells
const float periodB = 100; // seconds
const float dutyCycleB = 0.1;

// row C wells dark

// row D wells
const float periodD = 100; // seconds
const float dutyCycleD = 0.01;

// row E wells
const float periodE = 1; // seconds
const float dutyCycleE = 0.1;

// row F wells
const float periodF = 10; // seconds
const float dutyCycleF = 0.1;

// row G wells dark

// row H wells
const float periodH = 200; // seconds
const float dutyCycleH = 0.1;


// SYSTEM PARAMETERS

// define pins
const int lightA = A5;
const int lightB = A4;
const int lightD = A3;
const int lightE = A2;
const int lightF = A1;
const int lightH = A0;

// on/off durations for each light
const unsigned long onDurationA = (periodA * 1000) * dutyCycleA;
const unsigned long offDurationA = (periodA * 1000) - onDurationA;

const unsigned long onDurationB = (periodB * 1000) * dutyCycleB;
const unsigned long offDurationB = (periodB * 1000) - onDurationB;

const unsigned long onDurationD = (periodD * 1000) * dutyCycleD;
const unsigned long offDurationD = (periodD * 1000) - onDurationD;

const unsigned long onDurationE = (periodE * 1000) * dutyCycleE;
const unsigned long offDurationE = (periodE * 1000) - onDurationE;

const unsigned long onDurationF = (periodF * 1000) * dutyCycleF;
const unsigned long offDurationF = (periodF * 1000) - onDurationF;

const unsigned long onDurationH = (periodH * 1000) * dutyCycleH;
const unsigned long offDurationH = (periodH * 1000) - onDurationH;

// light toggle times
unsigned long previousMillisA = 0;
unsigned long previousMillisB = 0;
unsigned long previousMillisD = 0;
unsigned long previousMillisE = 0;
unsigned long previousMillisF = 0;
unsigned long previousMillisH = 0;

// light states
bool lightStateA = false;
bool lightStateB = false;
bool lightStateD = false;
bool lightStateE = false;
bool lightStateF = false;
bool lightStateH = false;

void setup() {
  // set light pins as output
  pinMode(lightA, OUTPUT);
  pinMode(lightB, OUTPUT);
  pinMode(lightD, OUTPUT);
  pinMode(lightE, OUTPUT);
  pinMode(lightF, OUTPUT);
  pinMode(lightH, OUTPUT);

  // turn all lights off initially
  digitalWrite(lightA, LOW);
  digitalWrite(lightB, LOW);
  digitalWrite(lightD, LOW);
  digitalWrite(lightE, LOW);
  digitalWrite(lightF, LOW);
  digitalWrite(lightH, LOW);
  
}



void loop() {

  // light A control
  unsigned long currentMillis = millis(); 
  if (lightStateA && (currentMillis - previousMillisA >= onDurationA)) {
    lightStateA = false;
    digitalWrite(lightA, LOW);
    previousMillisA = currentMillis;
  } else if (!lightStateA && (currentMillis - previousMillisA >= offDurationA)) {
    lightStateA = true;
    digitalWrite(lightA, HIGH);
    previousMillisA = currentMillis;
  }

  // light B control
  currentMillis = millis();
  if (lightStateB && (currentMillis - previousMillisB >= onDurationB)) {
    lightStateB = false;
    digitalWrite(lightB, LOW);
    previousMillisB = currentMillis;
  } else if (!lightStateB && (currentMillis - previousMillisB >= offDurationB)) {
    lightStateB = true;
    digitalWrite(lightB, HIGH);
    previousMillisB = currentMillis;
  }

  // light D control
  currentMillis = millis();
  if (lightStateD && (currentMillis - previousMillisD >= onDurationD)) {
    lightStateD = false;
    digitalWrite(lightD, LOW);
    previousMillisD = currentMillis;
  } else if (!lightStateD && (currentMillis - previousMillisD >= offDurationD)) {
    lightStateD = true;
    digitalWrite(lightD, HIGH);
    previousMillisD = currentMillis;
  }

  // light E control
  currentMillis = millis();
  if (lightStateE && (currentMillis - previousMillisE >= onDurationE)) {
    lightStateE = false;
    digitalWrite(lightE, LOW);
    previousMillisE = currentMillis;
  } else if (!lightStateE && (currentMillis - previousMillisE >= offDurationE)) {
    lightStateE = true;
    digitalWrite(lightE, HIGH);
    previousMillisE = currentMillis;
  }

  // light F control
  currentMillis = millis();
  if (lightStateF && (currentMillis - previousMillisF >= onDurationF)) {
    lightStateF = false;
    digitalWrite(lightF, LOW);
    previousMillisF = currentMillis;
  } else if (!lightStateF && (currentMillis - previousMillisF >= offDurationF)) {
    lightStateF = true;
    digitalWrite(lightF, HIGH);
    previousMillisF = currentMillis;
  }

  // light H control
  currentMillis = millis();
  if (lightStateH && (currentMillis - previousMillisH >= onDurationH)) {
    lightStateH = false;
    digitalWrite(lightH, LOW);
    previousMillisH = currentMillis;
  } else if (!lightStateH && (currentMillis - previousMillisH >= offDurationH)) {
    lightStateH = true;
    digitalWrite(lightH, HIGH);
    previousMillisH = currentMillis;
  }

}
