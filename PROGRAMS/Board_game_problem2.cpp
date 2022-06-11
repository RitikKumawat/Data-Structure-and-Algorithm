// start *     *      *       *      *     *
//       *     *      *       *      *     *
//       *     *      *       *      *     *
//       *     *      *       *      *     *
//       *     *      *       *      *     *
//       *     *      *       *      *     *
//       *     *      *       *      *     *
//       *     *      *       *      *     *
//       *     *      *       *      *     * end
#include<iostream>
using namespace std;
int countMazepath(int n, int i, int j){
    if(i==n-1 && j==n-1){
        return 1;
    }
    if(i>=n || j>=n){
        return 0;
    }
    return countMazepath(n,i+1,j)+countMazepath(n,i,j+1);
}
int main(){
    cout<<countMazepath(3,0,0);
return 0;
}