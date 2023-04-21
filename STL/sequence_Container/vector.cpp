#include<iostream>
#include<vector>

using namespace std;

int main(){
    
    vector<int> v;

    //for intializing vector with predefined size and all elements set to ele

    vector<int> a(5,1);

    //to copy the whole vector in new one

    vector<int> last(a);
    
    for( int i:a)
    {
        cout<<i<<" ";
    }    
    cout<<endl;
    //To know how much vector can hold capacity
     cout<<"Capacity -> "<<v.capacity()<<endl;
    
    // To add/push element push_back(ele) it add element at last

    v.push_back(1);
    cout<<"Capacity -> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity -> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity -> "<<v.capacity()<<endl;

    cout<<"size-> "<<v.size();

    cout<<"Before pop"<<endl ;
    //for printing 
    for(int i:v)
    {
        cout<<i<<" ";
    }

    //to pop the element from last pop_back()
    v.pop_back();

    cout<<"After pop"<<endl;

    for(int i:v)
    {
        cout<<i<<" ";
    }

    cout<<"Size before clear "<<v.size()<<" capacity -> "<<v.capacity()<<endl;
    v.clear();
    cout<<"Size after clear "<<v.size()<<" cvapacity - >"<<v.capacity()<<endl;;


     return 0;


}




