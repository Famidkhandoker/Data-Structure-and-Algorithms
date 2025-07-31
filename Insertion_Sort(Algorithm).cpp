#include<iostream>
using namespace std;
 void insertion_sort(int arr[],int n){
    int key ,j=0;
    for(int i=1;i<=n-1;i++){
        key=arr[i];
        j=i-1;
        while(j>=0&& arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }

 }
 void print_array(int arr[],int n){
 for(int i=0;i<n;i++){
    cout<<" "<<arr[i];
 }
 }
 int main(){
 int array1[8]={14,33,27,10,35,19,42,44};
 cout<<"Unsorted array:"<<endl;
 print_array(array1,8);

 insertion_sort(array1,8);
 cout<<"\nSorted Array:"<<endl;
 print_array(array1,8);
 }
