#include<iostream>
using namespace std;

void inputarr(int arr[],int size)  //Function for input array elements
{
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}


void printarr(int arr[],int size)  //Function for printing array elements
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}


void swapAlternate(int arr[], int size) {

    for(int i = 0; i<size; i+=2 ) {
        if(i+1 < size) {
            swap(arr[i], arr[i+1]);
        }
    }

}


int main()
{

    int arr[100];
    int n;
    cout<<"Enter the Number Of element you want to input  :";
    cin>>n;

    inputarr(arr,n);
    cout<<"Array before Swapping"<<endl;
    printarr(arr,n);

    swapAlternate(arr,n);

    cout<<endl<<"Array after Alternate Swapping"<<endl;
    printarr(arr,n);

    return 0;

}