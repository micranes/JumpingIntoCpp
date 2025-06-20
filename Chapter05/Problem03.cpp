/*
3. Write a program that computes a running sum of inputs from the user, terminating when the
user gives an input value of 0
*/
#include<iostream>

using namespace std;

int main(){
    float newNumber =0;
    bool loopSwitch = 1;
    float summedUp=0;
    
    while(loopSwitch){
        cout<<"\n\nEnter a number: ";
        cin>>newNumber;
        summedUp=summedUp+newNumber;
        cout<<"\nSum is "<<summedUp;
        if (newNumber==0){loopSwitch=false;}
    }
}