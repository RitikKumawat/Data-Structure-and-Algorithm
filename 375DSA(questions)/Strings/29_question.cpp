#include<iostream>
#include<string.h>
#include<stack>
using namespace std;
/* 
    Valid PArenthesis 
    Input s="(){}[]"
    output= true

    Input s="()"
    output=true

    input s="(]"
    output= false

*/
bool valid_Parenthesis(string s){
    stack<char>st;
    int n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }
        else if(s[i]==')' || s[i]=='}' || s[i]==']'){
            if(st.empty())
                return false;
            
            else if(s[i]==')' && st.top()!='(')
                return false;
            else if(s[i]=='}' && st.top()!='{')
                return false;
            else if(s[i]==']' && st.top()!='[')
                return false;
            else
                st.pop();
        }
    }
    if(st.empty())
        return true;
    return false;
}
int main(){
string s ="(){}[]";
if(valid_Parenthesis(s)){
    cout<<"Its a valid PArenthesis"<<endl;
}
else{
    cout<<"Not a valid parenthesis"<<endl;
}
return 0;
}