/*
    Implement a simple "password" system that takes a password in the form of a number. Make it
    so that either of two numbers is valid, but use only one if statement to do the check.
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