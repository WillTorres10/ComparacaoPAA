#include <bib.h>

int* copiarVetor(int tam, int original[tam]){
    int *copia = (int*)malloc(sizeof(int)*tam);
    //memcpy(copia, original, sizeof(int)*tam);
    for (int i=0; i<tam; i++){
        copia[i] = original[i];
    }
    return copia;
}

void imprimirVetor(int *vetor, int tam){
    for(int i=0; i<tam; i++)
        printf("%d ", vetor[i]);
}
