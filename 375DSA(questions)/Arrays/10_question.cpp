#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// Kth largest element in array
/*
given an array {3,2,1,5,6,4}
k=2 
we have to return second largest element which is {5}
*/
int Kth_largest(vector<int>& arr, int k){
    sort(arr.begin(), arr.end());

    return arr[arr.size()-k];
}
int main(){
vector<int> arr;
arr.push_back(3);
arr.push_back(2);
arr.push_back(1);
arr.push_back(5);
arr.push_back(6);
arr.push_back(4);
int k=2;
cout<<Kth_largest(arr,k)<<endl;
return 0;
}