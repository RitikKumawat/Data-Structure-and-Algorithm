#include<iostream>
#include<string>
#include<map>
#include<unordered_map>
/* 
Print all the duplicates in input string 
INPUT:-  s="geeksforgeeks"
OUTPUT:- e 4
         g 2
         k 2            We have to print all the characters in given string which has occurence greater than 1 
         s 2            
*/
using namespace std;
void print_ocuurence(string s){           // This approach has Time complexity of: O(n*log(n))
    map<char, int> mp;
    for(int i=0;i<s.length();i++){
    mp[s[i]]++;
    }
    map<char,int>:: iterator it;
    for(it=mp.begin();it!=mp.end();it++){
    if(it->second>1 && ((it->first>='A'||it->first>='a') && (it->first<='Z' || it->first<='z'))){

    cout<<it->first<<" "<<it->second<<endl;
    }
    }
}
void print_occurence2(string s){        // This approach has Time complexity of: O(n)
    unordered_map<char,int> ump;
    for(int i=0;i<s.length();i++){
        ump[s[i]]++;
    }
    unordered_map<char,int> :: iterator it;
    for(it=ump.begin();it!=ump.end();it++){
        if(it->second>1 && ((it->first>='A'||it->first>='a') && (it->first<='Z' || it->first<='z'))){
            cout<<it->first<<" "<<it->second<<endl;
        }
    }
}
int main(){
string s="geeks for geeks";
print_ocuurence(s);       // This approach has Time complexity of: O(n*log(n))
cout<<endl;               
print_occurence2(s);      // This approach has Time complexity of: O(n)


return 0;
}