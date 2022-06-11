#include<iostream>
using namespace std;
int main(){
//MAx till i
// Suppose an array [1,0,5,4,6,8]
// Max till i        1 1 5 5 6 8

int arr[6]={1,0,5,4,6,8};
int mx=0;
for(int i=0;i<6;i++){
    mx = max(mx,arr[i]);
        cout<<"MAX till i is: "<<mx<<endl;
    
}

return 0;
}