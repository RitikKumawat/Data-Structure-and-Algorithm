#include<iostream>
#include<string.h>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
string s="abcabcbb";

unordered_map<char,int> ump;
int start=0,max_len=0;
for(int i=0;i<s.length();i++){
   if(ump.find(s[i])!=ump.end() && ump[s[i]]>=start){

    start = ump[s[i]]+1;
   }
   ump[s[i]] = i;
   max_len = max(max_len,i-start+1);
}
cout<<max_len<<endl;


return 0;
}