#include<iostream>
#include<queue>
#include<vector>
using namespace std;

priority_queue<int, vector<int>,greater<int>>pqmin;
priority_queue<int, vector<int>>pqmax;

void insert(int x){
    if(pqmin.size()==pqmax.size()){
        if(pqmax.size()==0){
            pqmax.push(x);
            return;
        }
        if(x<pqmax.top())
            pqmax.push(x);
        else{
            pqmin.push(x);
        }
    }
    else{
        if(pqmax.size() > pqmin.size()){
            if(x>=pqmax.top()){
                pqmin.push(x);
            }
            else{
                int temp=pqmax.top();
                pqmax.pop();
                pqmin.push(temp);
                pqmax.push(x);
            }
        }
        else{
            if(x<=pqmin.top()){
                pqmax.push(x);
            }
            else{
                int temp=pqmin.top();
                pqmin.pop();
                pqmin.push(temp);
                pqmin.push(x);
            }
        }
    }
}
double findmedian(){
    if(pqmin.size()==pqmax.size()){
        return ((pqmin.top() + pqmax.top() )/2);
    }
    else if(pqmax.size()> pqmin.size()){
        return pqmax.top();
    }
    else{
     pqmin.top();
    }
}
int main(){

insert(10);
cout<<findmedian()<<endl;
insert(15);
cout<<findmedian()<<endl;
insert(21);
cout<<findmedian()<<endl;
insert(30);
cout<<findmedian()<<endl;
insert(18);
cout<<findmedian()<<endl;
insert(19);
cout<<findmedian()<<endl;

return 0;
}