#include<iostream>
using namespace std;
int Partition(int arr[],int low,int high)
{
    int pivot;
    pivot=arr[high];
    int i,j;
    j=high;
    i=low-1;
    while(1)
    {
        do
        {
            i++;
        }
        while(arr[i]<pivot);
        do
        {
            j--;
        }
        while(j>=low && arr[j]>pivot);
        if (i>=j)
        {
            break;
        }
        swap(arr[i],arr[j]);

    }
    swap(arr[i],arr[high]);
    return i;
}
void quickSort(int arr[],int low,int high)
{
    if(low<high)
    {
        int pi;
        pi=Partition(arr,low,high);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);

    }
}
void PRINT_ARRAY(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<" "<<arr[i];
    }
}
int main()
{
    int arr[]= {14,33,27,10,35,19,42,44};
    int n=sizeof(arr)/sizeof(arr[0]);
    PRINT_ARRAY(arr,n);
    quickSort(arr,0,n-1);
    cout<<endl;
    cout<<"The sorted list of array is:";
    PRINT_ARRAY(arr,n);

}
