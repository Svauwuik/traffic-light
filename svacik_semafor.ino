//Semafor 1
const int S1cervena = 4;
const int S1zluta = 5;
const int S1zelena = 6;
//Semafor 2
const int S2cervena = 11;
const int S2zluta = 10;
const int S2zelena = 9;
//Semafor 3
const int S3cervena = 14;
const int S3zluta = 15;
const int S3zelena = 16;

void setup() {
  pinMode(S1cervena, OUTPUT);
  pinMode(S1zluta, OUTPUT);
  pinMode(S1zelena, OUTPUT);

  pinMode(S2cervena, OUTPUT);
  pinMode(S2zluta, OUTPUT);
  pinMode(S2zelena, OUTPUT);

  pinMode(S3cervena, OUTPUT);
  pinMode(S3zluta, OUTPUT);
  pinMode(S3zelena, OUTPUT);

  //setup
  digitalWrite(S1cervena, HIGH);
  digitalWrite(S2cervena, HIGH);
  digitalWrite(S3cervena, HIGH);
  delay(1500);
}

void loop() {
  //Semafor 1
  digitalWrite(S1zluta, HIGH);
  delay(500);
  digitalWrite(S1cervena, LOW);
  digitalWrite(S1zluta, LOW);
  digitalWrite(S1zelena, HIGH);
  delay(1500);
  digitalWrite(S1zelena, LOW);
  digitalWrite(S1zluta, LOW);
  delay(500);
  digitalWrite(S1zluta, LOW);
  digitalWrite(S1cervena, HIGH);
  delay(1000);

   //Semafor 2
  digitalWrite(S2zluta, HIGH);
  delay(500);
  digitalWrite(S2cervena, LOW);
  digitalWrite(S2zluta, LOW);
  digitalWrite(S2zelena, HIGH);
  delay(1500);
  digitalWrite(S2zelena, LOW);
  digitalWrite(S2zluta, LOW);
  delay(500);
  digitalWrite(S2zluta, LOW);
  digitalWrite(S2cervena, HIGH);
  delay(1000);

  //Semafor 3
  digitalWrite(S3zluta, HIGH);
  delay(500);
  digitalWrite(S3cervena, LOW);
  digitalWrite(S3zluta, LOW);
  digitalWrite(S3zelena, HIGH);
  delay(1500);
  digitalWrite(S3zelena, LOW);
  digitalWrite(S3zluta, LOW);
  delay(500);
  digitalWrite(S3zluta, LOW);
  digitalWrite(S3cervena, HIGH);
  delay(1000);
}
