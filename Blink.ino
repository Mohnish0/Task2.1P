// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

int mdelay = 400;
int end_delay = 1200;
void morse(int mtime)
{
digitalWrite(LED_BUILTIN, HIGH);
delay(mtime);
digitalWrite(LED_BUILTIN, LOW);
delay(250);
}

void loop() {
  //M
  morse(3*mdelay);
  morse(3*mdelay);
  delay(end_delay);

  //O
   morse(3*mdelay);
   morse(3*mdelay);
   morse(3*mdelay);
  delay(end_delay);

  //H
  morse(mdelay);
  morse(mdelay);
  morse(mdelay);
  morse(mdelay);
  delay(end_delay);

  //N
  morse(3*mdelay);
  morse(mdelay);
  delay(end_delay);

  //I
  morse(mdelay);
  morse(mdelay);
  delay(end_delay);

  //S
    morse(mdelay);
    morse(mdelay);
    morse(mdelay);
    delay(end_delay);

    //H
  morse(mdelay);
  morse(mdelay);
  morse(mdelay);
  morse(mdelay);
  delay(end_delay);

  exit(0);
}
