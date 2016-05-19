int sol1 = 3;
int sol2 = 4;
int sol3 = 5;

int sol1State = 0;
int sol2State = 0;
int sol3State = 0;

void setup() {
  pinMode(sol1, OUTPUT);
  pinMode(sol2, OUTPUT);
  pinMode(sol3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0 ) {
    sol1State = Serial.parseInt();
    sol2State = Serial.parseInt();
    sol3State = Serial.parseInt();
    if (Serial.read() == '\n') {
      digitalWrite(sol1, sol1State);
      digitalWrite(sol2, sol2State);
      digitalWrite(sol3, sol3State);
    }
  }
}
