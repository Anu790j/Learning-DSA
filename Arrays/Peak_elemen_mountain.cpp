#include<iostream>
using namespace std;

int findPeak(int arr[],int size)
{
    int s=0;
    int e=size -1;
    int mid= s + (e -s)/2;

    while(s<e)
    {
        if(arr[mid] < arr[mid+1])  //Upside of line ,To move closer to peak element we will increment start
        {
            s= mid+1;
        }
        else{    // It means either we are on peak or on the downside of mountain line.So, To move closer to the peak we will move end

            e = mid;
        }

        mid= s + (e-s)/2;
    }

    return s;
}

int main()
{
    int mountainarr[]={2,4,7,8,7,6,5,1};

    int peak=findPeak(mountainarr,8);

    cout<<"The peak of mountain array is "<< peak;

    return 0;
}