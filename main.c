/*
 * File:   main.c
 * Author: 20185189
 *
 * Created on 24 de Fevereiro de 2021, 14:07
 */

#include "botoes.h"
#include "disp7seg.h"
#include <xc.h>
#include "config.h"
#include "delay.h"

void main(void) 
{
    int cont = 0;
    int t = 3000;
    disp7seg_init();
    botoes_init();
    
    while(1)
    {
        disp7seg(cont);
        if (botao_soma() == 1)
        {
            cont++; 
            delay(100);
            if (cont > 9)
                cont = 0;
            while(botao_soma() == 1)
            {
                disp7seg(cont);
            }
        }
        if (botao_subtrai() == 1)
        {
            cont--;
            delay(100);
            if( cont < 0)
                cont = 9;
            while(botao_subtrai() == 1)
            {
                disp7seg(cont);
            }
        }
    }
}
