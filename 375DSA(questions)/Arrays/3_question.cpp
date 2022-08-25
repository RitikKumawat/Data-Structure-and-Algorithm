#include<iostream>
#include<vector>
using namespace std;
//largest sum of subarray
int main(){
vector<int> a={1,-2,3,4,5,6};
int sum =0; int maxi = a[0];
        for(int i =0; i<a.size(); i++)
        {
            sum+=a[i];
            if(sum>maxi)
            {
                maxi = sum;
            }
            if(sum<0)
            {
                sum=0;
                continue;
            }
        }
       cout<<maxi<<endl;
return 0;
}