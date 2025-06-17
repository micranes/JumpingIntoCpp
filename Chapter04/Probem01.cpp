/*
    Ask the user for two users' ages, and indicate who is older; behave differently if both are over
    100.
*/
#include<iostream>

int main()
{
    int user01;
    int user02;
    std::cout<<"\n\nEnter the age of user one: ";
    std::cin>>user01;
    std::cout<<"\n\nEnter the age of user two: ";
    std::cin>>user02;

    if (user01>100 && user02>100)
    {
        std::cout<<"\n\nBoth users are old!!!\n\n";
    }
    else if (user01<user02)
    {
        std::cout<<"\n\nUser two is older.\n\n";
    }
    else if(user01>user02)
    {
        std::cout<<"\n\nUser one is older.\n\n";        
    }
    
    
}