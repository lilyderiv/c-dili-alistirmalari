/*SORU: FÝBONACCÝ SAYÝ DÝZÝSÝ

Kullanýcýdan kaç Fibonacci sayýsý görmek istediðini alan ve ardýndan bu sayýda Fibonacci terimini ekrana yazdýran bir program yazýnýz.
Programi yazarken kullanici kaç Fibonacci sayisi görmek isterse alinan sayiyi "sayi" degiþkenine atanir. fibonacciDizisi fonksiyonu, recursive bir konksiyon olup
sayi degiskeni degerince Fibonacci terimini yazdýrýr.


*/

#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

void fibonacciDizisi(int n) {
    int i;
    printf("Fibonacci dizisi (ilk %d terim):\n", n);
    for (i = 0; i < n; ++i) {
        printf("%d", fibonacci(i));
        if (i != n - 1)
            printf(", ");
    }
    printf("\n");
}

int main() {
    int sayi;

    printf("Kac Fibonacci sayisi gormek istiyorsunuz? ");
    scanf("%d", &sayi);

    fibonacciDizisi(sayi);

    return 0;
}
