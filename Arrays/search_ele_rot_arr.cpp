#include<iostream>
using namespace std;

int findPivot(int arr[], int size)
{
    int s = 0;
    int e = size-1;
    int mid = s + (e - s)/2;

    while(s<e){

        if(arr[mid] >= arr[0] )     // It means we are on first line.
        {
            s =mid+1;               //To move closer to the pivot element.
        }
        else{
            e=mid;                  // Mid itself can be pivot and we are on second line.
        }

        mid = s + (e - s)/2;

    }
    return s;
}

int binarySearch(int arr[],int s,int e,int key)
{
    int mid= s + (e - s)/2;
    while(s<=e)
    {
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid] <= key){
            s = mid +1;
        }
        else{
            e = mid - 1;
        }

        mid= s + (e - s)/2;
    }
    return -1;
}


int searchRot(int arr[],int size,int key)
{
    int pivot=findPivot(arr,size);

    int s=0;
    int e= size-1;
    int index=-1;

    if(key >= arr[pivot] && key <= arr[e])
    {
        index=binarySearch(arr,pivot,e,key);
    }
    else{
        index=binarySearch(arr,s,pivot,key);
    }

    return index;
}

int main(){
    
    int even_rot[]={5,6,7,1,2,3};
    int odd_rot[]={5,6,7,8,1,2,3};

    int even_Foun=searchRot(even_rot,6,2);
    int odd_Foun=searchRot(odd_rot,7,6);

    cout<<"Element 2 found at "<<even_Foun<<endl;
    cout<<"Element 6 found at "<<odd_Foun<<endl;

    return 0;
    
}