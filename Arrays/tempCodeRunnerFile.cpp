#include<iostream>
using namespace std;

void inputarr(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}

void printarr(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int checkDuplicate(int arr[],int size)
{
    int ans=0;
    // Write your code here
    for(int i=0;i<size;i++)
    {
        ans=ans^arr[i];  //
        

    }
      cout<<ans<<endl;
    
   
    for(int i=1;i<size;i++)
    {
        ans=ans^i;
        
    }
    cout<<ans<<" ";
    return ans;
}

int main()
{
    int arr[100];
    int n;
    cout<<"How many elements you want to enter";
    cin>>n;

    inputarr(arr,n);

    cout<<endl<<checkDuplicate(arr,n);

    
}