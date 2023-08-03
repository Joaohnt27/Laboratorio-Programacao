/*
Faça um programa que receba uma frase, calcule e mostre a quantidade de vogais
da frase digitada. O programa deverá contar vogais maiúsculas e minúsculas.
*/
#include <stdio.h>
#include <string.h>

int main(void) {
  char frase[15], letrasvogais[] = "AaEeIiOoUu";
  int vogais = 0, j;

  printf("Digite uma frase qualquer: ");
  scanf("%[^\n]", frase);

  for (int i = 0; frase[i] != '\0'; i++) {
      j = 0;
      while (j < strlen(letrasvogais) && frase[i] != letrasvogais[j])
          j++;
      if (j < strlen(letrasvogais))
        vogais++;
  }

  printf("A frase \"%s\" possui %d vogais.\n", frase, vogais);
  return 0;
}