#include<iostream>
using namespace std;

bool PossibleSoln(int arr[],int n,int m,int mid)
{
    int count=1;
    int pgsm=0;

    for(int i=0;i<n;i++)
    {
        if(pgsm + arr[i] <= mid)
        {
            pgsm +=arr[i];
        }
        else{
            count++;
            if(count > m || arr[i]>mid)
            {
                return false;
            }
            else{
                pgsm=arr[i];
            }
        }
    }
    return true;
}

int minalloc(int arr[],int size,int m)
{
    int s=0;
    int e=0;
    int ans=-1;
    for(int i=0;i<size;i++)
    {
        e+=arr[i];
    }
    int mid=s+(e-s)/2;
    

    while(s<e)
    {
        if(PossibleSoln(arr,size,m,mid))
        {
            ans=mid;
            e=mid-1;
        }

        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return mid;
}

int  main(){

    int arr[]={10,20,30,40,50};
    int alloc=minalloc(arr,5,2);

    cout<<"Minnimum number of Pages that can be allocated to 2 students are "<<alloc;
    return 0;
}