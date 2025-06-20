/*
4. Write a password prompt that gives a user only a certain number of password entry attempts—
so that the user cannot easily write a password cracker.
*/
#include<iostream>
#include<string>

using namespace std;

int main(){
    string password = "scorpius";
    string userInput;

    cout<<"\n\nHi there Harvey\n";
    for(int i=0;i<3;++i){
        cout<<"Enter your login: ";
        cin>>userInput;
        if(userInput==password){
            cout<<"\nCome on in Harvey";
            break;
        }
        cout<<"Wrong password whomever you are.\n";
    }
}