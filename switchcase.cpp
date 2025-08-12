#include <iostream>
using namespace std;
int main(){
    char button;
    cout<<"input a character :  ";
    cin>>button;
    switch(button){
        case 'a':
        cout<<"hello"<<endl;
        break;
        case 'b':
        cout<<"salam"<<endl;
        break;
        case 'c':
        cout<<"ciao"<<endl;
        break;
        case 'd':
        cout<<"namaste"<<endl;
        break;
        case 'e':
        cout<<"hola"<<endl;
        break;
        case 'f':
        cout<<"ni hao"<<endl;
        break;
        default:
        cout<<"I am still learning more ways!"<<endl;
        break;
    }
    return 0;
}