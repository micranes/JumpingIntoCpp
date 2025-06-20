//Just a place to play with concepts in this chapter.
//This chapter is on functions.

#include<iostream>
using namespace std;

int add (int x,int y);

int main(){
    cout<<"\n\n"<<add(2,5)<<"\n\n\n";
    return 0;
}

int add (int x, int y)
{
    return x+y;
}