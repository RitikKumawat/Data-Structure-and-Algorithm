#include<iostream>
using namespace std;
int main(){
//Sum of all subarrays

int arr[5]={1,2,0,7,2};
int sum=0;
for(int i=0;i<5;i++){
    sum=0;
    for(int j=i;j<5;j++){
        sum=sum+arr[j];
    cout<<"Sum of all Subarrays :"<<sum<<endl;
    }
}
return 0;
}