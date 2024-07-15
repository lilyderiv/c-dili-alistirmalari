/*SORU: KAREKOK BULMA

Kullanicidan karekokunun hesaplanilmasini istenen sayiyi num degiskeni ile aliniz. Newton-Raphson yontemini kullanarak alinan sayinin karekokunu hesaplayiniz.
Karekoku özyineleme(recursive) yontemi ile extractingRootRecursive fonksiyonunu olusturup bu fonksiyonu mainde çagýrarak hesaplayiniz.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double extractingRootRecursive(double n, double x, float l);

int main()
{
    double num;
    float l;
    printf("Karekokunu bulmak istediginiz sayiyi giriniz: ");
    scanf("%lf", &num);
    printf("Tolerans seviyesini giriniz: ");
    scanf("%f", &l);

    double result = extractingRootRecursive(num, num, l);
    printf("%lf sayisinin karekoku: %lf\n", num, result);

    return 0;
}

double extractingRootRecursive(double n, double x, float l){
    double root = 0.5 * (x + (n / x));
    if ( fabs(root - x) < l)
        return root;
    return extractingRootRecursive(n, root, l);
}
