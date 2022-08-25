#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool duplicate(vector<int> arr){
int f=0;
sort(arr.begin(),arr.end());
for(int i=0;i<arr.size();i++){
    if(arr[i]==arr[i+1]){
        f=1;
        break;
    }
}
if(f==1){
    return true;

}
else{
    return false;
}
}
int main(){
vector <int> arr;
arr.push_back(4);
arr.push_back(6);
arr.push_back(1);
arr.push_back(6);
arr.push_back(3);
cout<<duplicate(arr);
return 0;
}
