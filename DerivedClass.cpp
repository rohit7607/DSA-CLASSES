#include<iostream>
using namespace std;

class Shape{
    public:
    int base;
};

class Rectangle: public Shape{
    public:
    int height;
    void print(){
        cout<<"Area is: "<< base * height;
    }
    
        
};

int main(){

        Rectangle obj;
        obj.base = 2;
        obj.height = 4;

        obj.print();
}