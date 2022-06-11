#include<iostream>
using namespace std;
int knapsack(int val[], int we[], int n, int w){
    if(n==0 || w==0){
        return 0;
    }
    if(we[n-1]>w){
        return knapsack(val,we,n-1,w);
    }
    return max (knapsack(val,we,n-1,w-we[n-1])+val[n-1],knapsack(val,we,n-1,w));
}
int main(){
int we[]={10,20,30};
int val[]={100,50,150};
int w=50;
cout<<knapsack(val,we,3,w);
return 0;
}