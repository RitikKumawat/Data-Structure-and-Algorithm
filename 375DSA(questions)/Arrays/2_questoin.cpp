#include<iostream>
using namespace std;
//REVERSE THE ARRAY

int main(){
int arr[5]={1,2,3,4,5};
int start=0;
int end=4;
while(start<end){
    swap(arr[start],arr[end]);
    start++;
    end--;
}
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
return 0;
}