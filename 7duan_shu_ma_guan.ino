void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}
int income=0;
void loop()
{
  if(Serial.available()>0)
    {
      income=Serial.read();
        switch(income)
        {
          case '1':
              one();
              break;
            case '2':
              two();
              break;
            case '3':
              three();
              break;
            case '4':
              four();
              break;
            case '5':
              five();
              break;
            case '6':
              six();
              break;
            case '7':
              seven();
              break;
            case '8':
              eight();
              break;
            case '9':
              nine();
              break;
            default:
              break;
        }
    }
}

void one()
{
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
}

void two()
{
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
}

void three()
{
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
}

void four()
{
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
}

void five()
{
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
}

void six()
{
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
}

void seven()
{
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
}

void eight()
{
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
}

void nine()
{
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
}
