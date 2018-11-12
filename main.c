#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int liczba, licznik;
    int suma = 1, i, n;

    printf("Podaj liczbe, ktorej silnie chcesz obliczyc \n");

    scanf("%d", &liczba);

    if (liczba <= 1) {
        printf("Liczba musi byc wieksza niz 1 \n");
        return 0;
    }

    suma = 1;

    // silnia z uzyciem pêtli FOR

    for (licznik = 1; licznik <= liczba; licznik++)
    {
        suma =  suma * licznik;
    }

    printf("Silnia z %d! wynosi: %d \n", liczba, suma);

    // silnia z uzyciem petli DO... WHILE

    suma = licznik = 1;

    do
    {
        suma = suma * licznik;

        licznik++;
    }
    while (licznik <= liczba);

    printf("Silnia z %d! wynosi: %d \n", liczba, suma);

    // silnia z uzyciem petli

    suma = licznik = 1;

    while (licznik <= liczba) {
        suma = suma * licznik;

        licznik++;
    }

    printf("Silnia z %d! wynosi: %d \n", liczba, suma);
}
