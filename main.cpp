#include "libs/analog.h"
#include "libs/LCD.h"


int main(void) {
    
    int TT;
    int TD;
    LCD lcd(0,1,2,3,4,5); 

    while(1) {

        TT = analogRead(4);  
        TD = analogRead(3);
        float TN = (float) TT * 5 / 1023;
        float TN2 = (float) TD * 5 / 1023;
        float TMP = (TN - TN2) * 100;       // El 100 multiplicaba solo a TN2
        lcd.clear();
        lcd.print(TMP);

    }

    return 0;

}