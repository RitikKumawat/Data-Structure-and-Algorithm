#include<iostream>
using namespace std;
/*
CONVERT THE STRING IN MOBILE NUMPERIC PAD SEQUENCE

    1    2    3
        ABC  DEF 
    4    5    6
   GHI  JKL  MNO
    7    8    9
   PQRS TUV  WXYZ
    *    0    #


*/
string convert(string arr[], string c ){
    string output="";
    int n=c.length();                          
    for(int i=0;i<n;i++){
        if(c[i]==' '){
            output=output+"0";
        }
        else{
            int pos=c[i]-'A';
            output=output+arr[pos];
        }
    }
    return output;
}
int main(){
string arr[]={"2","22","222","3","33","333","4","44","444","5","55","555","6","66","666","7","77","777","7777","8","88","888","9","99","999","9999"};
string c="RITIKKUMAWAT";
cout<<convert(arr,c);
return 0;
}