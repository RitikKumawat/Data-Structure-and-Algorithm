#include<iostream>
#include<queue>
#include<vector>
using namespace std;
const int N= 1e5+2;
bool vis[N];
vector<int> adjm[N];
int main(){
    for(int i=0;i<=N;i++){
        vis[i]=0;
    }
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adjm[x].push_back(y);
        adjm[y].push_back(x);
    }
    queue<int> q;
    q.push(1);
    vis[1]=true;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout<<node<<endl;
        vector<int> :: iterator it;
        for(it=adjm[node].begin();it!=adjm[node].end();it++){
            if(!vis[*it]){
                vis[*it]=1;
                q.push(*it);
            }
        }
    }
    
return 0;
}