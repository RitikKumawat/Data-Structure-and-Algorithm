#include<iostream>
using namespace std;

void max_SumSubarr(int arr[],int n, int K, int X){
    int ans=0;
    int sum=0;
    for(int i=0;i<K;i++){
        sum+=arr[i];
    }
    if(sum<X){
        ans=sum;
    }
    for(int i=K;i<n;i++){
        sum= sum-arr[i-K];
        sum+=arr[i];
        if(sum<X){
            ans = max(sum,ans);
        }
    }
    cout<<ans<<" is the maximum sum (<x)"<<endl;
}
int main(){
int arr[]={7,5,4,6,8,9};
int n=6;
int K=3;
int X=20;
max_SumSubarr(arr,n,K,X);
return 0;
}