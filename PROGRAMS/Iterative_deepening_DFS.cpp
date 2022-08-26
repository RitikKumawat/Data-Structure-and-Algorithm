#include<iostream>
#include<list>
#include<vector>
using namespace std;
class Graph{
    int V;
    list<int> *adj;

    bool DLS(int src, int target, int limit){
    if(src==target){
        return true;
    }
    if(limit<=0){
        return false;
    }
    for(auto i=adj[src].begin();i!=adj[src].end();i++){
        if(DLS(*i,target,limit-1)){
            return true;
        }
    }
    return false;
}
public:
Graph(int V){
    this->V = V;
    adj = new list<int>[V];
}
void Addedge(int v, int w){
    adj[v].push_back(w);
}

bool IDDFS(int src, int target, int max_depth){
   for(int i=0;i<=max_depth;i++){
    if(DLS(src,target,i)){
        return true;
    }
   }
    return false;
    
}

};

int main(){
Graph g(7);
g.Addedge(0,1);
g.Addedge(0,2);
g.Addedge(1,3);
g.Addedge(1,4);
g.Addedge(2,5);
g.Addedge(2,6);

if(g.IDDFS(1,6,0)){
    cout<<"Target is reachable from source "
          "within max depth";
}
else{
    cout<<"Target is not reachable from source "
        "within max depth";
}





return 0;
}