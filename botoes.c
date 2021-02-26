/*
 * File:   botoes.c
 * Author: 20185189
 *
 * Created on 18 de Fevereiro de 2021, 15:04
 */


#include <xc.h>

#define SOMA PORTDbits.RD3
#define SUBTRAI PORTDbits.RD2


void botoes_init (void)
{
    TRISDbits.TRISD2 = 1;
    TRISDbits.TRISD3 = 1;        
}

char botao_soma(void)
{
    return(SOMA);
}

char botao_subtrai(void)
{
    return(SUBTRAI);
}

