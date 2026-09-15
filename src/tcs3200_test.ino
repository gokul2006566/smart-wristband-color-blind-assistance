// Smart Wristband for Color Blind Assistance
// Module: TCS3200 Color Sensor
// Controller: ESP32
// Version: Initial Sensor Testing

#define S0 5
#define S1 18
#define S2 19
#define S3 23
#define SENSOR_OUT 4

void setup() {
  Serial.begin(115200);

  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(SENSOR_OUT, INPUT);

  // TCS3200 frequency scaling: 20%
  digitalWrite(S0, HIGH);
  digitalWrite(S1, LOW);

  Serial.println("Smart Wristband");
  Serial.println("TCS3200 Color Sensor Test");
  Serial.println("-------------------------");
}

unsigned long readColor(int s2, int s3) {
  digitalWrite(S2, s2);
  digitalWrite(S3, s3);

  delay(50);

  // Read pulse width of the sensor output
  unsigned long frequency = pulseIn(SENSOR_OUT, LOW, 100000);

  return frequency;
}

void loop() {

  // Red filter
  unsigned long red = readColor(LOW, LOW);

  // Green filter
  unsigned long green = readColor(HIGH, HIGH);

  // Blue filter
  unsigned long blue = readColor(LOW, HIGH);

  Serial.print("Red: ");
  Serial.print(red);

  Serial.print(" | Green: ");
  Serial.print(green);

  Serial.print(" | Blue: ");
  Serial.println(blue);

  delay(1000);
}
