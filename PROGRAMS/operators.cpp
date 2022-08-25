#include<iostream>
using namespace std;
void dec_toBin(long n){
       long d, r, binary = 0;
   
   d = n;
   int temp = 1;
   while (n!=0) {
      r = n%2;
      n = n / 2;
      binary = binary + r*temp;
      temp = temp * 10;
   }
   printf("%ld\n", binary);
}
int main(){

int_fast32_t c=7;
dec_toBin(c);
long a = c<<3;
cout<<a<<endl;
dec_toBin(a);

return 0;
}