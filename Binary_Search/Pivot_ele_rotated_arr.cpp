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

int main(){

    int rot_arr[]= {5,6,7,1,2,3,4};

    int pivot= findPivot(rot_arr,7);

    cout<<"Pivot element found at "<<pivot;

    return 0;
} 
