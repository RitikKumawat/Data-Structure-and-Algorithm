#include<iostream>
#include<vector>
using namespace std;

vector<int> product_itself(vector<int> &a){
    vector<int> res(a.size());
    int rp=1;
    
    for(int i=0;i<a.size();i++){
        res[i]=rp;
        rp=rp*a[i];
    }
    rp=1;
    for(int i=a.size()-1;i>=0;i--){
        res[i]=res[i]*rp;
        rp=rp*a[i];
    }
    return res;
}

int main(){
// Product of array except itself
// Example =  a[]={1,2,3,4}
// Output = {24,12,8,6}

vector<int> a;
a.push_back(1);
a.push_back(2);
a.push_back(3);
a.push_back(4);

vector<int> b = product_itself(a);

for(int i=0;i<b.size();i++){
    cout<<b[i]<<" ";
}cout<<endl;


return 0;
}