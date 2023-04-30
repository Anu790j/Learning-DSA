//leetcode Chexk Permuatation ques
//Window concept

#include<iostream>
using namespace std;

bool checkEqual(int a[26],int b[26]){

   

    for(int i=0;i<26;i++){

        if(a[i] != b[i])
        {
            return false;
        }
        return true;
    }
}

bool checkPermutation(string s1, string s2){



    //character count array 
    int count1[26] = {0};

    for(int i=0;i<s1.size();i++){
        int index = s1[i] - 'a';
        count1[index]++;
    }

    //traverse s2 string in window of size s1 lenght and compare

    int i=0;
    int windowSize = s1.length();
    int count2[26] = {0};
    

    //traversing for first window

    while(i < windowSize && i < s2.length()){

        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }

    if(checkEqual(count1,count2)){
        return 1;
    }

    //move the window ahead

    while(i < s2.length())
    {
        char newChar = s2[i];
        int index = newChar - 'a';
        count2[index]++;

        char oldChar = s2[i - windowSize];
        index= oldChar - 'a';
        count2[index]--;
        i++;

        if(checkEqual(count1,count2)){
        return 1;
        }
        
    }

    return 0;
}

int main(){
    
    string a = "ab";
    string b = "dbcbaaabfg";


  
    if(checkPermutation(a,b)){
        cout<<"Exists";
    }

    else{
        cout<<"Not exists";
    }

    return 0;
}