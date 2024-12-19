#include<iostream>
using namespace std;

int main(){

    int n = 6;
    int count = 0;

    if(n <= 1){
       return 1;
    }
    for(int i = 1; i<=n; i++){
        if(n % i == 0){
            count++;
        }
    }

    if(count>2){
        cout<<n<<" is not a Prime Number";
    }
    else{
        cout<<n<<" is a Prime";
    }

    return 0;
}