#include<iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if( age <= 25){
        int h ;
        cout << "Enter your height: ";
        cin >> h ;
        if(h < 100){
            cout << "Your character = Chopper";
        }else if(h < 180){
            cout << "Your character = Usopp" ;
        }else{
            int b ;
            cout << "Enter your bounty: ";
            cin >> b;
            if(b > 1100000000){
                cout << "Your character = Zoro";
            }else{
                cout << "Your character = Sanji";
            }
        }

    }else if(age <= 60){
        int b ;
        cout << "Enter your bounty: ";
        cin >> b;
        if(b>500000000){
            cout << "Your character = Jinbe";
        }else{
            cout << "Your character = Franky";
        }
    }else{
        cout << "Your character = Brook";
    }
}


/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
