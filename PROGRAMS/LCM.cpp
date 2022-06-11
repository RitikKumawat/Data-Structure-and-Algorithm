#include<iostream>
using namespace std;
int main(){
int a,b,lcm,gcd;
cout<<"Enter two numbers to find LCM"<<endl;
cin>>a>>b;
for(int i=1;i<=a && i<=b;i++){
    if(a%i==0 && b%i==0){
        gcd =i;
    }
}
lcm = (a*b)/gcd;
cout<<lcm<<endl;

return 0;
}