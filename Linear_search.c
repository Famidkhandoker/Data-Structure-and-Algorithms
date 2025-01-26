/*#include<stdio.h>
int main()
{
    int arr[]={7,4,11,2,5,1};
    int pos=-1;
    //int value =2;
    //or
    int value;
    printf("Enter the value you want to search: ");
    scanf("%d",&value);
    for( int i=0;i<6;i++)
    {
        if(arr[i]==value)
        {
           pos=i+1;
           break;
        }
    }
    if(pos==-1)
    {
        printf("Not Found");
    }
    else{
        printf("The position of %d is :%d\n",value,pos);
    }
    return 0;
}*/

//output
//Enter the value you want to search: 4
//The position of 4 is :2

//on the other hand
#include<stdio.h>
int main(){
    int arr[]={7,4,11,2,5,1};
    int searchItem=2;
    int i;
    for(i=0;i<6;i++)
    {
        if(arr[i]==searchItem){
            printf("Item Found at Index: %d\n",i);
            return;
        }
    }
    printf("Item Not Found.\n");
}
