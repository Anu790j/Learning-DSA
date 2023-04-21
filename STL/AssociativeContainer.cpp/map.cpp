#include<iostream>
#include<map>

using namespace std;

int main(){

    map<int ,string> m;

    //key value pair that are sorted

    m[0] = "Learning";
    m[15] = "Map";
    m[2] = "In stl";

    m.insert({5,"It's done"});

    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    //creating iterator at specfic position

    m.insert({20,"Yeah! I got it"});

    auto it = m.find(5);

    for(auto i=it ; i != m.end(); i++)
    {
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }

return 0;
}