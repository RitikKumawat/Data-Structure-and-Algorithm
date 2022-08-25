#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

void revString(vector<char> &s){
    if(s.size()==0)
     return;
    
    cout<<s[s.size()-1];
    s.pop_back();
    revString(s);
}

int main(){
vector<char> s;
s.push_back('H');
s.push_back('e');
s.push_back('l');
s.push_back('l');
s.push_back('o');
// cout<<s[s.size()-1];
revString(s);



return 0;
}