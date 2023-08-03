/*
Faça um programa que receba uma frase, calcule e mostre a quantidade de palavras
da frase digitada.
*/
#include <stdio.h>
#include <string.h>

int main(void) {
  char uma_frase[300];
  int brancos = 0, offset, offset_ = 0, j, esp = 0;

  printf("Informe uma frase qualquer:\n");
  scanf("%[^\n]", uma_frase);

  // desconsidera os espaços em branco do inicio
  offset = 0;
  while (uma_frase[offset] != '\0' && uma_frase[offset] == ' ')
    offset++;

  // desconsidera os espaços em branco do fim
  /*
  offset_ = 0;
  j = strlen(uma_frase) - 1;
  while (j >= 0 && uma_frase[j] == ' ') {
    j--;
    offset_++;
  }
  */
  if (uma_frase[strlen(uma_frase) - 1] == ' ')
      offset_ = 1;

  for (int i = offset; uma_frase[i] != '\0'; i++) {
    if (uma_frase[i] == ' ' && !esp) {
      brancos++;
      esp = 1;
    } 
    else {
        if (uma_frase[i] != ' ')
            esp = 0;
    }
  }

  brancos++;
  brancos -= offset_;
  printf("Na frase existem %d palavras.\n", brancos);
  return 0;
}