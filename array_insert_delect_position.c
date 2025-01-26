#include<stdio.h>
int main()
{
    //insert 1st element
    int arr[10]={7,3,8,1,5,4};
    for(int i=6;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    printf("\n");
    arr[0]=2;
    for(int i=0;arr[i]!=NULL;i++)
    {
        printf("%d\t",arr[i]);//2       7       3       8       1       5       4
    }

}


#include<stdio.h>
int main()
{
    //delete last element
    int arr[10]={7,3,8,1,5,4};
        arr[5]=0;
    for(int i=0;arr[i]!=NULL;i++)
    {
        printf("%d\t",arr[i]);//7       3       8       1       5
    }

}

