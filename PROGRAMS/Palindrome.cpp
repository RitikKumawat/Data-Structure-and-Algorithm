#include<iostream>
using namespace std;
int main(){
int a;
cout<<"Enter an Integer: "<<endl;
cin>>a;
int n=a;
int rev=0;
int rem;
while(n!=0){
    rem=n%10;
    rev = rev*10+rem;
    n=n/10;
}
if(rev==a){
    cout<<"Its a palindrome"<<endl;


}
else{
    cout<<"not a palindrome"<<endl;
}
return 0;
}