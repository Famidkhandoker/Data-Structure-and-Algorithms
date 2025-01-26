#include<iostream>
using namespace std;
int main()
{
    int arr[10]={7,3,8,1,5,4};
    cout<<"Main Array"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<"\t";
    }
   for(int i=10;i>=0;i--)
   {
       arr[i-1]=arr[i-2];
   }
   arr[0]=10;
   cout<<endl<<"After insertion an element in the beining"<<endl;
   for(int i=0;i<10;i++)
   {
       cout<<arr[i]<<"\t";
   }
   arr[7]=11;
   cout<<endl<<"After insertion an element in the end"<<endl;
   for(int i=0;i<10;i++)
   {
       cout<<arr[i]<<"\t";
   }
   for(int i=10;i>=3;i--)
   {
       arr[i-1]=arr[i-2];
   }
   arr[2]=55;

    cout<<endl<<"After insertion an element in position 3"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<"\t";
    }
     for(int i=2;i<9;i++)
   {
       arr[i]=arr[i+1];
   }
       cout<<endl<<"After insertion an element in position 3"<<endl;
        for(int i=0;i<10;i++)
        {
           cout<<arr[i]<<"\t";
        }
    for(int i=0;i<9;i++)
    {
       arr[i]=arr[i+1];
    }
    cout<<endl<<"After deleting first element"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<"\t";
    }
    arr[6]=0;
     cout<<endl<<"After deleting last element"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;

}
