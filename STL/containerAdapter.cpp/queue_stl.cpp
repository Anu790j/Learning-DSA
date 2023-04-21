#include<iostream>
#include<queue>

using namespace std;

int main(){

    queue<string> q;

    q.push("Hello");
    q.push("it's");
    q.push("queue");
    q.push("that follows FIFO Order");

    cout<<"Queue top element "<< q.front()<<endl;

    q.pop();
    cout<<"After popping out "<<endl;
    cout<<"Queue top element "<< q.front()<<endl;


    return 0;
}