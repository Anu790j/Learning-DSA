//Finding Sqaure root using Binary Search

#include<iostream>
using namespace std;

int Binsqrt(int n)
{
    int s=0;
    int e=n;
    int mid= s + (e - s)/2;

    while(s<e)
    {
        int sqr=(mid*mid);
        if( sqr == n ){
            return mid;
        }
        else if (sqr >= n){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }

        mid = s + (e -s)/2;
    }
    return mid;

}

int main(){

    int num=25;
    int sqrt=Binsqrt(num);

    cout<<"The sqrt of "<<num<<" is :"<<sqrt;
    return 0;
}