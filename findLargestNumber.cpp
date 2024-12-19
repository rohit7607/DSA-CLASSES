#include<iostream>
using namespace std;


int main(){
    int number = 123456;
    int n = number;
    int count = 0;
    int reminder;
    int largest = 0;


    while(number !=0){
    reminder = number%10;
     number = number/10;
      if (reminder > largest){
        largest = reminder;
      }
          
    
    } 
    cout<<" Largest digit in the number "<< n <<" is: "<< largest;
}
