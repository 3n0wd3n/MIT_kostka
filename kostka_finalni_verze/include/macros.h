/*
 * Soubor:  macros.h
 * Datum:   30.09.2019 18:49
 * Autor:   Marek Nožka, nozka <@t> spseol <d.t> cz
 * Licence: GNU/GPL 
 * Úloha: 
 * Popis:   hlavičkový soubor pro macros.c
 */

#ifndef __MACROS_H__
#define __MACROS_H__


/*********************************** 
 *  set and clear bits
 ***********************************/

#define SET_BIT(port, pos) (port |= (1U<< pos))
#define CLEAR_BIT(port, pos) (port &= (~(1U<< pos)))
#define TOGGLE_BIT(port, pos) (port ^= (1U<< pos))

#define setb SET_BIT
#define clrb CLEAR_BIT
#define togb TOGGLE_BIT

/*********************************** 
 *  test bits
 ***********************************/

#define TEST_BIT(port, pos) (port & (1U << pos))

#define testb TEST_BIT

#endif
