#include<iostream>
using namespace std;
void find_element(int arr[],int n,int key){
    int pivot;
    for(int i=0;i<n;i++){
        if(arr[i+1]<arr[i]){
            pivot=i+1;
        }
    }
    if(arr[0]<=key){
        for(int i=0;i<pivot-1;i++){
            if(arr[i]==key){
                cout<<i<<endl;
            }
    }

    }

    for(int i=pivot+1;i<n;i++){
        if(arr[i]==key){
            cout<<i<<endl;
        }
    }
    


}
int main(){
int arr[9]={5,6,7,8,9,10,1,2,3};
int key=5;
find_element(arr,9,key);
return 0;
}