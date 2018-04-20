#include </home/william/Dropbox/Universidade/5º Período/Programação e Análise de Algoritmos/CompracaoAlgoritmos/bib.h>

void Intercala (int comeco, int meio, int fim, int *v){
    int comeco2, meio2, aux, *p;
    comeco2 = comeco; meio2 = meio; aux = 0;
    p = (int*) malloc ((fim-comeco) * sizeof (int));
    while (comeco2 < meio && meio2 < fim) {
        if (v[comeco2] <= v[meio2])
        p[aux++] = v[comeco2++];
        else
            p[aux++] = v[meio2++];
    }
    while (comeco2 < meio)
        p[aux++] = v[comeco2++];
    while (meio2 < fim)
        p[aux++] = v[meio2++];
    for (comeco2 = comeco; comeco2 < fim; comeco2++)
        v[comeco2] = p[comeco2-comeco];
    free (p);
}

void Mergesort (int comeco, int fim, int *v) {
    if (comeco < fim - 1) {
        int meio = (comeco + fim)/2;
        Mergesort (comeco, meio, v);
        Mergesort (meio, fim, v);
        Intercala (comeco, meio, fim, v);
    }
}
