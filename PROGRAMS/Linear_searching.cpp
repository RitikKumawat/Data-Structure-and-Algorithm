#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the size of array"<<endl;
cin>>n;
int arr[n];
cout<<"Enter the elements of array: "<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int key;
cout<<"Enter key value"<<endl;
cin>>key;

for(int i=0;i<n;i++){
    if(arr[i]==key){
        cout<<"key is at index: "<<i<<endl;
        break;
        
    }
   
}
return 0;
}