#include<iostream>
#include<strings.h>
using namespace std;
// String palindrome- after converting all upercase letters into lowercase and removing non alphanumeric charcters
// it reads same forward and backward 
// Input: s="A man, a plan, a canal: Panama"
// Output: true
bool isPalindrome(string s){
    string word={""};
    for(char c: s){
        if((c>='A' && c<='Z')||(c>='a' && c<='z')||(c>='0' && c<='9'))
            word.push_back(tolower(c));
    }
    int n = word.size();
    for(int i=0;i<n/2;i++){
        if(word[i]!=word[n-1-i])
            return false;
    }
    return true;
}
int main(){
string s="A man, a plan, a canal: Panama";
if(isPalindrome(s)){
    cout<<"String is a PALINDROME"<<endl;
}
else{
    cout<<"Not a PALINDROME"<<endl;
}
return 0;
}