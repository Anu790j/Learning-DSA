#include<iostream>
#include<deque>

using namespace std;

void print(deque<int> d)
{
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    //for inserting and deleting at two different locations i.e front and back
    //deque or double ended queue is used
    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    print(d);

    d.pop_front();
    print(d);

    d.pop_back();
    print(d);
 return 0;   

}