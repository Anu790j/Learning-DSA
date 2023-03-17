#include<iostream>
using namespace std;

void printarr(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void sort012(int arr[], int n)
{
    int currIndex = 0;
    int left = 0;
    int right = n - 1;
    
    while (currIndex <= right)
    {
    	if (arr[currIndex] == 0) {
            swap(arr[currIndex], arr[left]);
            currIndex++;
            left++;
        }
        else if (arr[currIndex] == 1)
            currIndex++;
        else
        {
            swap(arr[currIndex], arr[right]);
            right--;
        }
    }
}

int main(){
    int arr[]={0,2,2,1,0,1,1,0,2};

    cout<<"Array before sorting"<<endl;

    printarr(arr,9);

    sort012(arr,9);

    cout<<endl<<"Array After Sorting"<<endl;

    printarr(arr,8);

    return 0;
}
