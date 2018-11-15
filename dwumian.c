#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main()
{
    unsigned int n, k;
 
    printf("Podaj n: \n");
 
    scanf("%d", &n);
 
    printf("Podaj k: \n");
 
    scanf("%d", &k);
 
    if (k == 0 || k == n) {
        printf("1");
    } else {
        double wynik = 1;
 
        for (int i = 1; i <= k; i++)
        {
            wynik = wynik * (n - i + 1) / i;
        }
 
        long w = wynik;
 
        printf("Symbol (dwumian) Newtona wynosi: %d", w);
    }
 
    return 0;
}
