#include <iostream>
using namespace std;

int calculate(int x){

    if(x==0){
        cout<<"Enter a number greater than 0";
    }

    int y=x;
    if(x%2 != 0){
        y=x*2;
    }
    for(int i=1;i<=y;i++){
        if(i%2 != 0){
            if (i != 1) cout << ", ";
            cout<<i;
            
        }
    }
}

int main(){

    int x;
    cin>>x;
    calculate(x);
}
