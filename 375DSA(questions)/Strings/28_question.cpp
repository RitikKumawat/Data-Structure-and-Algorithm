#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
// Valid Anagram 
/* input s="anagram" t="nagaram" 
   output = true

   input s="rat" t="car"
   output= false

*/
bool isAnagram(string s, string t){
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s!=t){
        return false;
    }
    return true;
}
int main(){
string s="anagram";
string t="nagaram";
if(isAnagram(s,t)){
    cout<<"These two strings are ANAGRAMS"<<endl;
}
else{
    cout<<"NOT ANAGRAMS"<<endl;
}
return 0;
}