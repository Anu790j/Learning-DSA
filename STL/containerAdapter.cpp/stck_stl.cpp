#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<string> s;

    s.push("Stack");
    s.push("uses");
    s.push("LIFO");

    cout<<"Stack top ->"<<s.top()<<endl;

    s.pop();

    cout<<"empty or not "<<s.empty()<<endl;

    cout<<"Size ->"<<s.size()<<endl;
    return 0;
}