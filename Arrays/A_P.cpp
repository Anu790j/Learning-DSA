#include<iostream>
using namespace std;

int ap(int n){
    int ap=0;
    for(int i=0;i<n;i++)
    {
        ap+=(3*n+7);
    }
    return ap;
}

int main(){
    int n;
    cout<<"Enter a number ";
    cin>>n;

    cout<<"The AP till given number "<<n<<" is "<<ap(n);
    return 0;
}