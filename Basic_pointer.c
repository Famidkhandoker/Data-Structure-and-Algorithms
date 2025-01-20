//* means Reference stored the memory address
// & means Dereference stored the memory address value
#include<stdio.h>
int main()
{
    int x=10;
    int *y =&x;
    printf("%x\n",&x);//61fe1c
    printf("%d\n",&x);//6422044
    printf("%d\n",x);//10
    printf("%d\n",&y);//6422032
    printf("%d\n",y);//6422044
}
