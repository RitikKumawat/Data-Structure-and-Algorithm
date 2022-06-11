#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int key)
{
    int s=0;
    int e=n;
    while(s<=e){
        int mid = s+e/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}
int main(){
int n;
cout<<"enter size of array"<<endl;
cin>>n;
int arr[n];
int key;
cout<<"enter elements"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"enter key"<<endl;
cin>>key;
int a=BinarySearch(arr,n,key);
cout<<a;
return 0;
}