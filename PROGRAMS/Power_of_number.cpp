#include<iostream>
using namespace std;
int main(){
int base,exp;
long double result = 1.0;
cout<<"enter Base:"<<endl;
cin>>base;
cout<<"enter exponent"<<endl;
cin>>exp;
while(exp!=0){
    result*=base;
    exp--;
}
cout<<"Answer:"<<result<<endl;
return 0;
}