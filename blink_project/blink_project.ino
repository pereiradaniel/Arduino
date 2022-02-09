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

void const blink(const int d)
{
  blinkOn(d);
  blinkOff(d);
}

void loop() {
  int a[3] = {100,250,500}; // array of blink duration values
  int b[3] = {5, 3, 1};     // array of blink repetition values
  
  int i=0; // initialize counter at 0
  do
    {
      for (int j=0; j<b[i]; ++j) // loop through number of repetitions at b[i]
      {
        blink(a[i]); // blink the LED using duration at a[i]
      }
      ++i; // increment counter
    } while(i<sizeof(a)/sizeof(a)[0]); // break loop when counter = num of array elems
}
