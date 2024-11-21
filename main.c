#include <stdio.h>

float calcolaMedia(int numeroValori, float sommaValori) {
    if (numeroValori == 0) {
        return 0;
    }
    return sommaValori / numeroValori;
}

int main() {
    int numValori;
    float somma;

    printf("Inserisci il numero dei valori: ");
    scanf("%d", &numValori);

    printf("Inserisci la somma dei valori: ");
    scanf("%f", &somma);

    float media = calcolaMedia(numValori, somma);
    printf("La media aritmetica è: %.2f\n", media);

    return 0;
}
