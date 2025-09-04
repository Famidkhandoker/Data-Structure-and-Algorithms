#include<iostream>
using namespace std;
void heapify(int arr[],int N,int i){
int largest,left,right,l,r;
largest =i;
left=2*i+1;
l=2*i+1;
right=2*i+2;
r=2*i+2;
if(l<N && arr[l]>arr[largest]){
largest=l;
}
if(r<N && arr[r]>arr[largest]){
largest=r;
}
if(largest!=i){
swap (arr[i],arr[largest]);
heapify(arr,N,largest);
}
}
void heapSort(int arr[],int N){
for(int i=N/2-1;i>=0;i--){
heapify(arr,N,i);
}
for(int i=N-1;i>=1;i--){
swap(arr[0],arr[i]);
heapify(arr,i,0);
}
}
void PRINT_ARRAY(int arr[],int N){

for(int i=0;i<N;i++){
cout<<" "<<arr[i];
}
}
int main(){
int arr[]={14, 33, 27, 10, 35, 19, 42, 44};
int N=sizeof(arr)/sizeof(arr[0]);
PRINT_ARRAY(arr,N);
heapSort(arr,N);
cout<<endl;
cout<<"The sorted list of array is:";
PRINT_ARRAY(arr,N);
return 0;
}
/*
 14 33 27 10 35 19 42 44
The sorted list of array is: 10 14 19 27 33 35 42 44
*/
