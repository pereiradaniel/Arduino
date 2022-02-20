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

//require
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

//required
void loop() {
  const int a[3] = {100,250,500}; // array of blink duration values
  const int b[3] = {9, 6, 3};     // array of blink repetition values
  
  int i=0; // initialize counter at 0
  do
    {
      for (int j=0; j<b[i]; ++j) // loop through number of repetitions at b[i]
      {
        blink(a[i], a[i]*3); // blink the LED using duration at a[i]
        blink(a[i+1]);
      }
      ++i; // increment counter
    } while(i<sizeof(a)/sizeof(a)[0]); // break loop when counter = num of array elems
}
