#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int MaxSum = INT_MIN;
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        int sum=0;
        for(int k=i;k<=j;k++){
           // cout<<arr[k]<<" ";
            sum+=arr[k];
        }//cout<<endl;
        MaxSum = max(MaxSum,sum);
    }
}
cout<<"MAximum sum of given subarray is: "<<MaxSum<<endl;


return 0;
}