/* SORU: KARAKTER ÇIKARTMA

Kullanicidan bir kelime girmesini ve bir tam sayi girmesiniz isteyiniz. Alinan kelimeyi text degiskeninde,
tam sayiyi number degiskeninde tutunuz. removeChars() fonksiyonunda bu kelimeyi kullanýp alinan tam sayi degerince bastan harf eksiltiniz.
Olusan yeni kelimeyi ekrana bastiriniz.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void removeChars(char text[] , int number);

int main()
{
    char text[61]={0} ;
    int number;
    printf("Bir kelime giriniz: ");
    scanf("%s", text);
    printf("Bastan kac harf eksilmesini istersiniz: ");
    scanf("%d", &number);
    removeChars( text, number );
    return 0;
}

void removeChars(char text[], int number) {
    int length = strlen(text);
    for (int i = 0; i < number; i++) {
        for (int j = 0; j < length ; j++) {
            text[j] = text[j + 1];
        }
        length--;
    }
    printf("Yeni kelimeniz: %s\n", text);
}

