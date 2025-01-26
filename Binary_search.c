#include<stdio.h>
int main()
{
    int a[]={1,2,4,5,7,11,13};
    int item=2;
    int start,end,mid;
    start=0;
    end=6 ;//n-1
    while(start<=end){

        mid=(start+end)/2;
        if(a[mid]==item){
            printf("Item at Found at index:%d\n",mid);
            return;
        }
        else if(a[mid]<item)
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    printf("Item not found\n");
    return 0;
}
//output
//Item at Found at index:1
