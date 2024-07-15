/* SORU: FAKTÖRIYEL

Kullanicidan num degiskeni ile faktöriyelinin hesaplanilmasi istenilen sayiyi alin. Sayinin faktöriyelini iterasyonla hesaplayan factorial(num) ve
özyineleme(recursive) ile hesaplayan recursiveFactorial(num) fonksiyonlarini oluþturun. Daha sonra factorial(num) ve recursiveFactorial(num)
olmak üzere iki fonksiyonu mainde çagirarak kullanicidan alinan degerin faktöriyelini bulunuz.

*/


#include <stdio.h>
#include <stdlib.h>

int factorial(int n);
int recursiveFactorial(int n);


int main() {
    int num;
    printf("Bir sayi giriniz: ");
    scanf("%u", &num);

    printf("%u 'nun faktoriyelinin iterasyonla hesaplanmis hali: %llu\n", num, factorial(num));
    printf("%u 'nun faktoriyelinin recursivele hesaplanmis hali: %llu\n", num, recursiveFactorial(num));
    return 0;
}

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int recursiveFactorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
