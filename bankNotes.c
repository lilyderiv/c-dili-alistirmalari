/* SORU: KOÞULLA KAGIT PARA MIKTARI

Kullanýcýdan amount deðiþkeni ile bir tam sayi deðeri aliniz. Bu degeri en az miktarda kagit para
kullanarak elde edilen programý yazýnýz. Bu programý yazarken koþul ifadeleri kullanýnýz.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int amount, topKagitPara;
    int sayac200=0, sayac100=0, sayac50=0, sayac20=0, sayac10=0, sayac5=0, sayac1=0;
    printf("Paranizi giriniz: ");
    scanf("%d", &amount);
    while(amount > 0){
        if ( (amount/200) > 0 ){
        sayac200++;
        amount = amount- 200 ;
        }
        else if ( (amount/100) > 0 ){
        sayac100++;
        amount = amount - 100 ;
        }
        else if ( (amount/50) > 0 ){
        sayac50++;
        amount = amount - 50 ;
        }
        else if ( (amount/20) > 0 ){
        sayac20++;
        amount = amount - 20 ;
        }
        else if ( (amount/10) > 0 ){
        sayac10++;
        amount = amount - 10 ;
        }
        else if ( (amount/5) > 0 ){
        sayac5++;
        amount = amount - 5 ;
        }
        else {
        sayac1++;
        amount = amount - 1 ;
        }

        topKagitPara = sayac200 + sayac100 + sayac50 + sayac20 + sayac10 + sayac5 + sayac1;
    }
    printf("%d tane 200 TL \n", sayac200);
    printf("%d tane 100 TL \n", sayac100);
    printf("%d tane 50 TL \n", sayac50);
    printf("%d tane 20 TL \n", sayac20);
    printf("%d tane 10 TL \n", sayac10);
    printf("%d tane 5 TL \n", sayac5);
    printf("%d tane 1 TL \n", sayac1);
    printf("Toplam kagit para: %d \n", topKagitPara);

    return 0;
}
