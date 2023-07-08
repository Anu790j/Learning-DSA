#include<iostream>
using namespace std;

int main(){

    int arr[10] = {1,5,7};
    cout<<int(arr)<<endl; //print the address the of first block
    cout<<*arr<<endl;
    cout<<int(arr+1)<<endl; //print the address of the next block
    cout<<*arr+1<<endl;   //increment the value by 1 at 0th index

    cout<<*(arr+1)<<endl;  //print the value at 1st index

    cout<<int(&arr[0])<<endl;  //print the adress the of the 0th index
    cout<<*(&arr[0])<<endl;    //print the value at 0th index
    cout<<int(&arr[0]+1)<<endl;  //print the adress of 1th index
    cout<<*(&arr[0]+1)<<endl;  //print the value of 1th index
    cout<<int(&arr[0])+1<<endl; 

    cout<<"Creating array pointer"<<endl;

    //POinter Arthimetic
    //creating array pointer
    int *p=arr;
    cout<<int(p)<<endl;
    cout<<*p<<endl;
    cout<<int(p+1)<<endl;   //Adress of next block
    cout<<int(p)+1<<endl;   //incremet address by 1
    cout<<*p+1<<endl;     //Incrementing the value by 1
    cout<<(*p)+1<<endl;  //Incrementing the value by 1
    cout<<*(p+1)<<endl;  //printing the value at 1th index

    cout<<2[arr]<<endl; 
    cout<<*(1+arr)<<endl;  //important



    cout<<"Creating other type of pointer"<<endl;
    int *d = &(1[arr]);
    int *e = arr+1;
 
    char ch='a';
    char *a=&ch;
    cout<<a<<endl;
    cout<<int(a)<<endl;
    cout<<int(a+1)<<endl;
    cout<<ch<<endl;
    cout<<sizeof(ch)<<endl;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(*a)<<endl;
    cout<<sizeof(&a)<<endl;
    cout<<sizeof(p)<<endl;
    cout<<sizeof(*p)<<endl;
    cout<<sizeof(&p)<<endl;



    cout<<int(d)<<endl;
  cout<<"Creating normal int pointer"<<endl;

    int f= 10;
    int *g=&f;
    cout<<"Address of f "<<int(g)<<endl;
    cout<<"Address of g"<<int(&g)<<endl;
    g=g+1;
    cout<<f<<endl;
    cout<<"Address afterincrementing"<<int(g)<<endl;
    cout<<int(&g)<<endl;
    *g=(*g)+1;
    cout<<int(g)<<endl;
    cout<<int(&g)<<endl;
    cout<<f<<endl;
    cout<<*g<<endl;
    return 0;

    
} 