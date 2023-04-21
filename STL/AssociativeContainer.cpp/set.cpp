#include<iostream>
#include<set>

using namespace std;

int main()
{
    set<int> s;
    //only stores unique element
    //binary search tree work in background

    s.insert(1);    //tc -> O(logn)

    //for including iterator

    set<int>::iterator it= s.begin();
    it++;

    

}