#include<iostream>
using namespace std;

int fibn(int n)
{
    int c1=0;
    int c2=1;
    int sum=0;


    if(n < 1)
    {
        cout<<"Enter valid number";
        exit(1);
    }
    if(n == 2)
    {
        return c2;
        
    }

    if(n == 1)
    {
        return c1;
       
    }
    for(int i=2;i<n;i++)  //Fib first two terms are 0 and 1 hence loop will iterate from 2
    {
        sum=c1+c2;
        c1=c2;
        c2=sum;
    }

    return sum;

}

int main(){
    int n;
    cout<<"Which fib term you want to see  :";
    cin>>n;

    cout<<"The "<<n<<" fibonnaci term is "<< fibn(n);

    return 0;
}