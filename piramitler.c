/*SORU: PIRAMITLER

1) Asagida verilen duz yarim piramitin ciktisi istenmektedir. halfpyramid() fonksiyonu olusturup ve bu fonksiyonda donguler kullanilip mainde cagirarak istenilen ciktiyi ekrana yazdiriniz.

*
* *
* * *
* * * *
* * * * *


2) Asagida verilen ters yarim piramitin ciktisi istenmektedir. invertedhalfpyramid() fonksiyonu olusturup ve bu fonksiyonda donguler kullanilip mainde cagirarak istenilen ciktiyi ekrana yazdiriniz.

* * * * *
* * * *
* * *
* *
*


3) Asagida verilen duz tam piramitin ciktisi istenmektedir. fullpyramid() fonksiyonu olusturup ve bu fonksiyonda donguler kullanilip mainde cagirarak istenilen ciktiyi ekrana yazdiriniz.

    *
   * *
  * * *
 * * * *
* * * * *


4) Asagida cikitisi verilen ters tam piramitin ciktisi istenmektedir. invertedfullpyramid() fonksiyonu olusturup ve bu fonksiyonda donguler kullanilip mainde cagirarak istenilen ciktiyi ekrana yazdiriniz.

* * * * *
 * * * *
  * * *
   * *
    *


5) Asagida verilen duz yan piramitin ciktisi istenmektedir. sidepyramid() fonksiyonu olusturup ve bu fonksiyonda donguler kullanilip mainde cagirarak istenilen ciktiyi ekrana yazdiriniz.

*
* *
* * *
* * * *
* * *
* *
*


6) Asagida verilen ters yan piramitin ciktisi istenmektedir. invertedsidepyramid() fonksiyonu olusturup ve bu fonksiyonda donguler kullanilip mainde cagirarak istenilen ciktiyi ekrana yazdiriniz.

      *
    * *
  * * *
* * * *
  * * *
    * *
      *


*/

#include <stdio.h>
#include <stdlib.h>

void halfpyramid();
void invertedhalfpyramid();
void fullpyramid();
void invertedfullpyramid();
void sidepyramid();
void invertedsidepyramid();


int main()
{
    halfpyramid();
    printf("\n");
    invertedhalfpyramid();
    printf("\n");
    fullpyramid();
    printf("\n");
    invertedfullpyramid();
    printf("\n");
    sidepyramid();
    printf("\n");
    invertedsidepyramid();
    return 0;

}

void halfpyramid(){
    for(int i=0; i<5; i++){
        for(int j= 0; j<i+1; j++){
            printf("* ");
        }
        printf("\n");
    }

}
void invertedhalfpyramid(){
    for(int i=0; i<5; i++){
        for(int j=4; j>i-1; j--){
            printf("* ");
        }
        printf("\n");
    }
}

void fullpyramid(){
    for(int i=0; i<5; i++){
        for(int s=5; s>i+1; s--){
            printf(" ");

        }
        for(int j=0; j<i+1; j++){
            printf("* ");
        }
        printf("\n");
    }
}

void invertedfullpyramid(){
    for(int i=0; i<5; i++){

        for(int s=0; s<i; s++){
            printf(" ");

        }
        for(int j=5; j> i; j--){
            printf("* ");
        }
        printf("\n");
    }
}
void sidepyramid(){
    for(int i=0; i<4; i++){
        for(int j= 0; j<i+1; j++){
            printf("* ");
        }
        printf("\n");
    }

    for(int i=0; i<4; i++){
        for(int j=2; j>i-1; j--){
            printf("* ");
        }
        printf("\n");
    }
}

void invertedsidepyramid(){
    for(int i = 0; i < 4; i++){
        for(int s = 3; s > i; s--){
            printf("  ");
        }
        for(int j = 0; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }

    for(int i = 1; i < 4; i++){
        for(int s = 0; s < i; s++){
            printf("  ");
        }
        for(int j = 4; j > i; j--){
            printf("* ");
        }
        printf("\n");
    }
}


