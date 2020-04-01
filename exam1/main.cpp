// uLCD-144-G2 basic text demo program for uLCD-4GL LCD driver library

//

#include "mbed.h"

#include "uLCD_4DGL.h"


uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;


int main()

{

    // basic printf demo = 16 by 18 characters on screen

    //uLCD.background_color(0xFFFFFF);

    //uLCD.cls();

    uLCD.color(BLUE);

    uLCD.printf("\n\n\n  107061210");  // 107061210


    //uLCD.circle(int 1 , int 2 , int 2, int RED);

    //uLCD.triangle(int 1, int 1, int 2, int 2, int 3, int 3, int GREEN);

    uLCD.line(10, 10 , 100, 10, GREEN);
    uLCD.line(10, 10 , 10, 100, GREEN);
    uLCD.line(100, 10 , 100, 100, GREEN);
    uLCD.line(10, 100 , 100, 100, GREEN);

}
