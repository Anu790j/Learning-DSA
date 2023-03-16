#include<iostream>
using namespace std;

void inputarr(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}

void reverse(int arr[],int size)
{
    int start=0;
    int end=size-1;

    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}

void printarr(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){
    //Intializing of Array
    int arr[100];
    int n;
    cout<<"Enter the Number Of element you want to input  :";
    cin>>n;
   
    

    inputarr(arr,n);
    cout<<"Array before"<<endl;
    printarr(arr,n);
    
    reverse(arr,n);

    cout<<endl<<"Array After Reversal"<<endl;

    printarr(arr,n);

}