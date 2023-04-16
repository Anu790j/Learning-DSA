#include <bits/stdc++.h>
#include<iostream>
using namespace std;

void printArr(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int selectionSort(int arr[],int size)
{
   
    for(int i=0;i<size-1;i++)
    {
        int minIndex = i;
        for(int j = i+1; j < size;j++)
        {
            if(arr[j] < arr[minIndex])     //Finding the minimal element in the array
            minIndex = j;
        }

        swap(arr[minIndex],arr[i]);        //swaping the element vwith minimal element found .
    }
    cout<<endl<<"Array after sorting "<<endl;
    printArr(arr,size);

    return 0;
}



int main(){

    int arr[]={12,2,6,8,4,10};
    cout<<"Array before sorting "<<endl;
    printArr(arr,6);
   
    selectionSort(arr,6);
   
    return 0;
}

