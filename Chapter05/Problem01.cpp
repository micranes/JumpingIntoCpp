/*
1. Write a program that prints out the entire lyrics to a full rendition of "99 Bottles of Beer"15
*/

//"" bottles of beer on the wall, "" bottles of beer. Take one down pass it around, "" bottles of beer on the wall.
// 2 bottles of beer on the wall, 2 bottles of beer. Take one down pass it around, 1 bottle of beer on the wall.
// 1 bottle of beer on the wall, one bottle of beer. Take one down pass it around, no bottles of beer on the wall. 
// No beeeeeeeeeeeeeeer on the waaaaaaaaaaaalllllll.

#include<iostream>

using namespace std;

int main(){
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
    return 0;

}