#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int> a;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        a.push_back(arr[i]);
    }
    
    for(auto j: a){
        cout<<j<<" ";
    }
return 0;
}