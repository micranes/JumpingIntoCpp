/*
3. Modify your password program from before to put all of the password checking logic into a
separate function, apart from the rest of the program.
*/
#include<iostream>
#include<string>
using namespace std;

int authentication();

int main()
{
    cout<<"\n\nBeginning authentication\n\n";
    if(!(authentication()))
    {
        cout<<"\n\nYou are not authorized here!\n\n";
        return 1;
    }
    
    cout<<"\n\nYou are in! The money is yours.\n\n";
    return 0;
}

int authentication()
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
            return 0;
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
                    return 0;
            }    
            
        }        
    }else if (userName==userTwo){
        if(userPswd!=pswdTwo){
            cout<<"\nInvalid password! Try again loser.\n";
            cin>>userPswd;
            if(userPswd!=pswdTwo){
                    cout<<"\nInvalid password!\n";
                    return 0;
            }
        }        
    }else if(userName==userThree){
        if(userPswd!=pswdThree){
            cout<<"\nInvalid password! Try again loser.\n";
            cin>>userPswd;
            if(userPswd!=pswdThree){
                    cout<<"\nInvalid password!\n";
                    return 0;
            }
        }        
    }else
    {
        return 1;
    }
}