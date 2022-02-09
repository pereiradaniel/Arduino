void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void const blink(const int duration) {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(duration);
  digitalWrite(LED_BUILTIN, LOW);
  delay(duration);
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
