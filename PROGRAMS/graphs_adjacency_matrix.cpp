#include<iostream>
#include<vector>
using namespace std;
// This function is for bidirectional graph  
/**   Example:-     1------2
*                  /       |
*                 /        |
*                0         |
*                 \        |
*                  \       |
*                   4------3
    
*/
void add_Edge(vector<vector<int>> &a, int source, int dest){
    a[source][dest]=1;
    a[dest][source]=1;
}
int main(){
 int v=5,e=10;
 vector<vector<int>> a={
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0},
    {0,0,0,0,0}
 };
 add_Edge(a,0,1);
 add_Edge(a,0,4);
 add_Edge(a,1,2);
 add_Edge(a,2,3);
 add_Edge(a,3,4);
 add_Edge(a,3,4);

 for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cout<<a[i][j]<<" ";
    }cout<<endl;
 }

 // ANOTHER METHOD OF ADJACENCY MATRIX
 /*
  
                          1
                        /    \
                       /      \
                      2        3
                    /|\ \     / 
                   / | \ \   /
                  4  5  6  7    
 */
 int ver,edge;
 cin>>ver>>edge;
 vector<vector<int>> adjm(ver+1,vector<int>(ver+1,0)); // vector<int>(ver+1,0)  -- This is for column 
 for(int i=0;i<edge;i++){
    int x,y;
    cin>>x>>y;
    adjm[x][y]=1;
    adjm[y][x]=1;
 }                                                               
 for(int i=1;i<ver+1;i++){
    for(int j=1;j<ver+1;j++){
        cout<<adjm[i][j]<<" ";
    }cout<<endl;
 }
return 0;
}