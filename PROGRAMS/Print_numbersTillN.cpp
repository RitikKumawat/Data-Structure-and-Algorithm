#include<iostream>
using namespace std;
void printing_dec(int n){
    if(n==0){
        return ;
    }
    cout<<n<<endl;
    printing_dec(n-1);
    

}
void printing_inc(int n){
    if(n==1)
    {
        cout<<"1"<<endl;
        return ;
    }
    printing_inc(n-1);
    cout<<n<<endl;

}

int main(){
int n;
cin>>n;
printing_dec(n);
cout<<"NOw Increasing function......"<<endl;
printing_inc(n);
return 0;
}