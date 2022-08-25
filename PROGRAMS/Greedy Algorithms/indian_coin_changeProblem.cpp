#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int n;
cout<<"Enter the number of denominations"<<endl;
cin>>n;
vector<int> a(n);
cout<<"Enter the denomimnation"<<endl;
for(int i=0;i<n;i++){
    cin>>a[i];
}
int X;
cout<<"Enter the value of X"<<endl;
cin>>X;
sort(a.begin(),a.end(), greater<int>());
int ans=0;
for(int i=0;i<n;i++){
    ans+= X/a[i];
    X-= X/a[i]*a[i];
}
cout<<"Minimum number of coins required: "<<ans<<endl;


return 0;
}