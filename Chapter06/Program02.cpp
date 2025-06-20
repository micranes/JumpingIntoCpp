/*
2. Make your calculator program perform computations in a separate function for each type of
computation.
*/
#include<iostream>
#include<string>

using namespace std;

void add(float firstNumber, float secondNumber);
void subtract(float firstNumber, float secondNumber);
void multiply(float firstNumber, float secondNumber);
void divide(float firstNumber, float secondNumber);

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
        add(firstNumber,secondNumber);
    }else if(theOperator=="-")
    {
        subtract(firstNumber,secondNumber);
    }else if(theOperator=="*")
    {
        multiply(firstNumber,secondNumber);
    }else if(theOperator=="/")
    {
        divide(firstNumber,secondNumber);
    }
    return 0;
}

void add(float firstNumber, float secondNumber)
{
    cout<<"\n\nThe answer to "<<firstNumber<<" + "<<secondNumber<<" = "<<firstNumber+secondNumber<<"\n\n";
}
void subtract(float firstNumber, float secondNumber)
{
    cout<<"\n\nThe answer to "<<firstNumber<<" - "<<secondNumber<<" = "<<firstNumber-secondNumber<<"\n\n";
}
void multiply(float firstNumber, float secondNumber)
{
    cout<<"\n\nThe answer to "<<firstNumber<<" * "<<secondNumber<<" = "<<firstNumber*secondNumber<<"\n\n";
}
void divide(float firstNumber, float secondNumber)
{
    cout<<"\n\nThe answer to "<<firstNumber<<" / "<<secondNumber<<" = "<<firstNumber/secondNumber<<"\n\n";
}