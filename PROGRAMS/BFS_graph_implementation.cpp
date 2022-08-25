#include<iostream>
#include<map>
#include<unordered_map>
#include<queue>
#include<list>
#include<vector>
using namespace std;
void prepareAdjlist(unordered_map<int, list<int>> &adjlist, vector<pair<int,int>>&edges){
    for(int i=0;i<edges.size();i++){
        int u = edges[i].first;
        int v = edges[i].second;

        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
}
void bfs(unordered_map<int, list<int>>&adjlist,unordered_map<int,bool>&visited,vector<int>&ans, int node){
    queue<int> q;
    q.push(node);
    visited[node]=1;
    while(!q.empty()){
        int frontnode = q.front();
        q.pop();

        ans.push_back(frontnode);

        for(auto i:adjlist[frontnode]){
            if(!visited[i]){
                q.push(i);
                visited[i]=1;
            }
        }
    }
}
vector<int> BFS(int vertex, vector<pair<int,int>> edges){
    unordered_map<int, bool> visited;
    unordered_map<int, list<int>> adjlist;
    vector<int> ans;

    prepareAdjlist(adjlist, edges);

    for(int i=0;i<vertex;i++){
        if(!visited[i]){
            bfs(adjlist,visited,ans,i);
        }
    }
    return ans;
}
int main(){

vector<pair<int,int>> edges;
edges.push_back(make_pair(1,0));
edges.push_back(make_pair(1,2));
edges.push_back(make_pair(2,0));
edges.push_back(make_pair(2,3));


for(int i=0;i<edges.size();i++){
    cout<<"("<<edges[i].first<<","<<edges[i].second<<")"<<" ";
}
cout<<endl;
vector<int> ans;
ans =BFS(4,edges);
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
cout<<endl;
return 0;
}