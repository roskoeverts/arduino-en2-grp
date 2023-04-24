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

int output = 13;

int tempo = 175;
int whole = (60000 * 4) / tempo;
int dotwhole = whole * 1.5;
int half = whole / 2;
int dothalf = half * 1.5;
int quarter = half / 2;
int dotquarter = quarter * 1.5;
int eighth = quarter / 2;
int doteighth = eighth * 1.5;
int sixteenth = eighth / 2;
int wholerest = (60000 * 4) / tempo;
int halfrest = wholerest / 2;
int halfrestdot = halfrest * 1.5;
int quarterrest = halfrest / 2;
int eighthrest = quarterrest / 2;
int sixteenthrest = eighthrest / 2;
int space = 10;

void chorus() {
  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);
  
  tone(output, D2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(quarter);
  noTone(output);
  delay(space);
  
  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A2);
  delay(dothalf);
  noTone(output);
  delay(space);

  noTone(output);
  delay(wholerest);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);
  
  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A2);
  delay(whole);
  noTone(output);
  delay(space);

  noTone(output);
  delay(halfrestdot);

  tone(output, C2);
  delay(quarter);
  noTone(output);
  delay(space);
}

void setup() {

  noTone(output);
  delay(eighthrest);

  tone(output, G1);
  delay(eighth);
  noTone(output);
  delay(space);

  chorus ();
tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, F2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A3);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A3);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A3);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A3);
  delay(dotquarter);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A3);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  chorus();

noTone(output);
  delay(halfrest);

  noTone(output);
  delay(eighthrest);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(quarter);
  noTone(output);
  delay(space);

tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A3);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A2);
  delay(half);
  noTone(output);
  delay(space);

  noTone(output);
  delay(halfrest);

  noTone(output);
  delay(quarterrest);

  tone(output, C2);
  delay(quarter);
  noTone(output);
  delay(space);

  noTone(output);
  delay(quarterrest);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  noTone(output);
  delay(eighthrest);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  noTone(output);
  delay(eighthrest);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A3);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A2);
  delay(half);
  noTone(output);
  delay(space);

  noTone(output);
  delay(halfrest);

  tone(output, C2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

tone(output, F2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, F2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, F2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(eighth);
  noTone(output);
  delay(space);

  noTone(output);
  delay(quarterrest);

  noTone(output);
  delay(quarterrest);

  tone(output, G2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(eighth);
  noTone(output);
  delay(space);

  noTone(output);
  delay(eighthrest);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A3);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A3);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(half);
  noTone(output);
  delay(space);

  noTone(output);
  delay(quarterrest);

  noTone(output);
  delay(eighthrest);

  tone(output, G1);
  delay(eighth);
  noTone(output);
  delay(space);

  chorus();

tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A3);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A3);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A3);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A3);
  delay(dotquarter);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

tone(output, A3);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A2);
  delay(half);
  noTone(output);
  delay(space);

  noTone(output);
  delay(quarterrest);

  tone(output, F2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(quarter);
  noTone(output);
  delay(space);

tone(output, C2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A3);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  noTone(output);
  delay(quarterrest);

  tone(output, A3);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, F2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(half);
  noTone(output);
  delay(space);

  tone(output, F2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A3);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  noTone(output);
  delay(quarterrest);

  tone(output, A3);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, F2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(half);
  noTone(output);
  delay(space);

tone(output, C2);
  delay(half);
  noTone(output);
  delay(space);

  noTone(output);
  delay(eighthrest);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A2);
  delay(quarter);
  noTone(output);
  delay(space);

  noTone(output);
  delay(quarterrest);


  tone(output, G1);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A3);
  delay(quarter);
  noTone(output);
  delay(space);

tone(output, D2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A2);
  delay(half);
  noTone(output);
  delay(space);

  noTone(output);
  delay(halfrest);

  noTone(output);
  delay(quarterrest);

  tone(output, C2);
  delay(half);
  noTone(output);
  delay(space);

  noTone(output);
  delay(eighthrest);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  noTone(output);
  delay(eighthrest);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);
  
  tone(output, E2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  noTone(output);
  delay(eighthrest);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A3);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A3);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(half);
  noTone(output);
  delay(space);

  noTone(output);
  delay(quarterrest);

  noTone(output);
  delay(eighthrest);

  tone(output, G1);
  delay(eighth);
  noTone(output);
  delay(space);

  chorus();

tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A3);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A3);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A3);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A3);
  delay(dotquarter);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A3);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A2);
  delay(half);
  noTone(output);
  delay(space);

  noTone(output);
  delay(quarterrest);

  tone(output, G1);
  delay(half);
  noTone(output);
  delay(space);

  tone(output, A2);
  delay(half);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G1);
  delay(half);
  noTone(output);
  delay(space);

  noTone(output);
  delay(quarterrest);

  noTone(output);
  delay(eighthrest);

  tone(output, G1);
  delay(eighth);
  noTone(output);
  delay(space);

tone(output, G2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G1);
  delay(dothalf);
  noTone(output);
  delay(space);

  noTone(output);
  delay(quarter);

  tone(output, D2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(whole);
  noTone(output);
  delay(space);

  noTone(output);
  delay(halfrest);

  tone(output, G1);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

tone(output, G1);
  delay(half);
  noTone(output);
  delay(space);

  noTone(output);
  delay(eighthrest);

  tone(output, G1);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A3);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A3);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(dothalf);
  noTone(output);
  delay(space);

  noTone(output);
  delay(eighthrest);

  tone(output, D2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(whole);
  noTone(output);
  delay(space);

  noTone(output);
  delay(quarterrest);

  tone(output, A3);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(eighth);
  noTone(output);
  delay(space);

tone(output, A3);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A3);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, F2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(dothalf);
  noTone(output);
  delay(space);

  noTone(output);
  delay(wholerest);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A2);
  delay(whole);
  noTone(output);
  delay(space);

  noTone(output);
  delay(halfrestdot);

  tone(output, C2);
  delay(quarter);
  noTone(output);
  delay(space);

tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A3);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A3);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A3);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A3);
  delay(dotquarter);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C3);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, B3);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A3);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A3);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

tone(output, E2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A2);
  delay(half);
  noTone(output);
  delay(space);

  noTone(output);
  delay(quarterrest);

  tone(output, F2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(quarter);
  noTone(output);
  delay(space);

  noTone(output);
  delay(quarterrest);

  tone(output, A3);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  noTone(output);
  delay(quarterrest);

  tone(output, A3);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  noTone(output);
  delay(quarterrest);

  tone(output, F2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(half);
  noTone(output);
  delay(space);

  tone(output, F2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A3);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

noTone(output);
  delay(quarterrest);
  
  tone(output, A3);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, F2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(half);
  noTone(output);
  delay(space);

  tone(output, F2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C2);
  delay(half);
  noTone(output);
  delay(space);

  noTone(output);
  delay(halfrest);
}

void loop() {

}
