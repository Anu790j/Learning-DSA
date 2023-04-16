#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void printArr(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}


void bubbleSort(int arr[],int size){

    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i] >= arr[j])                //Checking the adjacent element 
            swap(arr[i],arr[j]);                //if adjacent elemnt is smaller than replacing it
            
        }
    }

    cout<<endl<<"ArraY after sorting :"<<endl;
    printArr(arr,size);

}

int main(){

    int arr[]={12,2,6,8,4,10};
    cout<<"Array before sorting "<<endl;
    printArr(arr,6);
   
    bubbleSort(arr,6);
   
    return 0;
}
