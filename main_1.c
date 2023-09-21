/* Crie uma sub-rotina que receba três números inteiros como 
parâmetros, representando horas, minutos e se- gundos, e os converta em segundos. 
Exemplo: 2h, 40min e 10s correspondem a 9.610 segundos.*/

#include <stdio.h>

int converte_para_segundos(int, int, int);

int main() {
    int h, m, s, segs;

    printf("Informe o tempo: ");
    scanf("%d:%d:%d", &h, &m, &s);

    segs = converte_para_segundos(h, m, s);

    printf("Total em segundos: %d\n", segs);
    return 0;
}

int converte_para_segundos(int horas, int minutos, int segundos) {
    int total = segundos;
    total += minutos * 60;
    total += horas * 3600;
    return total;
}