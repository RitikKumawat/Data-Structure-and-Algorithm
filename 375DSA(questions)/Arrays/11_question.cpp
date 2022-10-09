#include<iostream>
using namespace std;
int main(){
// Trapping rain water Problem
// given a[]={4,2,0,3,2,5}
//               _
//    _         |_|
//   |_|     _  |_|
//   |_|_   |_|_|_|
//   |_|_|  |_|_|_|
//   |_|_|  |_|_|_|

int a[]={4,2,0,3,2,5};
//we have to return how many units will rainwater will be stored
//we will make two auxilary arrays left and right

int left[6];
int right[6];
left[0]=a[0];
right[5]=a[5];

int trap_water=0;

for(int i=1;i<6;i++){
    left[i]=max(left[i-1],a[i]);
}

for(int i=4;i>=0;i--){
    right[i]=max(right[i+1],a[i]);
}

// for(int i=0;i<6;i++){
//     cout<<left[i]<<" ";
// }cout<<endl;

// for(int i=0;i<6;i++){
//     cout<<right[i]<<" ";
// }cout<<endl;


for(int i=0;i<6;i++){
    trap_water+= (min(left[i],right[i]) - a[i]);
}
cout<<"The trapped water: "<<trap_water<<endl;
return 0;
}