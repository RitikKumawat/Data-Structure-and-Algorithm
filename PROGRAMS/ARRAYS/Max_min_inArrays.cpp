#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int max=INT16_MIN;
int min=INT16_MAX;
for(int i=0;i<n;i++){
    if(arr[i]>max){
        max=arr[i];
        
    }
    if(arr[i]<min){
        min=arr[i];
    }
}
cout<<"Max in array is: "<<max<<endl;
cout<<"Min in array is: "<<min<<endl;
return 0;
}