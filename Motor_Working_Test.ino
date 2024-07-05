//Top Right
int motor1pin1 = 6;
int motor1pin2 = 5;

//top left
int motor2pin1 = 3;
int motor2pin2 = 4;

//bottom right
int motor3pin1 = 8;
int motor3pin2 = 9;

//top left
int motor4pin1 = 10;
int motor4pin2 = 11;

int ENB1 = 7;
int ENA1 = 2;


int ENB2 = 12;
int ENA2 = 13;


void setup() {
  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);
  pinMode(motor2pin1, OUTPUT);
  pinMode(motor2pin2, OUTPUT);
  pinMode(ENB1, OUTPUT);
  pinMode(ENA1, OUTPUT);
  pinMode(ENB2, OUTPUT);
  pinMode(ENA2, OUTPUT);
}

void loop() { 
  digitalWrite(ENB1, HIGH);
  digitalWrite(ENA1, HIGH);
  digitalWrite(ENB2, HIGH);
  digitalWrite(ENA2, HIGH);

    GoForward();
  delay(2000);
  TurnLeft();
  delay(2000);
  GoForward();
  delay(2000);
  TurnRight();
  delay(2000);
  GoBackwards();
  delay(2000);

}

void GoForward() {

  digitalWrite(motor1pin1, HIGH); 
  digitalWrite(motor1pin2, LOW);

  digitalWrite(motor3pin1, HIGH);
  digitalWrite(motor3pin2, LOW);

  digitalWrite(motor4pin1, HIGH); 
  digitalWrite(motor4pin2, LOW);

  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, HIGH);
}

void GoBackwards() {

  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, HIGH);

  digitalWrite(motor3pin1, LOW);
  digitalWrite(motor3pin2, HIGH);

  digitalWrite(motor4pin1, LOW);
  digitalWrite(motor4pin2, HIGH);

  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2, LOW);
}

void TurnLeft() {

  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);

  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2, LOW);

  digitalWrite(motor3pin1, LOW);
  digitalWrite(motor3pin2, HIGH);

  digitalWrite(motor4pin1, HIGH);
  digitalWrite(motor4pin2, LOW);
}

void TurnRight() {

  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, HIGH);

  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, HIGH);

  digitalWrite(motor3pin1, HIGH);
  digitalWrite(motor3pin2, LOW);

  digitalWrite(motor4pin1, LOW);
  digitalWrite(motor4pin2, HIGH);
}