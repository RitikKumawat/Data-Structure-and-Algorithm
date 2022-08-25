#include<iostream>
#include<vector>
using namespace std;
const int N = 1e5+2;
bool vis[N];
vector<int> adjm[N];

void dfs(int node){
    vis[node]=1;
    //preorder
    cout<<node<<" ";
    //inorder
    vector<int> :: iterator it;
    for(it=adjm[node].begin();it!=adjm[node].end();it++){
        if(vis[*it]);
        else{
            dfs(*it);
        }
    }
}

int main(){
int n,m;
cin>>n>>m;
for(int i=0;i<=n;i++){
    vis[i]=false;
}
for(int i=0;i<m;i++){
    int x,y;
    cin>>x>>y;
    adjm[x].push_back(y);
    adjm[y].push_back(x);
}
dfs(1);


return 0;
}