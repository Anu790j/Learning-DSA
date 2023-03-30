#include<iostream>
using namespace std;

int FirstOccurence(int arr[], int size,int key)
{
    int start = 0;
    int end = size-1;
 
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start <= end)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if( key > arr[mid])
        {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int LastOccurence(int arr[], int size,int key)
{
    int start = 0;
    int end = size-1;
 
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start <= end)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            start = mid+1;
        }
        else if( key > arr[mid])
        {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main(){

    int evenArray[ ]={2,5,7,18,18,18};
    int oddArray[ ]={0,0,0,2,16,16,16};

    int evenFound=FirstOccurence(evenArray,6,18);
    int oddFound=FirstOccurence(oddArray,7,16);

    cout<< "Element first occurence found at " <<evenFound<<endl;
    cout<<"Element First occurence Found at "<<oddFound<<endl;

    evenFound=LastOccurence(evenArray,6,18);
    oddFound=LastOccurence(oddArray,7,16);

    cout<< "Element Last occurence found at " <<evenFound<<endl;
    cout<<"Element Lasst occurence Found at "<<oddFound;

}