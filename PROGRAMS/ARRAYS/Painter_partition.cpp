#include<iostream>
using namespace std;

int find_feasible(int a[], int n, int limit){
    int sum=0,painters=1;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum>limit){
            sum=a[i];
            painters++;
        }
    }
    return painters;
}
int Painter_partition(int a[], int n, int m){
  int totalLength=0,k=0;
  for(int i=0;i<n;i++){
    k=max(k,a[i]);
    totalLength+=a[i];
  }
  int low=k,high=totalLength;
  while(low<high){
    int mid=(low+high)/2;
    int painters= find_feasible(a,n,mid);
    if(painters<=m){
        high=mid;
    }
    else{
        low=mid-1;
    }
  }
return low;
}
int main(){
int a[]={10,20,30,40};
int n=4;
int m=2;
cout<<Painter_partition(a,n,m);
return 0;
}