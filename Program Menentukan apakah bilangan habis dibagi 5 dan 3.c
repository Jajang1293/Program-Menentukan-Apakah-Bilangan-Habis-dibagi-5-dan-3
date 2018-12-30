#include<stdio.h>

void main()
{
    int x;
    printf("Memeriksa Suatu Bilangan Apakah Habis Dibagi 5 dan 3.\n");
    printf("======================================================\n");
    printf("Masukan suatu bilangan : ");scanf("%d",&x);
    if(x%3==0 && x%5==0)
    {
        printf("Bilangan tersebut merupakan bilangan yang HABIS dibagi 5 dan 3");
    }else{printf("BIlangan tersebut merupakan bilangan yang TIDAK HABIS dibagi 5 dan 3");}
}
