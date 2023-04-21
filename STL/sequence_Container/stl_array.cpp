#include<iostream>
#include<array>

using namespace std;

int main(){
    //creating array through stl

    array<int,4> a={1,2,3,4};

    //printing out
    //for size use size()
     int s= a.size();
    for(int i=0;i<s;++i)
    {
        cout<<a[i]<<" ";
    }

    //for printing certain index use "at" tc = o(1)

    cout<<"Element at index 2 is "<<a.at(2)<<endl;

    //for emptiness

    cout<<"Array empty or not "<<a.empty()<<endl;

    //for printing first element 
    cout<<"Front elements "<< a.front()<<endl;

    //for printing last elemnent
    cout<<"Last element "<<a.back()<<endl;

    return 0;
}