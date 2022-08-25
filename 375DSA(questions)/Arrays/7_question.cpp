#include<iostream>
#include<vector>
using namespace std;
int maxProfit(int prices[]){
    int maxP=INT_MIN;
    int minsofar=INT_MAX;

    for(int i=0;i<7;i++){
        if(prices[i]<minsofar){
            minsofar=prices[i];
        }
            if(prices[i]-minsofar>maxP){
                maxP=prices[i]-minsofar;
            }
        
    }
    return maxP;
}
int main(){
int prices[]={3,1,4,8,7,2,5};
cout<<maxProfit(prices);

return 0;
}