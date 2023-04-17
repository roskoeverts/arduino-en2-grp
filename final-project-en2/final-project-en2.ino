#define B0  31
#define C1  33
#define D1  37
#define E1  41
#define F1  44
#define G1  49
#define A1  55
#define B1  62
#define C2  65
#define D2  73
#define E2  82
#define F2  87
#define G2  98
#define A2  110
#define B2  123
#define C3  131
#define D3  147
#define E3  165
#define F3  175
#define G3  196
#define A3  220
#define B3  247
#define REST 0

int tempo = 1371;
int buzzer = 13;
int dotquarter = tempo/2;
int quarter = tempo/4;
int sixteenth = tempo/6;
int dothalf = tempo * (10/9);
int output = 13;

void setup() {
for (int i = 0; i < 5; i++){
  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(10);
  
  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(100);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(100);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(100);
  
  tone(output, D2);
  delay(quarter);
  noTone(output);
  delay(100);

  tone(output, C2);
  delay(quarter);
  noTone(output);
  delay(100);

  tone(output, D2);
  delay(quarter);
  noTone(output);
  delay(100);
  
  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(100);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(100);

  tone(output, C2);
  delay(quarter);
  noTone(output);
  delay(100);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(100);

  tone(output, E2);
  delay(dothalf);
  noTone(output);
  delay(100);
}
}

void loop() {

}
