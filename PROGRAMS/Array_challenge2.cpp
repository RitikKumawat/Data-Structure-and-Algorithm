#include<iostream>
using namespace std;
int main(){
//Longest Arithmetic Subarray
int arr[7]={10,7,4,6,8,10,11};
int ans =2;
int pd = arr[1]-arr[0];
int j=2;
int curr =2;
while(j<7){
    if(pd==arr[j]-arr[j-1]){
        curr++;
    }
    else{
        pd=arr[j]-arr[j-1];
        curr=2;
    }
    ans=max(ans,curr);
    j++;
}
cout<<ans<<endl;
return 0;
}