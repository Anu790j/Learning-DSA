#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){

    vector<int> v;

    v.push_back(1);
    v.push_back(10);
    v.push_back(5);
    v.push_back(7);
    v.push_back(20);


    for(auto i: v)
    {
        cout<< i <<" ";
    }
    cout<<endl;
    cout<<"Element 7 present or/not "<< binary_search(v.begin(),v.end(),7)<<endl;

    //for sorting intro sort works in it

    sort(v.begin(),v.end());

     for(auto i: v)
    {
        cout<< i <<" ";
    }



    

}