#include<iostream>
#include<stack>
#include<list>
#include<unordered_map>
#include<vector>
using namespace std;
void DFS(int node,unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adjlist,vector<int> &component ){
    component.push_back(node);
    visited[node]=true;
    for(auto i: adjlist[node]){
        if(!visited[i]){
            DFS(i,visited,adjlist,component);
        }
    }
}
int main(){
unordered_map<int, list<int>> adjlist;
unordered_map<int, bool> visited;
int vert,edg;
cout<<"Enter the number of vertices"<<endl;
cin>>vert;
cout<<"Enter the number of edges"<<endl;
cin>>edg;
for(int i=0;i<edg;i++){
    int x,y;
    cin>>x>>y;
    adjlist[x].push_back(y);
    adjlist[y].push_back(x);
}
for(auto i: adjlist){
    cout<<i.first<<"->";
    for(auto j: i.second){
        cout<<j<<" ";
    }
    cout<<endl;    
}
vector<vector<int>> ans;
for(int i=0;i<vert;i++){
    if(!visited[i]){
        vector<int> component;
        DFS(i,visited,adjlist,component);
        ans.push_back(component);
    }
}

for(auto i:ans){
    for(auto j: i){
        cout<<j<<" ";
    }
}
return 0;
}