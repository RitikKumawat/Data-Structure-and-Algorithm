#include<iostream>
using namespace std;
int main(){

int arr[10]={1,2,3,4,5,6,3,2,2,10};
int sum=0;
int mx =arr[0];
for(int i=1;i<10;i++){
    mx = max(mx,arr[i]);
}
cout<<mx<<endl;
return 0;
}