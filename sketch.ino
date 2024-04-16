const int segA = 2;
const int segB = 3;
const int segC = 4;
const int segD = 5;
const int segE = 6;
const int segF = 7;
const int segG = 8;

int segments[10][7] = {
  {1, 1, 1, 1, 1, 1, 0},
  {0, 1, 1, 0, 0, 0, 0},
  {1, 1, 0, 1, 1, 0, 1},
  {1, 1, 1, 1, 0, 0, 1},
  {0, 1, 1, 0, 0, 1, 1},
  {1, 0, 1, 1, 0, 1, 1},
  {1, 0, 1, 1, 1, 1, 1},
  {1, 1, 1, 0, 0, 0, 0},
  {1, 1, 1, 1, 1, 1, 1},
  {1, 1, 1, 1, 0, 1, 1}
};
void setup() {
for(int i=segA;i<=segG;i++){
pinMode(i,OUTPUT);
// put your setup code here, to run once:
}
}

void loop() {
  for(int i=0;i<=9;i++){
    displayDigit(i);
    delay(1000);
  }
   // put your main code here, to run repeatedly:
}
void displayDigit(int digit){
  for (int i = segA; i <= segG; i++){
    digitalWrite(i, segments[digit][i - segA]);
  }
}




