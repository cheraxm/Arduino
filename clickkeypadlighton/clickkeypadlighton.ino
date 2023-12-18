
const int ROWS = 4;
const int COLS = 4;

char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] = {9, 8, 7, 6}; // ขา Digital 6-9 เป็น input
byte colPins[COLS] = {5, 4, 3, 2}; // ขา Digital 2-5 เป็น output

#include <Keypad.h>

Keypad keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

const int RED_PIN = 11;   // กำหนดขา Digital ที่ใช้สำหรับ LED สีแดง
const int GREEN_PIN = 12; // กำหนดขา Digital ที่ใช้สำหรับ LED สีเขียว
const int BLUE_PIN = 13;  // กำหนดขา Digital ที่ใช้สำหรับ LED สีน้ำเงิน

void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
}

void loop() {
  char key = keypad.getKey();
  if (key != NO_KEY) {
    setColor(key);
  }
}

void setColor(char key) {
  // ตรวจสอบปุ่มที่ถูกกดและตั้งค่าสี LED ตามต้องการ
  switch(key) {
    case '9':
      digitalWrite(RED_PIN, LOW); // สีแดงเต็มที่
      digitalWrite(GREEN_PIN, HIGH);
      digitalWrite(BLUE_PIN, HIGH);
      break;
    case '8':
      digitalWrite(RED_PIN, HIGH);
      digitalWrite(GREEN_PIN, LOW); // สีเขียวเต็มที่
      digitalWrite(BLUE_PIN, HIGH);
      break;
    case '7':
      digitalWrite(RED_PIN, HIGH);
      digitalWrite(GREEN_PIN, HIGH);
      digitalWrite(BLUE_PIN, LOW); // สีน้ำเงินเต็มที่
      break;
    case '6':
      digitalWrite(RED_PIN, LOW);
      digitalWrite(GREEN_PIN, LOW);
      digitalWrite(BLUE_PIN, HIGH); // สีน้ำเงินเต็มที่
      break;
    // เพิ่มสีตามต้องการ
    default:
      digitalWrite(RED_PIN, HIGH); // ปิด LED ทุกรูปแบบ
      digitalWrite(GREEN_PIN, HIGH);
      digitalWrite(BLUE_PIN, HIGH);
      break;
  }
}
