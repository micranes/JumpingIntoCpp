/*
2. Write a menu program that lets the user select from a list of options, and if the input is not one
of the options, reprint the list
*/
#include<iostream>

using namespace std;

int main(){
    int loopTrigger = 1;
    int choice;

    while(loopTrigger){
        cout<<"\n\n\t\t\t\t SUPERMENU";
        cout<<"\n\t\t\t\t1. Good Choice";
        cout<<"\n\t\t\t\t2. Better Choice";
        cout<<"\n\t\t\t\t3. Best Choice";
        cout<<"\n\t\t\t\t4. Super Choice";
        cout<<"\n\t\t\t\t5. Mega Super Choice";
        cout<<"\n\t\t\t\t6. Exit\n\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        if (choice==1)
        {
            cout<<"\n\t\t\t\t1. Good Choice";
        }else if (choice==2)
        {
            cout<<"\n\t\t\t\t2. Better Choice";
        }else if (choice==3)
        {
            cout<<"\n\t\t\t\t3. Best Choice";
        }else if (choice==4)
        {
            cout<<"\n\t\t\t\t4. Super Choice";
        }else if (choice==5)
        {
            cout<<"\n\t\t\t\t5. Mega Super Choice";
        }else if (choice==6)
        {
            loopTrigger = 0;
        }
        cout<<"\n\n\n\n\n\n";
    }
    return 0;
}