#include </home/william/Dropbox/Universidade/5º Período/Programação e Análise de Algoritmos/CompracaoAlgoritmos/bib.h>

void main(){
    int casos = 10000, melhorCaso[casos], casoMedio[casos], piorCaso[casos], x = casos;
    double time_spent;
    clock_t end, begin;
    //Gerando Vetores
    for (int i = 0; i<casos; i++){
        melhorCaso[i] = i;
        casoMedio[i] = rand() % 1000;
        piorCaso[i] = x;
        x--;
    }
    //rodando Merge Sort
    int *MergePior = copiarVetor(casos, piorCaso);
    int *MergeMedio = copiarVetor(casos, casoMedio);
    int *MergeMelhor = copiarVetor(casos, melhorCaso);
    /***********************************************/
    printf("***************************************\n");
    printf("Merge Sort | Pior Caso |: ");
    begin = clock();
        Mergesort(0, casos, MergePior);
    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    free(MergePior);
    printf("%lf segundos\n", time_spent);
    printf("***************************************\n");
    /***********************************************/
    printf("Merge Sort | Medio Caso |: ");
    begin = clock();
        Mergesort(0, casos, MergeMedio);
    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    free(MergeMedio);
    printf("%lf segundos\n", time_spent);
    printf("***************************************\n");
    /***********************************************/
    printf("Merge Sort | Melhor Caso |: ");
    begin = clock();
        Mergesort(0, casos, MergeMelhor);
    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("%lf segundos\n", time_spent);
    free(MergeMelhor);
    printf("***************************************\n");
    /*#############################################*/
    //rodando Counting sort
    int *CountingPior = copiarVetor(casos, piorCaso);
    printf("Counting Sort | Pior Caso |: ");
    begin = clock();
        countingSort(CountingPior, casos);
    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("%lf segundos\n", time_spent);
    printf("***************************************\n");
    //free(CountingPior);
    /***********************************************/
    int *CountingMedio = copiarVetor(casos, casoMedio);
    printf("Counting Sort | Medio Caso |: ");
    begin = clock();
        countingSort(CountingMedio, casos);
    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("%lf segundos\n", time_spent);
    //free(CountingMedio);
    printf("***************************************\n");
    /***********************************************/
    int *CountingMelhor = copiarVetor(casos, melhorCaso);
    printf("Counting Sort | Melhor Caso |: ");
    begin = clock();
        countingSort(CountingMelhor,casos);
    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("%lf segundos\n", time_spent);
    printf("***************************************\n");
    //free(CountingMelhor);
    /***********************************************/
    //rodando Heap Sort
    int *HeapPior = copiarVetor(casos, piorCaso);
    printf("Heap Sort | Pior Caso |: ");
    begin = clock();
        heapsort(HeapPior,casos);
    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("%lf segundos\n", time_spent);
    printf("***************************************\n");
    /***********************************************/
    int *HeapMedio = copiarVetor(casos, casoMedio);
    printf("Heap Sort | Medio Caso |: ");
    begin = clock();
        heapsort(HeapMedio,casos);
    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("%lf segundos\n", time_spent);
    printf("***************************************\n");
    /***********************************************/
    int *HeapMelhor = copiarVetor(casos, melhorCaso);
    printf("Heap Sort | Melhor Caso |: ");
    begin = clock();
        heapsort(HeapMelhor,casos);
    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("%lf segundos\n", time_spent);
}
