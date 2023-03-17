#include<iostream>
using namespace std;

void printarr(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void sort01(int arr[],int size)
{
    int i=0, j=size-1;

        while(i<j)
        {
            while(arr[i] == 0 && i <  j )
            {
                i++;
                
            }
            while(arr[j] == 1  && i < j)
            {
                j--;
            }
            
            if(i < j)
            {
                swap(arr[i],arr[j]);
                i++;
                j--;
            }
            
                
            

        }
    
}

int main()
{
    int arr[]={1,1,0,0,0,0,1,0};

    cout<<"Array before sorting"<<endl;

    printarr(arr,8);

    sort01(arr,8);

    cout<<endl<<"Array After Sorting"<<endl;

    printarr(arr,8);

    return 0;


}