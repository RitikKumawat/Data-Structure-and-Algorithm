#include<iostream>
using namespace std;
int countpath(int s, int e){
    if(s==e){
        return 1;                                         // 0       1         2          3
                                                          
    }
    if(s>e){
        return 0;
    }

    int count=0;
    for(int i=1;i<=e;i++){
        count = count+countpath(s+i,e);
    }
    return count;
}
int main(){
cout<<countpath(0,3)<<endl;
return 0;
}