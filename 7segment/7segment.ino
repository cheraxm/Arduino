int speed = 2000;
int digit1, digit2;
int starttime = 0;
int endtime;
int i = 0;

void display_number(int num){
  switch(num)
  {
    case 0:
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    break;
    case 1:
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    break;
    case 2:
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    break;
    case 3:
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    break;
    case 4:
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    break;
    case 5:
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    break;
    case 6:
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    break;
    case 7:
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    break;
    case 8:
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    break;
    case 9:
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    break;
    default:
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    break;
 }
}

void showNum(int digit2, int digit1)
{
 digitalWrite(3, HIGH);
 digitalWrite(4, LOW);
 display_number(digit1);
 delay(5);
 digitalWrite(3, LOW);
 digitalWrite(4, HIGH);
 display_number(digit2);
 delay(5);
}

void setup() {
 pinMode(3, OUTPUT);
 pinMode(4, OUTPUT);
 pinMode(5, OUTPUT);//b
 pinMode(6, OUTPUT);//a
 pinMode(7, OUTPUT);//c
 pinMode(8, OUTPUT);//d
 pinMode(9, OUTPUT);//e
 pinMode(10, OUTPUT);//f
 pinMode(11, OUTPUT);//g
}

void loop() {
 showNum(digit2, digit1);
 endtime = millis();
 if((endtime - starttime) >= speed)
 {
   if(i == 0){
     digit1 = 6;
     digit2 = 5;
     i++;
    }
    else if(i == 1){
      digit1 = 0;
      digit2 = 7;
      i++;
    }
    else if(i == 2){
     digit1 = 0;
     digit2 = 0;
     i++;
    }
    else if(i == 3){
     digit1 = 5;
     digit2 = 3;
     i = 0;
    }
    starttime = endtime;
  }
}