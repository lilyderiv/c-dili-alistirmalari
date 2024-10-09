/*SORU: F�BONACC� SAY� D�Z�S�

Kullan�c�dan ka� Fibonacci say�s� g�rmek istedi�ini alan ve ard�ndan bu say�da Fibonacci terimini ekrana yazd�ran bir program yaz�n�z.
Programi yazarken kullanici ka� Fibonacci sayisi g�rmek isterse alinan sayiyi "sayi" degi�kenine atanir. fibonacciDizisi fonksiyonu, recursive bir konksiyon olup
sayi degiskeni degerince Fibonacci terimini yazd�r�r.


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
