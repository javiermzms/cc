#include <stdio.h>

int fibonacci(int n)
{
    int aux;
    if(n==0) aux=1;
        else if (n==1) aux=1;
                  else aux=fibonacc(n-1)+fibonacci(n-2);
        return aux;
}
void main(){
    int n;
    printf("Fibonacci de: ");
    scanf ("%d\n", fibonacci(n));
    return;
}
