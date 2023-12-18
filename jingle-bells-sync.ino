int relay_1 = 7;
int relay_2 = 8;
int relay_3 = 9;
int relay_4 = 10;

int estrelas = relay_2;
int amarelas = relay_3;
int coloridas = relay_4;

void setup() {
  configInitialState();
  
  jingleBells();
  jingleBells();
  
  // second 8
  turnOnAll();
  delay(18000);
  // second 26
  // Oh ...
  turnOffAll();
  delay(1500);

  // second 27,5
  jingleBells();
  jingleBells();

  // second 35,5
  // Hey ...
  turnOffAll();
  delay(1000);

  // second 36,5
  jingleBells();
  jingleBells();

  // second 44,5
  turnOffAll();
  delay(5000);

  // second 49,5
  turnOnAll();
  delay(18000);

  // 1 min 7,5 sec
  // Oh ...
  turnOffAll();
  delay(1500);

  // 1 min 9 sec
  jingleBells();
  jingleBells();

  // 1 min 17 sec
  // Hey ...
  turnOffAll();
  delay(1000);

  // 1 min 18 sec
  jingleBells();
  jingleBells();
  delay(1000);

  // 1 min 27 sec
  turnOn(estrelas);
  delay(2000);
  turnOn(amarelas);
  delay(2000);
  turnOn(coloridas);
  delay(3000);
  turnOffAll();

  // 1 min 34 sec
  delay(1000);
  jingleBells();
  jingleBells();
}

void configInitialState() {
  // Set RelayPin as an output pin
  pinMode(relay_1, OUTPUT);
  pinMode(relay_2, OUTPUT);
  pinMode(relay_3, OUTPUT);
  pinMode(relay_4, OUTPUT);

  // Set all realys off initially
  digitalWrite(relay_1, HIGH);
  digitalWrite(relay_2, HIGH);
  digitalWrite(relay_3, HIGH);
  digitalWrite(relay_4, HIGH);
}

void jingleBells() {
  turnOn(estrelas);
  delay(1000);
  turnOn(amarelas);
  delay(1000);
  turnOn(coloridas);
  delay(1500);
  turnOffAll();
  delay(500);
}

void turnOn(int relay) {
  digitalWrite(relay, LOW);
}

void turnOnAll() {
  digitalWrite(estrelas, LOW);
  digitalWrite(amarelas, LOW);
  digitalWrite(coloridas, LOW);
}

void turnOff(int relay) {
  digitalWrite(relay, HIGH);
}

void turnOffAll() {
  digitalWrite(estrelas, HIGH);
  digitalWrite(amarelas, HIGH);
  digitalWrite(coloridas, HIGH);
}

void loop() {
  
}
