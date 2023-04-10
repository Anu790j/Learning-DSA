#include<iostream>
using namespace std;

int FirstOccurence(int arr[],int size,int key)
{
    int s = 0;
    int e = size - 1;
    int mid= s + (e - s)/2;
    int ans=-1;

    while(s <= e)
    {
        if (arr[mid] ==  key)
        {
            ans = mid;
            e = mid -1;
        }

        else if( key > arr[mid] )
        {
            s = mid +1;
        }
        else{
            e = mid -1;
        }

        mid= s + ( e - s)/2;
    }
    return ans;
}

int LastOccurence(int arr[],int size,int key)
{
    int s = 0;
    int e = size - 1;
    int mid= s + (e - s)/2;
    int ans=-1;

    while(s <= e)
    {
        if (arr[mid] ==  key)
        {
            ans = mid;
            s = mid + 1;
        }

        else if( key > arr[mid] )
        {
            s = mid +1;
        }
        else{
            e = mid -1;
        }

        mid= s + ( e - s)/2;
    }
    return ans;
    
}


int OccurCount(int arr[],int size,int key)
{
   
    int firstOccur= FirstOccurence(arr,size,key);
    int lastOccur= LastOccurence(arr,size,key);

    return (lastOccur - firstOccur) + 1;
}


int main(){

    int evenArray[ ]={2,5,7,18,18,18};
    int oddArray[ ]={0,0,0,2,16,16,16};

    int evenCount = OccurCount(evenArray,6,18);
    int oddCount = OccurCount(oddArray,7,0);

    cout<<"The No. of occurences of 18 is : "<< evenCount<<endl;
    cout<<"The No. of occurences of 0 is : "<< oddCount;

    return 0;
     
}

