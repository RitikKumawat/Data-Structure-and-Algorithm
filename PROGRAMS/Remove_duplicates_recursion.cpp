#include<iostream>
using namespace std;
// "aaaabbbeeecdddd"
// "abecd"
string removeDup(string s){
    if(s.length()==0){
        return "";
    }

    char ch=s[0];
    string ans = removeDup(s.substr(1));

    if(ch==ans[0]){
        return ans;


    }

    return ch+ans;
}
int main(){
cout<<removeDup("aaaaabbbeeecdddd")<<endl;;
return 0;
}