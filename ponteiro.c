#include <stdio.h>

int main() {
    
    // Declarando uma variável com um valor definido
    int valor = 10;
    
    // Declarando uma variável ponteiro
    int *ptr; 
    
    // Atribuindo o endereço da variável valor ao ponteiro
    ptr = &valor;
    
    printf("Valor de i: %d\n", valor);
    printf("Endereço da variável valor: %p\n", &valor);  
    printf("Conteúdo da varíavel ponteiro ptr: %p\n", ptr);
    
    return 0;
}