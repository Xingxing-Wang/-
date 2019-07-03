#include <SoftwareSerial.h>
#include <Morse.h>

Morse morse(13);

void morseSendChar(char chr)
{
    if(chr >= 'a')
    {
        chr = chr - 32;
    }
    switch(chr)
    {
        case 'A':
            morse.dot();
            morse.dash();
        break;
        case 'B':
            morse.dash();
            morse.dot();
            morse.dot();
            morse.dot();
        break;
        case 'C':
            morse.dash();
            morse.dot();
            morse.dash();
            morse.dot();
        break;
        case 'D':
            morse.dash();
            morse.dot();
            morse.dot();
        break;
        case 'E':
            morse.dot();
        break;
        case 'F':
            morse.dot();
            morse.dot();
            morse.dash();
            morse.dash();
            morse.dot();
        break;
        case 'G':
            morse.dash();
            morse.dash();
            morse.dot();
        break;
        case 'H':
            morse.dot();
            morse.dot();
            morse.dot();
            morse.dot();
        break;
        case 'I':
            morse.dot();
            morse.dot();
        break;
        case 'J':
            morse.dot();
            morse.dash();
            morse.dash();
            morse.dash();
        break;
        case 'K':
            morse.dash();
            morse.dot();
            morse.dash();
        break;
        case 'L':
            morse.dot();
            morse.dash();
            morse.dot();
            morse.dot();
        break;
        case 'M':
            morse.dash();
            morse.dash();
        break;
        case 'N':
            morse.dash();
            morse.dot();
        break;
        case 'O':
            morse.dash();
            morse.dash();
            morse.dash();
        break;
        case 'P':
            morse.dot();
            morse.dash();
            morse.dash();
            morse.dot();
        break;
        case 'Q':
            morse.dash();
            morse.dash();
            morse.dot();
            morse.dash();
        break;
        case 'R':
            morse.dot();
            morse.dash();
            morse.dot();
        break;
        case 'S':
            morse.dot();
            morse.dot();
            morse.dot();
        break;
        case 'T':
            morse.dash();
        break;
        case 'U':
            morse.dot();
            morse.dot();
            morse.dash();
        break;
        case 'V':
            morse.dot();
            morse.dot();
            morse.dot();
            morse.dash();
        break;
        case 'W':
            morse.dot();
            morse.dash();
            morse.dash();
        break;
        case 'X':
            morse.dash();
            morse.dot();
            morse.dot();
            morse.dash();
        break;
        case 'Y':
            morse.dash();
            morse.dot();
            morse.dash();
            morse.dash();
        break;
        case 'Z':
            morse.dash();
            morse.dash();
            morse.dot();
            morse.dot();
        break;
    }
}

void loop() {
    // put your main code here, to run repeatedly:
    if(Serial.available())
    {
        String str;
        str = Serial.read();
        morseSendString(str);
    }
}

void setup() {
    // put your setup code here, to run once:
    Serial.begin(9600);
}

void morseSendString(String str)
{
    int i;
    if(str[str.length() - 1] == '\n')
    {
        str[str.length() - 1] = '\0';
    }
    for(i = 0; i < str.length(); i++)
    {
        morseSendChar(str[i]);
        if(str[i] == ' ')
        {
            morse.w_space();
        }
        else
        {
            if(i != str.length() - 1)
                morse.c_space();
        }
    }
}
