#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float numDecimal=0, quociente=0, resto=0, baseOctal=8, tamJ = 0;
    long int i=0, j=0, vetRestos[15];
    float vetConvertido[15];
    printf("Digite o numero decimal: ");
    scanf("%f", &numDecimal);
    quociente = numDecimal;

    while (quociente > 0) {
        i++;
        resto = fmod(quociente, baseOctal);
        vetRestos[i] = resto;
        quociente /= baseOctal;
        quociente = trunc(quociente);
        printf("%.0f\n", resto);
    }

    tamJ = i;
    printf("tamanho do tamJ %.0f\n\n", tamJ);

    //INVERTENDO O VETOR
    for (i; i>0; i--, j++) {
        vetConvertido[j] = vetRestos[i];
    }

    printf("Octal: ");
    for (j=0; j < tamJ ; j++) {
        printf("%.0f", vetConvertido[j]);
    }

//ALGORITMO PARA TRABALHAR SOMENTE COM A PARTE FRACIONARIA
    float inteiro = numDecimal;
    float fracionario = inteiro - ((long)inteiro);
    printf("\n\nFracionario %f", fracionario);
    if (fracionario < 1) {
        printf("\n\nParte fracionaria %.3f\n\n", fracionario);

    }

    return 0;

}
