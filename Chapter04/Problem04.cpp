/*
    Expand the password checking program from earlier in this chapter and make it take 
    multiple usernames, 
    each with their own password, 
    and ensure that the right username is used for the right password.
     Provide the ability to prompt users again if the first login attempt failed.
     Think about how easy (or hard) it is to do this for a lot of usernames and passwords.
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
    
    string userOne="Bob";
    string userTwo="John";
    string userThree="Job";

    string pswdOne="hey";
    string pswdTwo="heyhey";
    string pswdThree="heyheyhey";

    string userName;
    string userPswd;

    cout<<"\n\nWho are you: ";
    cin>>userName;
    if(!(userName==userOne || userName==userTwo || userName==userThree)){
        cout<<"\nNot a valid user! Please try again: \n";
        cin>>userName;
        if(!(userName==userOne || userName==userTwo || userName==userThree)){
            cout<<"\nNot a valid user! Get out of here!\n";
            return 1;
        }
    }

    cout<<"\n\nHello "<<userName<<" What is your password: ";
    cin>>userPswd;
    if(userName==userOne){
        if(userPswd!=pswdOne){
            cout<<"\nInvalid password! Try again loser.\n";
            cin>>userPswd;
            if(userPswd!=pswdOne){
                    cout<<"\nInvalid password!\n";
                    return 1;
            }    
            
        }        
    }else if (userName==userTwo){
        if(userPswd!=pswdTwo){
            cout<<"\nInvalid password! Try again loser.\n";
            cin>>userPswd;
            if(userPswd!=pswdTwo){
                    cout<<"\nInvalid password!\n";
                    return 1;
            }
        }        
    }else if(userName==userThree){
        if(userPswd!=pswdThree){
            cout<<"\nInvalid password! Try again loser.\n";
            cin>>userPswd;
            if(userPswd!=pswdThree){
                    cout<<"\nInvalid password!\n";
                    return 1;
            }
        }        
    }
    cout<<"\n\nYou are in! The money is yours.\n\n";
    return 0;
}


