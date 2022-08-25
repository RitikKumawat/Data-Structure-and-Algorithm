#include<iostream>
#include<vector>
using namespace std;
// Find the missing and non-repeating element in array

// void Miss_repeat(int a[]){
// vector<int> sum;
// int res=0;
// int mis[]={1,2,3,4,5};
// int s=0;
// for(int i=0;i<5;i++){
//     res= res^a[i];
//     s=a[i]^mis[i];
// }
// sum.push_back(res);
// sum.push_back(s);

// cout<<sum[0]<<endl;
// cout<<sum[1]<<endl;
// }
vector<int> find(vector<int> A){
vector<int>solArr;
    int res=0;
    vector<int> mis;
    int s=0;
    for(int i=0;i<A.size();i++){
        res=res^A[i];
        // mis.push_back(i+1);
        // s=A[i]^mis[i];
    }
    int setbit = res ^ (~res);
    int temp=res;
    int b;
    for(int i=0;i<A.size();i++){
        if((setbit & A[i])==1){
            temp=res^A[i];
        }
        else{
            
         b=res^temp;
        }
    }
    int a=temp;
    solArr.push_back(a);
    solArr.push_back(b);
    // solArr.push_back(s);
  
    return solArr;
}
int main(){
// int a[5]={4,1,3,4,1};
// Miss_repeat(a);
vector<int>A;
A.push_back(3);
A.push_back(1);
A.push_back(2);
A.push_back(5);
A.push_back(3);
vector<int> arr= find(A);
for(auto i: arr){
    cout<<i;
}
return 0;
}