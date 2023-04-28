#include <stdio.h>
#include <stdlib.h>
#include "Questao01.h"

int entrada01(float *raio){
    printf ("Informe o valor do raio da circunferencia\n");
    scanf("%f",raio);
}

int procesamento01(float *raio,float *dia, float *peri, float *area, float *vol){
    *dia = *raio * 2;
    *peri = *raio * (3.14*2);
    *area = 3.14 * (*raio*(*raio));
    *vol = (4*3.14)/3 * (*raio)*(*raio)*(*raio);
}

int saida01 (float *dia, float *peri, float *area, float *vol){
    printf("O diametro da circunferencia e %.2f \n", *dia);
    printf("O perimetro da circunferencia e %.2f \n", *peri);
    printf("A area da circunferencia e %.2f \n", *area);
    printf("O volume da circunferencia e %.2f \n", *vol);

}

void Questao01(void){
    float raio,dia,peri,area,vol;

    entrada01(&raio);
    procesamento01 (&raio,&dia,&peri,&area,&vol);
    saida01(&dia,&peri,&area,&vol);

}
