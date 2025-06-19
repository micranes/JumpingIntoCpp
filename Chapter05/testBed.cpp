//Just a space to play with learned concepts in this chapter.
//Chapter 5: Loops
//while (condition){code}
//for (var init;cond;var update){code}
//do {code} while (condition);
//break - breaks loop from inside.
//continue - 
//Nested Loops - one loop inside another.


#include<iostream>
#include<string>

using namespace std;

int main(){
    int counter = 0;

    while(counter<10){
        ++counter;
        if(counter==4){
            continue;
        }
        cout<<"\n"<<counter;
    }
    cout<<"\n\n";
    return 0;
}