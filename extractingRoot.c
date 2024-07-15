/*SORU: KAREKOK BULMA

Kullanicidan karekokunun hesaplanilmasini istenen sayiyi num degiskeni ile aliniz. Newton-Raphson yontemini kullanarak alinan sayinin karekokunu hesaplayiniz.
Karekoku iterasyon yontemi ile extractingRoot() fonksiyonunu olusturup bu fonksiyonu mainde çagırarak hesaplayiniz.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


double extractingRoot(double n, float l);


int main()
{
    double num;
    float l;
    printf("Karakokunu bulmak istediginiz sayiyi giriniz: ");
    scanf("%lf", &num);
    printf("Tolerans seviyesini giriniz: ");
    scanf("%f", &l);
    double result = extractingRoot(num, l);
    printf("%lf sayisinin karakoku: %lf", num, result);
    return 0;
}


double extractingRoot(double n, float l){
    double x = n;
    double root;
    int count=0;
    while(l){
        count++;  // count deðiþkeni extractingRoot fonksiyonu için kritik bir deðiþken deðildir. Yalnýzca döngü kontrolü için kullanýlýr.
        root= 0.5 * (x + (n/x));
        if ( fabs(root-x) < l)
            break;
        x=root;
    }
    return root;
}
