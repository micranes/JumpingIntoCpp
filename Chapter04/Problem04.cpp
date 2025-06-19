/*
    Expand the password checking program from earlier in this chapter and make it take 
    multiple usernames, 
    each with their own password, 
    and ensure that the right username is used for the right password.
     Provide the ability to prompt users again if the first login attempt failed.
     Think about how easy (or hard) it is to do this for a lot of usernames and passwords.
*/
#include<iostream>

int main()
{
    int userNumber;

    std::cout<<"\n\nEnter the code: ";
    std::cin>>userNumber;
    if (userNumber==231||userNumber==123)
    {
        std::cout<<"\n\nCode Correct!!!\n\n";
    }
    else
    {
        std::cout<<"\n\nIncorrect code you villain!!!\n\n";
    }
}