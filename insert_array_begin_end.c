#include<stdio.h>
int main()
{
    int arr[10]={7,3,8,1,5,4};
    for(int i=0;arr[i]!=NULL;i++)
    {
        printf("%d\t",arr[i]);
    }
    for(int i=6;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    //inserting begining
    arr[0]=3;
    printf("\n");
    for(int i=0;arr[i]!=NULL;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    //inserting end
    arr[7]=10;
    printf("\n");
    for(int i=0;arr[i]!=NULL;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");

    //delete end
    arr[7]=0;
    for(int i=0;arr[i]!=NULL;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");

}

//output
//7       3       8       1       5       4
//3       7       3       8       1       5       4

//3       7       3       8       1       5       4       10
//3       7       3       8       1       5       4


