#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main(){
int a;
cout<<"Enter the number which you want factorial"<<endl;
cin>>a;
int s = factorial(a);
cout<<s<<endl;
return 0;
}       