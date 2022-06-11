#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
cin.ignore();
char arr[n+1];

cin.getline(arr,n);
cin.ignore();
int i=0;
int curr_length=0,maxlen=0;
int st=0,maxst=0;
while(1){
if(arr[i]==' ' || arr[i]=='\0'){
    if(curr_length>maxlen){
        maxlen=curr_length;
        maxst=st;
    }
    curr_length=0;
    st=i+1;
}
else
curr_length++;
if(arr[i]=='\0')
    break;
i++;
}
cout<<maxlen<<endl;
for(int i=0;i<maxlen;i++){
    cout<<arr[i+maxst];
}
return 0;
}