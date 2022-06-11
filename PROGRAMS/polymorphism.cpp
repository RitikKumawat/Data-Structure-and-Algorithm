#include<iostream>
using namespace std;
// FUNCTION OVERLOADING
class ApnCllg{
    public:
    void fun(){
        cout<<"function with no arguments"<<endl;
    }
    void fun(int x){
        cout<<"function with integer as argument"<<endl;
    }
    void fun(double x){
        cout<<"function with double as argument"<<endl;
    }

};

//OPERATOR OVERLOADING
class Complex{
    int real,imaginery;
    public:
    Complex(int r=0, int i=0){
        real=r;
        imaginery=i;
    }
    Complex operator + (Complex const &obj){
        Complex res;
        res.imaginery = imaginery+obj.imaginery;
        res.real=real+obj.real;
        return res;
    }
    void display(){
        cout<< real <<" + i"<<imaginery<<endl;
    }
};

// FUNCTION OVERRIDING
class base{
    public:
    virtual void print(){
        cout<<"this is base class's print function"<<endl;
    }
    virtual void display(){
        cout<<"This is base class's dispaly function"<<endl;
    }

};
class derived: public base{
    public:
    void print(){
        cout<<"this is derived class print function"<<endl;
    }
    void display(){
        cout<<"this is derived class display function"<<endl;
    }
};

int main(){
ApnCllg obj;
obj.fun();
obj.fun(1);
obj.fun(1.45);
Complex c1(12,7), c2(6,7);
Complex c3 = c1+c2;
c3.display();

base *baseptr;
derived d;
baseptr= &d;
baseptr->print();
baseptr->display();

return 0;
}