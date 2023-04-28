#include <stdio.h>
#include <stdlib.h>
#include "Questao02.h"

int entrada02(float *sb){
    printf ("Informe o salario\n");
    scanf("%f",sb);
}

int procesamento02(float *sb,float *sl){
    if(*sb<2000){
        *sl=(*sb)*0.90;
    }else{
        *sl=(*sb)*0.80;
    }
}

int saida02 (float *sl){
    printf("O salario liquido e %.2f \n", *sl);

}

void Questao02(void){
    float sb,sl;

    entrada02(&sb);
    procesamento02 (&sb,&sl);
    saida02(&sl);

}
