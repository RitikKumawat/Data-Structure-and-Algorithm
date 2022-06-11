#include<iostream>
using namespace std;
//How many numbers between 1 and 1000 which are divisible by 5 or 7
//Inclusion  Exclusion principle
// a= numbers divisible by 5
// b= numbers divisible  by 7
// c= numbers divisible by both 5 and 7
// ans =a+b-c
int divisible(int n, int a, int b){
    int c1 =n/a;
    int c2 =n/b;

    int c3 = n/(a*b);

    return c1+c2-c3;
}
int main(){
int n,a,b;
cin>>n>>a>>b;

cout<<divisible(n,a,b);

return 0;
}