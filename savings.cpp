#include <iostream>
using namespace std;
int main(){
    int savings;
    cin>>savings;
    if(savings>5000){
        if(savings>8000){
            cout<<"go to p1 with A";

        }else{
            cout<<"go to p2 with A";
        }
    }else if(savings>2000){
        cout<<"B";
    }else{
        cout<<"C";
    }
    return 0;
}