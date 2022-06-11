#include<iostream>
using namespace std;
int main(){
int a;
cout<<"enter a number to find whether it is prime or not"<<endl;
cin>>a;
int flag;
int m = a/2;
for(int i=2;i<=m;i++){
    if(a%i==0){
        cout<<"Not prime"<<endl;
        break;
        
    }
    else{
        cout<<"prime"<<endl;
        break;
    }
}
return 0;
}