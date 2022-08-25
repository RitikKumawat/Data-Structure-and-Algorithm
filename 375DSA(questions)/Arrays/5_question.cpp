#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int find_minDifference(int arr[],int n,int m){
    int min_diff=INT_MAX;
    if(m==0||n==0){
        return 0;
    }
    sort(arr,arr+n);
    if(m>n){
        return -1;
    }
    for(int i=0;i+m-1<n;i++){
        if(arr[(i+m)-1]-arr[i]<min_diff){
            min_diff=arr[(i+m)-1]-arr[i];
        }
    }

    return min_diff;

}
int main(){
int arr[7]={10,43,5,32,5,1,9};
int m=3;
cout<<find_minDifference(arr,7,m);

return 0;
}