#include<iostream>
using namespace std;

int main(){
int arr[6]={1,6,5,3,6,4};
int mx=0;
for(int i=0;i<6;i++){
    for(int j=i+1;j<6;j++){
        if(arr[j]>arr[i]){
           int pro= arr[j]-arr[1];
           mx=max(mx,pro);
        }
    }
}
cout<<mx<<endl;
return 0;
}