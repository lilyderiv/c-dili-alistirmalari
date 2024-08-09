/* SORU: UCGEN ESITSIZLIGI SORUSU

Kullanicidan uc tam sayi degeri aliniz ve bunlari kenar degerleri olacak sekilde atayiniz. Ucgen esitsizligi teoremi ile
girilen degerlerden bir ucgen oluşturulabilir mi teyit edin. Eger bir ucgen olusturulabiliyorsa olusacak ucgenin cesitini de ekrana yazdırınız.

*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int kenar1, kenar2, kenar3;
    printf("Ilk kenari giriniz: ");
    scanf("%d", &kenar1);
    printf("Ikinci kenari giriniz: ");
    scanf("%d", &kenar2);
    printf("Son kenari giriniz: ");
    scanf("%d", &kenar3);
    if ( ((abs(kenar1-kenar3) < kenar2) && kenar1+kenar3>kenar2 )
        || ( abs(kenar2- kenar3)<kenar1 && kenar2+kenar3>kenar1 )
        || ( abs(kenar1-kenar2)<kenar3 && kenar1+kenar2>kenar3))
    {
        if (kenar1==kenar2 && kenar2==kenar3){
            printf("Girdiginiz kenarlardan bir ucgen olusturulabilir ve olusacak ucgen eskenar bir ucgendir.");

        }
        else if( (kenar1==kenar2)|| (kenar2==kenar3)|| (kenar1==kenar3) ){
            printf("Girdiginiz kenarlardan bir ucgen olusturulabilir ve olusacak ucgen ikizkenar bir ucgendir.");
        }
        else
            printf("Girdiginiz kenarlardan bir ucgen olusturulabilir  ve olusacak ucgen cesitkenar bir ucgendir.");
    }
    else
        printf("Girdiginiz kenarlardan bir ucgen olusturulamaz.");

   return 0;


}
