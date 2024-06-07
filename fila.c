#include <stdio.h>
#define TAMANHO_FILA 3

typedef struct 
{
    int inicio;
    int fim;
    int vetor[TAMANHO_FILA];
}Fila;


int main(){
    Fila f;
    int i;
    f.fim = 0;

    // adc elemento a fila
    f.vetor[f.fim] = 15;
    f.fim++;

    // adc elemento a fila
    f.vetor[f.fim] = 40;
    f.fim++;
    
    // adc elemento a fila
    f.vetor[f.fim] = 35;
    f.fim++;

    // imprime fila
    for(i = 0; i<f.fim; i++){
        printf("%02d \n", f.vetor[i]);
    }


    // retirar elemento da fila
    printf("Elemento sai da fila: %d \n", f.vetor[0]);
    
    // Explicacao (f.fim-1) -> o elemento no indice 0 ja foi retirado, dessa forma, o loop nao vai ate o fim da fila, mas sim, antes do fim
    for(i = 0; i<(f.fim-i); i++){
        f.vetor[i] = f.vetor[i + 1];
    }
    f.fim--;


    // imprime fila
    for(i = 0; i<f.fim; i++){
        printf("%02d \n", f.vetor[i]);
    }
    return 0;

}