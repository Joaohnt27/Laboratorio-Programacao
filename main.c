/*
Faça um programa que receba uma frase, calcule e mostre a quantidade de vogais
da frase digitada. O programa deverá contar vogais maiúsculas e minúsculas.
*/
#include <stdio.h>

int main(void) {
  char frase[15];
  int vogais = 0;

  printf("Digite uma frase qualquer: ");
  scanf("%[^\n]", frase);

  for (int i = 0; frase[i] != '\0'; i++) {
    if (frase[i] == 'A' || frase[i] == 'a' || frase[i] == 'E' ||
        frase[i] == 'e' || frase[i] == 'I' || frase[i] == 'i' ||
        frase[i] == 'O' || frase[i] == 'o' || frase[i] == 'U' ||
        frase[i] == 'u')
      vogais++;
  }

  printf("A frase \"%s\" possui %d vogais.\n", frase, vogais);
  return 0;
}