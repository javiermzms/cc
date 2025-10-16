#include <stdio.h>
int main(){
    int any;
    printf ("Introdueix l'any: ");
    scanf("%d", &any);
    if(any%4==0)
        if(any%100==0)
           if(any%400==0)
               printf("Si que es de traspas\n");
           else printf("No es de traspas\n");
        else printf("Si es de traspas\n");
    else printf("No es de traspas\n");
    return 0;

}
