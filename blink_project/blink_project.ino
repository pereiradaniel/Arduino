void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void blink(int duration) {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(duration);
  digitalWrite(LED_BUILTIN, LOW);
  delay(duration);
}

void loop() {
  int a[3] = {100,250,500}; // array of durations for blink
  int b[3] = {5, 3, 1};     // array of times to blink
  
  int i=0;
  do
    {
      for (int j=0; j<b[i]; ++j)
      {
        blink(a[i]);
      }
      ++i;
    } while(i<sizeof(a)/sizeof(a)[0]);
}
