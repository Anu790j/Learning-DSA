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

    for(int i=1;i<size;i++)
    {
        bool swapped=false;

        for(int j=0;j<(size-i);j++)
        {
            if(arr[j] >= arr[j+1]) {              //Checking the adjacent element 
                 swap(arr[j],arr[j+1]);           //if adjacent elemnt is smaller than replacing it
                                                     
                 swapped =true;

            }                                      
            
        }
        if (swapped == false)
            break;
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
