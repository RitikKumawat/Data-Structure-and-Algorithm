#include<iostream>
using namespace std;
// REmove all DUplicate elements
// ex- input s= "aabbcccdd"
//     output = "abcd" 
string remove_dup(string s){
    
    if(s.size()==0){
        return "";
    }
    char ch=s[0];
    string res=remove_dup(s.substr(1));
    if(ch==res[0]){
        return res;
    }
    else{
        return ch+res;
    }
}
int main(){
string s="aaabbccdd";
cout<<remove_dup(s);
return 0;
}