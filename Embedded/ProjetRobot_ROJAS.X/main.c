#include <stdio.h>
#include <stdlib.h>
#include <xc.h>
#include "ChipConfig.h"
#include "IO.h"
#include "PWM.h"
#include "timer.h"

int main(void) {
    //Initialisation de l?oscillateur
    InitOscillator();

    //Configuration de séentres sorties
    InitIO();
    
    InitTimer1();
    InitTimer23();

    LED_BLANCHE = 1;
    LED_BLEUE = 1;
    LED_ORANGE = 1;
    
    InitPWM();
    
    //Boucle Principale
    while (1) {
        LED_BLANCHE = !LED_BLANCHE;
        LED_BLEUE = !LED_BLEUE;
    }

    //fin main
}