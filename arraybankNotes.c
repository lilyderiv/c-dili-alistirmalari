
/* SORU: DIZI ILE KAGIT PARA MIKTARI

Kullanicidan amount degiskeni ile bir tam sayi deðeri aliniz. Bu degeri en az miktarda kagit para
kullanarak elde edilen programi yaziniz. Bu programi yazarken dizileri kullaniniz.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int amount, topKagitPara=0;
    int sayaclar[7] = {0, 0, 0, 0, 0, 0, 0};
    int paraBirimi[7] = {200, 100, 50, 20, 10, 5, 1};

    printf("Paranizi giriniz: ");
    scanf("%d", &amount);

    for (int i = 0; i < 7; i++) {
        while (amount >= paraBirimi[i]) {
            sayaclar[i]++;
            amount -= paraBirimi[i];
        }
    }
    for( int i =0 ; i<7; i++){
        topKagitPara += sayaclar[i];
    }

    printf("%d tane 200 TL \n", sayaclar[0]);
    printf("%d tane 100 TL \n", sayaclar[1]);
    printf("%d tane 50 TL \n", sayaclar[2]);
    printf("%d tane 20 TL \n", sayaclar[3]);
    printf("%d tane 10 TL \n", sayaclar[4]);
    printf("%d tane 5 TL \n", sayaclar[5]);
    printf("%d tane 1 TL \n", sayaclar[6]);
    printf("Toplam kagit para: %d \n", topKagitPara);


    return 0;
}

