/*
1. Take the "menu program" you wrote earlier and break it out into a series of calls to functions for
each of the menu items. Add the calculator and "99 Bottles of Beer" as two different functions
that can be called.
*/
#include<iostream>
#include<limits>

using namespace std;

void beer();
void calculator();
void menu3();
void menu4();
void menu5();

int main(){
    int loopTrigger = 1;
    int choice;

    while(loopTrigger){
        cout<<"\n\n\t\t\t\t SUPERMENU";
        cout<<"\n\t\t\t\t1. Calculator";
        cout<<"\n\t\t\t\t2. 99 Bottles of Beer";
        cout<<"\n\t\t\t\t3. Best Choice";
        cout<<"\n\t\t\t\t4. Super Choice";
        cout<<"\n\t\t\t\t5. Mega Super Choice";
        cout<<"\n\t\t\t\t6. Exit\n\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        if(cin.fail()){
            cout<<"You need to enter a valid menu number.";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }else if (choice==1)
        {
            calculator();
        }else if (choice==2)
        {
            beer();
        }else if (choice==3)
        {
            menu3();
        }else if (choice==4)
        {
            menu4();
        }else if (choice==5)
        {
            menu5();
        }else if (choice==6)
        {
            loopTrigger = 0;
        }
        cout<<"\n\n\n\n\n\n";
    }
    return 0;
}

void beer(){
    int bottleCount=99;
    while(bottleCount>0){ 
        if(bottleCount==2){
            cout<<"\n\n2 bottles of beer on the wall,\n2 bottles of beer.\nTake 1 down pass it around,\n1 bottle of beer on the wall.";
            --bottleCount;
        }else if(bottleCount==1)
        {
            cout<<"\n\n1 bottle of beer on the wall, \n1 bottle of beer. \nTake 1 down pass it around,\nno bottles of beer on the wall."<<"\nNo beeeeeeeeeeeeeeer on the waaaaaaaaaaaalllllll\n\n";
            --bottleCount;
        }
        
        else{
            cout<<"\n\n"<<bottleCount<<" bottles of beer on the wall,\n"<<bottleCount<<" bottles of beer.\nTake 1 down pass it around,\n"<<--bottleCount<<" bottles of beer on the wall.";
        }
        
    }
}

void calculator()
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
    }
    cout<<"\n\nEnter the first number :";
    if(!(cin>>firstNumber)){
        cout<<"\nThis is not a number.\n";
    }
    cout<<"\n\nEnter the second number :";
    if(!(cin>>secondNumber)){
        cout<<"\nThis is not a number.\n";
    }else if (theOperator == "/" && secondNumber == 0){
        cout<<"\nNo division by zero!\n";
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
}

void menu3()
{
    cout<<"\n\t\t\t\t3. Best Choice";
}
void menu4()
{
    cout<<"\n\t\t\t\t4. Super Choice";
}
void menu5()
{
    cout<<"\n\t\t\t\t5. Mega Super Choice";
}