/*
    Write a small calculator that takes as input one of the four arithmetic operations, the two
    arguments to those operations, and then prints out the result.
*/
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string theOperator;
    float firstNumber;
    float secondNumber;
//Begin input section with validation
    cout<<"\n\nEnter the operation you wish to perform: (+,-,*,/):\n";
    cin>>theOperator;
    if(!(theOperator=="+" || theOperator=="-" || theOperator=="*" || theOperator=="/"))
    {
        cout<<"\n"<<theOperator<<" is and invalid selection!\n";
        return 1;
    }
    cout<<"\n\nEnter the first number :";
    if(!(cin>>firstNumber)){
        cout<<"\nThis is not a number.\n";
        return 1;
    }
    cout<<"\n\nEnter the second number :";
    if(!(cin>>secondNumber)){
        cout<<"\nThis is not a number.\n";
        return 1;
    }else if (theOperator == "/" && secondNumber == 0){
        cout<<"\nNo division by zero!\n";
        return 1;
    }

//End input section.

//Begin processing data section.
    if(theOperator=="+")
    {
        cout<<"\n\nThe answer to "<<firstNumber<<" + "<<secondNumber<<" = "<<firstNumber+secondNumber<<"\n\n";
    }else if(theOperator=="-")
    {
        cout<<"\n\nThe answer to "<<firstNumber<<" - "<<secondNumber<<" = "<<firstNumber-secondNumber<<"\n\n";
    }else if(theOperator=="*")
    {
        cout<<"\n\nThe answer to "<<firstNumber<<" * "<<secondNumber<<" = "<<firstNumber*secondNumber<<"\n\n";
    }else if(theOperator=="/")
    {
        cout<<"\n\nThe answer to "<<firstNumber<<" / "<<secondNumber<<" = "<<firstNumber/secondNumber<<"\n\n";
    }
    return 0;
}