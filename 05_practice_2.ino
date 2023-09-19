#define PIN_LED 7
unsigned int toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  while (!Serial) {
    ; 
  }
  Serial.println("Hello World!");
  toggle = 1;
  digitalWrite(PIN_LED, toggle);
  toggle = 0;
  digitalWrite(PIN_LED, toggle);
  delay(1000);
  
  toggle = 1;
  digitalWrite(PIN_LED, toggle);
  delay(100);

  toggle = 0;
  digitalWrite(PIN_LED, toggle);
  delay(100);

  toggle = 1;
  digitalWrite(PIN_LED, toggle);
  delay(100);

  toggle = 0;
  digitalWrite(PIN_LED, toggle);
  delay(100);

  toggle = 1;
  digitalWrite(PIN_LED, toggle);
  delay(100);

  toggle = 0;
  digitalWrite(PIN_LED, toggle);
  delay(100);
  
  toggle = 1;
  digitalWrite(PIN_LED, toggle);
  delay(100);

  toggle = 0;
  digitalWrite(PIN_LED, toggle);
  delay(100);

  toggle = 1;
  digitalWrite(PIN_LED, toggle);
  delay(100);

  toggle = 0;
  digitalWrite(PIN_LED, toggle);
  delay(100);


  
}

void loop() {
  toggle = 1;
  digitalWrite(PIN_LED, toggle);

}
