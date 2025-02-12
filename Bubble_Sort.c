#include <stdio.h>
int main(){
int arr[]={7,3,8,1,5,9};
/*int arr[6];
int i, j, n = 6;
printf("Enter the elements: ");
for (i = 0; i < n; i++)
    {
    scanf("%d", &arr[i]);
    }*/
int i,j,n=6;
for(i=0;i<n-1;i++){
    for(j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1])
        {
            int temp =arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
 printf("\n After sorting:\n ");
 for(i=0;i<n;i++){
    printf("%d",arr[i]);
 }
return 0;
}


