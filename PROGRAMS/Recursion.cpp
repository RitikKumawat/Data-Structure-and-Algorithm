#include<iostream>
using namespace std;
// Sum till i
int Sum(int n){
    if(n==0)
    return 0;

    return n+Sum(n-1);
}
int Power(int n,int p){
    if(p==0)
    return 1;

    return n*Power(n,p-1);
}
int Fact(int n){
    if(n==0||n==1)
    return 1;

    return n*Fact(n-1);
}
int Fibbonaci(int n){
    if(n==0 || n==1)
    return n;

    return Fibbonaci(n-1)+Fibbonaci(n-2);
}
int main(){
int a;
cin>>a;
cout<<Sum(a)<<endl;
cout<<Power(4,3)<<endl;
cout<<Fact(5)<<endl;
cout<<Fibbonaci(4);
return 0;
}