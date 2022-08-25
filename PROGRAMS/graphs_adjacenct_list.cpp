#include<iostream>
#include<vector>
using namespace std;
const int N=1e5+2;      // 10^5 + 2
vector<int> adjm[N];
int main(){
int n,m;
cout<<"Enter number of nodes or vertices"<<endl;
cin>>n;
cout<<"Enter number of edges"<<endl;
cin>>m;

for(int i=0;i<m;i++){
    int x,y;
    cin>>x>>y;
    
    adjm[x].push_back(y);
    adjm[y].push_back(x);
}
for(int i=1;i<n+1;i++){
    cout<<i<<" -> ";
    vector<int> :: iterator it;
    for(it=adjm[i].begin();it!=adjm[i].end();it++){
        cout<< *it<<" ";
    }cout<<endl;
}
return 0;
}