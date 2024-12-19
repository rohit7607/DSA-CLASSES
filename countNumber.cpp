#include<iostream>
using namespace std;


int main(){
    int number = 123456;
    int count = 0;
    while(number !=0){
    number = number/10;
    count++;
    } 
    cout<<"Total number of digit is"<<count;
}
