// 7-segment display pinout
const int segmentPins[] = {2, 3, 4, 5, 6, 7, 8, 9};

// Define the 7-segment display patterns for digits 0-9
const byte digitPatterns[] = {
  B00111111,  // 0
  B00000110,  // 1
  B01011011,  // 2
  B01001111,  // 3
  B01100110,  // 4
  B01101101,  // 5
  B01111101,  // 6
  B00000111,  // 7
  B01111111,  // 8
  B01101111   // 9
};

void setup() {
  // Initialize 7-segment display pins as outputs
  for (int i = 0; i < 8; i++) {
    pinMode(segmentPins[i], OUTPUT);
  }
  // Start serial communication at 9600 bps
  Serial.begin(9600);
}

void loop() {
  // Check if there is data available to read from serial
  if (Serial.available() > 0) {
    char receivedChar = Serial.read();
    
    // Check if the received character is a digit (0-9)
    if (isdigit(receivedChar)) {
      int digit = receivedChar - '0'; // Convert the character to an integer
      
      // Display the digit on the 7-segment display
      displayDigit(digit);
    }
  }
}

void displayDigit(int digit) {
  // Check if the digit is within the valid range (0-9)
  if (digit >= 0 && digit <= 9) {
    // Set the segment pins based on the digit pattern
    byte pattern = digitPatterns[digit];
    for (int i = 0; i < 8; i++) {
      digitalWrite(segmentPins[i], bitRead(pattern, i));
    }
  }
}

