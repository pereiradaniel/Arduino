void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void const blinkOn(const int d) // Turns on LED for duration d
{
  digitalWrite(LED_BUILTIN, HIGH); // send signal to turn voltage on HIGH for LED at LED_BUILTIN
  delay(d);
}

void const blinkOff(const int d) // Turns off LED for duration d
{
  digitalWrite(LED_BUILTIN, LOW); // send signal to turn voltage on LOW for LED at LED_BUILTIN
  delay(d);  
}

void const blink(const int d) // Standard blink on and off for same duration
{
  blinkOn(d);
  blinkOff(d);
}

void const blink(const int d1, const int d2) // Overloaded function: programmable blink
{
  blinkOn(d1);
  blinkOff(d2);
}

// LETTER BLINK (in progress)
void const blink(int* letter, const int size)
{
  int ctr = 0;
  do
  {
    int *d = &letter[ctr]; 
    blink(*d);
    ++ctr;
  } while (ctr<size);
}

void loop() {
  // A in morse code is . - (a short blink, a short pause, a long blink, a long pause)
    const int sBlink = 100;
    const int lBlink = 300;
  
    const int A[2] = {sBlink,lBlink}; // define const A with morse code blinks
    const int B[3] = {lBlink, sBlink, sBlink};

    blink(*A, sizeof(A)/sizeof(A[0]));
    // blink(*B);
}
