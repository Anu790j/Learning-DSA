//Concept of binary search - For a sorted array(ascending) find its mid element , if mid == key (found) k,else if mid_ele < key move to right part ,else if mid_ele > key move to left part.
#include<iostream>
using namespace std;
int binarySearch(int arr[], int size,int key)
{
    int start=0;
    int end=size-1;

    int mid= start+(end - start)/2;   //Integer can maxium store the value 2^31

    while(start <= end)
    {
        if(arr[mid] == key)
        {
            return mid;
            
        }

        if(key > arr[mid])
        {
            start = mid + 1 ;
        }

        else
        {
            end = mid - 1 ;
        }

        mid =start+(end -start)/2;
        
    }
    return -1;
}

int main()
{
    int evenArray[ ]={2,5,9,10,11,18};
    int oddArray[ ]={1,3,9,12,15,16,21};

    int evenFound=binarySearch(evenArray,6,18);
    int oddFound=binarySearch(oddArray,7,1);

    cout<< "Element found at" <<evenFound<<endl;
    cout<<"Element Found at"<<oddFound;

    return 0;

}