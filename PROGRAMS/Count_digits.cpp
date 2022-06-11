#include<iostream>
using namespace std;
int main(){
int a;
cout<<"Enter an Integer :"<<endl;
cin>>a;
int count = 0;
while(a!=0){
    a=a/10;
    count++;
}

cout<<"Digits is : "<<count<<endl;
return 0;
}