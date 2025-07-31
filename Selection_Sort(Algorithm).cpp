#include<iostream>
using namespace std;

void selection_sort(int arr[],int n){
for(int i=0;i<n;i++){
    int min_i=i;
    int min_x=arr[i];
    for(int j=i+1;j<n;j++){
        if(arr[j]<min_x){
            min_i=j;
            min_x=arr[j];

        }
    }
    arr[min_i]=arr[i];
    arr[i]=min_x;
}
}
void print_array(int arr[],int n){
for(int i=0;i<n;i++){
    cout<<" "<<arr[i];
}
}
int main(){
   {
    int array1[8]= {14,33,27,10,35,19,42,44};
    cout<<"Unsorted array:"<<endl;
    print_array(array1,8);

    selection_sort(array1,8);
    cout<<"\nSorted Array:"<<endl;
    print_array(array1,8);
}
}
