/*SORU: EN BUYUK SAYI

Kullanicidan uc tane tam sayi aliniz. Alinan tam sayilar arasindaki en buyuk sayiyi bulunuz.

*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3;
    int maxNumber;
    printf("Uc sayi giriniz: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 > num2){
        maxNumber = num1;
        if(num1 < num3){
            maxNumber = num3;
        }
    }
    else{
        maxNumber = num2;
        if(num2 < num3){
            maxNumber = num3;
        }
    }
    printf("Girdiginiz sayilarin en buyugu %d ", maxNumber);
    return 0;
}
