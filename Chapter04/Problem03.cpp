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
    float SecondNumber;

    cout<<"\n\nEnter the operation you wish to perform: (+,-,*,/):\n";
    cin>>theOperator;
    cout<<"\n\nEnter the first number :";
    cin>>firstNumber;
    cout<<"\n\nEnter the second number :";
    cin>>SecondNumber;
    if(theOperator=="+")
    {
        cout<<"\n\nThe answer to "<<firstNumber<<" "<<theOperator<<" "<<SecondNumber<<" = "<<firstNumber+SecondNumber<<"\n\n";
    }
    if(theOperator=="-")
    {
        cout<<"\n\nThe answer to "<<firstNumber<<" "<<theOperator<<" "<<SecondNumber<<" = "<<firstNumber-SecondNumber<<"\n\n";
    }if(theOperator=="*")
    {
        cout<<"\n\nThe answer to "<<firstNumber<<" "<<theOperator<<" "<<SecondNumber<<" = "<<firstNumber*SecondNumber<<"\n\n";
    }if(theOperator=="/")
    {
        cout<<"\n\nThe answer to "<<firstNumber<<" "<<theOperator<<" "<<SecondNumber<<" = "<<firstNumber/SecondNumber<<"\n\n";
    }

}