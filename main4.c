/*
* Faça um programa para criptografar uma frase (max. 99) dada pelo usuário. Na criptografia, a frase deverá ser invertida e as consoantes deverão ser trocadas por #.
* Exemplo:
* Frase: EU ESTOU NA ESCOLA
* Saída: A#O##E A# UO##E UE
*/
#include <stdio.h>
#include <string.h>

int main(void)
{ 
  char frase[100];
  char cripto[100];
  char letra;
  int tamanho;

  printf("Digite uma frase: ");
  scanf("%[^\n]", frase);

  tamanho = strlen(frase);
  for (int i = 0; i < tamanho; i++) {
    letra = frase[i];
    if ( 
      letra != 'A' &&
      letra != 'E' &&
      letra != 'I' &&
      letra != 'O' &&
      letra != 'U' &&
      letra != ' '
      )
      letra = '#';
    cripto[tamanho - i - 1] = letra;
  }

  cripto[tamanho] = '\0';
  printf("%s\n", cripto);
  
  return 0;
}
