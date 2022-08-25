#include<iostream>
#include<set>
using namespace std;
int main(){
set<int> s;
set<int, greater<int>> s1;
s.insert(1);
s.insert(2);
s.insert(2);
s.insert(3);
s.insert(4);
for(auto i: s){
    cout<<i<<" ";
}

cout<<endl;
    for(auto i=s.rbegin();i!=s.rend();i++ )
    {
        cout<<*i<<" ";
    }cout<<endl;

s1.insert(10);
s1.insert(20);
s1.insert(30);
s1.insert(60);
for(auto i:s1){
    cout<<i<<" ";
}cout<<endl;
return 0;
}