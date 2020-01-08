#include "settings.h"
#include "macros.h"
#include <stdbool.h>
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRB |= (1 << PB5); // PB5 výstup
    PORTB |= (1 << PB7); //PB7 má pullup rezistor

    char majak = 0;
    char predchozi;
    char nynejsi;

    while (1){

        nynejsi = (bool)(PINB & (1 << PB7)); //BOOL PŘEVÁDÍ NA LOGICKOU HODNOTU
        if(predchozi == 0 && nynejsi == 1){
            majak = !majak;
        }

        predchozi = nynejsi;
        if(majak){ //KDYŽ ÝJDE NĚCO JINÉHO NEŽ NULA = TRUE \ NULA = ELSE
            PORTB |= (1 << PB5); //NASTAVÍM 1
        }
        else{
            PORTB &=~(1 << PB5); //NASTAVÍM 0  
        }
    }

    return 0;
}                               
