#define A1  55
#define B1  62
#define C1  33
#define D1  37
#define E1  41
#define F1  44
#define G4  49

#define A2  110
#define B2  123
#define C2  65
#define D5  73
#define E5  82
#define F5  87
#define G5  98

#define A3  220
#define B3  247
#define C3  131
#define D3  147
#define E3  165
#define F3  175
#define G3  196

#define A4  440
#define B4  494
#define C4  262
#define D4  294
#define E4  330
#define F4  349
#define G4  392

#define A5  880
#define B5  988
#define C5  523
#define D5  587
#define E5  659
#define F5  698
#define G5  784

#define A6  1760
#define B6  1976
#define C6  1047
#define D6  1175
#define E6  1319
#define F6  1397
#define G6  1568

#define A7  3520
#define B7  3951
#define C7  2093
#define D7  2349
#define E7  2637
#define F7  2794
#define G7  3136

#define C8  4186
#define D8  4699
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
  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);
  
  tone(output, D5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(quarter);
  noTone(output);
  delay(space);
  
  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A5);
  delay(dothalf);
  noTone(output);
  delay(space);

  noTone(output);
  delay(wholerest);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);
  
  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A5);
  delay(whole);
  noTone(output);
  delay(space);

  noTone(output);
  delay(halfrestdot);

  tone(output, C5);
  delay(quarter);
  noTone(output);
  delay(space);
}

void setup() {

  noTone(output);
  delay(eighthrest);

  tone(output, G4);
  delay(eighth);
  noTone(output);
  delay(space);

  chorus ();
tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, F5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A6);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A6);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A6);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A6);
  delay(dotquarter);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A6);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  chorus();

noTone(output);
  delay(halfrest);

  noTone(output);
  delay(eighthrest);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(quarter);
  noTone(output);
  delay(space);

tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A6);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A5);
  delay(half);
  noTone(output);
  delay(space);

  noTone(output);
  delay(halfrest);

  noTone(output);
  delay(quarterrest);

  tone(output, C5);
  delay(quarter);
  noTone(output);
  delay(space);

  noTone(output);
  delay(quarterrest);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  noTone(output);
  delay(eighthrest);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  noTone(output);
  delay(eighthrest);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A6);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A5);
  delay(half);
  noTone(output);
  delay(space);

  noTone(output);
  delay(halfrest);

  tone(output, C5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

tone(output, F5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, F5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, F5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(eighth);
  noTone(output);
  delay(space);

  noTone(output);
  delay(quarterrest);

  noTone(output);
  delay(quarterrest);

  tone(output, G5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(eighth);
  noTone(output);
  delay(space);

  noTone(output);
  delay(eighthrest);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A6);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A6);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(half);
  noTone(output);
  delay(space);

  noTone(output);
  delay(quarterrest);

  noTone(output);
  delay(eighthrest);

  tone(output, G4);
  delay(eighth);
  noTone(output);
  delay(space);

  chorus();

tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A6);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A6);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A6);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A6);
  delay(dotquarter);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

tone(output, A6);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A5);
  delay(half);
  noTone(output);
  delay(space);

  noTone(output);
  delay(quarterrest);

  tone(output, F5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(quarter);
  noTone(output);
  delay(space);

tone(output, C5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A6);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  noTone(output);
  delay(quarterrest);

  tone(output, A6);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, F5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(half);
  noTone(output);
  delay(space);

  tone(output, F5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A6);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  noTone(output);
  delay(quarterrest);

  tone(output, A6);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, F5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(half);
  noTone(output);
  delay(space);

tone(output, C5);
  delay(half);
  noTone(output);
  delay(space);

  noTone(output);
  delay(eighthrest);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A5);
  delay(quarter);
  noTone(output);
  delay(space);

  noTone(output);
  delay(quarterrest);


  tone(output, G4);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A6);
  delay(quarter);
  noTone(output);
  delay(space);

tone(output, D5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A5);
  delay(half);
  noTone(output);
  delay(space);

  noTone(output);
  delay(halfrest);

  noTone(output);
  delay(quarterrest);

  tone(output, C5);
  delay(half);
  noTone(output);
  delay(space);

  noTone(output);
  delay(eighthrest);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  noTone(output);
  delay(eighthrest);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);
  
  tone(output, E5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  noTone(output);
  delay(eighthrest);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A6);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A6);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(half);
  noTone(output);
  delay(space);

  noTone(output);
  delay(quarterrest);

  noTone(output);
  delay(eighthrest);

  tone(output, G4);
  delay(eighth);
  noTone(output);
  delay(space);

  chorus();

tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A6);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A6);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A6);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A6);
  delay(dotquarter);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A6);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A5);
  delay(half);
  noTone(output);
  delay(space);

  noTone(output);
  delay(quarterrest);

  tone(output, G4);
  delay(half);
  noTone(output);
  delay(space);

  tone(output, A5);
  delay(half);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G4);
  delay(half);
  noTone(output);
  delay(space);

  noTone(output);
  delay(quarterrest);

  noTone(output);
  delay(eighthrest);

  tone(output, G4);
  delay(eighth);
  noTone(output);
  delay(space);

tone(output, G5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G4);
  delay(dothalf);
  noTone(output);
  delay(space);

  noTone(output);
  delay(quarter);

  tone(output, D5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(whole);
  noTone(output);
  delay(space);

  noTone(output);
  delay(halfrest);

  tone(output, G4);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

tone(output, G4);
  delay(half);
  noTone(output);
  delay(space);

  noTone(output);
  delay(eighthrest);

  tone(output, G4);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A6);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A6);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(dothalf);
  noTone(output);
  delay(space);

  noTone(output);
  delay(eighthrest);

  tone(output, D5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(whole);
  noTone(output);
  delay(space);

  noTone(output);
  delay(quarterrest);

  tone(output, A6);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(eighth);
  noTone(output);
  delay(space);

tone(output, A6);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A6);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, F5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(dothalf);
  noTone(output);
  delay(space);

  noTone(output);
  delay(wholerest);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A5);
  delay(whole);
  noTone(output);
  delay(space);

  noTone(output);
  delay(halfrestdot);

  tone(output, C5);
  delay(quarter);
  noTone(output);
  delay(space);

tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A6);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A6);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A6);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A6);
  delay(dotquarter);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C6);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, B6);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A6);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A6);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

tone(output, E5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(eighth);
  noTone(output);
  delay(space);

  tone(output, A5);
  delay(half);
  noTone(output);
  delay(space);

  noTone(output);
  delay(quarterrest);

  tone(output, F5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(quarter);
  noTone(output);
  delay(space);

  noTone(output);
  delay(quarterrest);

  tone(output, A6);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  noTone(output);
  delay(quarterrest);

  tone(output, A6);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  noTone(output);
  delay(quarterrest);

  tone(output, F5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(half);
  noTone(output);
  delay(space);

  tone(output, F5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, A6);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

noTone(output);
  delay(quarterrest);
  
  tone(output, A6);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, G5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, F5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(half);
  noTone(output);
  delay(space);

  tone(output, F5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, E5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, D5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(quarter);
  noTone(output);
  delay(space);

  tone(output, C5);
  delay(half);
  noTone(output);
  delay(space);

  noTone(output);
  delay(halfrest);
}

void loop(){
}