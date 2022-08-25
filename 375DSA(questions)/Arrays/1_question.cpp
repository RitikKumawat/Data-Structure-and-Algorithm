#include<iostream>
using namespace std;
//Maximum and minimum element in array by minimum comparisions
int main(){
    int min=INT16_MAX;
    int max =INT16_MIN;
    int arr[5]={10,40,35,5,7};
    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        else if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"Max element: "<<max<<endl;
    cout<<"Min element: "<<min<<endl;
return 0;
}