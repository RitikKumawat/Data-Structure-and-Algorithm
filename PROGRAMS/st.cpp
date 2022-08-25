#include<iostream>
using namespace std;
int reverse(int n){
    int rev=0;
    int digit;
    while(n!=0){
        digit=n%10;
        if(rev>INT32_MAX/10 && rev<INT32_MIN/10){
            return 0;
        }
        rev=(rev*10)+digit;
        n=n/10;
    }
    
  return rev;
}
int main(){
// int n;
// cin>>n;
// cout<<reverse(n)<<endl;
// int a=5;
// int dg;
// int bin=0;
// while(a!=0)
//  {dg=a%2;
//    bin=(bin*10)+dg;
//  a=a/2;
//  }
//  cout<<bin;
int n=101;
int dec=0;
int i=1;
while(n!=0){
    int rem=n%10;
    dec=dec+(rem*i);
    i=i*2;
    n=n/10;
}
cout<<dec<<endl;
return 0;
}