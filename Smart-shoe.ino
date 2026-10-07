const int trigPin = 9;     // Red wire (Trig) -> Digital Pin 9
const int echoPin = 10;    // Yellow wire (Echo) -> Digital Pin 10
const int buzzerPin = 8;   // Buzzer Pin -> Digital Pin 8

long duration;
int distance;

void setup() {
  Serial.begin(9600);
  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  
  digitalWrite(buzzerPin, LOW); // Start quiet
  Serial.println("System Initialized with Custom Wire Mapping...");
}

void loop() {
  // Software clean trick for the echo line
  pinMode(echoPin, OUTPUT);
  digitalWrite(echoPin, LOW);
  delayMicroseconds(2);
  pinMode(echoPin, INPUT);

  // Trigger the pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  // Read the bounce timing
  duration = pulseIn(echoPin, HIGH, 30000);
  
  // Calculate centimeters
  distance = duration * 0.034 / 2;
  
  // Filter out zero errors and out-of-bounds paths
  if (distance <= 0 || distance > 250) {
    Serial.println("Reading: Out of Range / Path Clear");
    digitalWrite(buzzerPin, LOW); 
  } else {
    Serial.print("Distance Measured: ");
    Serial.print(distance);
    Serial.println(" cm");
    
    // Urgent danger beeping zone (2cm to 30cm)
    if (distance >= 2 && distance < 30) { 
      digitalWrite(buzzerPin, HIGH);
      delay(80);  
      digitalWrite(buzzerPin, LOW);
      delay(80);  
    } 
    // Standard approach warning zone (30cm to 70cm)
    else if (distance >= 30 && distance < 70) { 
      digitalWrite(buzzerPin, HIGH);
      delay(250); 
      digitalWrite(buzzerPin, LOW);
      delay(250); 
    } 
    // Safe zone
    else {
      digitalWrite(buzzerPin, LOW); 
    }
  }
  
  delay(50); 
}
