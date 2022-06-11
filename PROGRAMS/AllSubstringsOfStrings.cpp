#include<iostream>
using namespace std;
void Substring(string s, string ans){
    
    if(s.length()==0){
    
    cout<<ans<<endl;
    return;
    }

    char ch=s[0];
    string res=s.substr(1);

    Substring(res,ans);
    Substring(res,ans+ch);
}

int main(){
Substring("ABC","");
return 0;
}