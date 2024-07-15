/* SORU: FAKT�RIYEL

Kullanicidan num degiskeni ile fakt�riyelinin hesaplanilmasi istenilen sayiyi alin. Sayinin fakt�riyelini iterasyonla hesaplayan factorial(num) ve
�zyineleme(recursive) ile hesaplayan recursiveFactorial(num) fonksiyonlarini olu�turun. Daha sonra factorial(num) ve recursiveFactorial(num)
olmak �zere iki fonksiyonu mainde �agirarak kullanicidan alinan degerin fakt�riyelini bulunuz.

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
