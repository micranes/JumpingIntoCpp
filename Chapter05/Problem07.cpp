/*
7. Write a program that provides the option of tallying up the results of a poll with 3 possible
values. The first input to the program is the poll question; the next three inputs are the possible
answers. The first answer is indicated by 1, the second by 2, the third by 3. The answers are
tallied until a 0 is entered. The program should then show the results of the poll—try making a
bar graph that shows the results properly scaled to fit on your screen no matter how many
results were entered.
*/

#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main(){
    string question;
    string answer01;
    string answer02;
    string answer03;
    bool loopSwitch = true;
    float answerCount01 = 0;
    float answerCount02 = 0;
    float answerCount03 = 0;
    int userAnswerInput;
//Poll Setup
    cout<<"What is the question you wish to poll?\n";
    getline(cin,question);
    cout<<"\nWhat is the first selection you wish to add to your poll?\n";
    getline(cin,answer01);
    cout<<"\nWhat is the second selection you wish to add to your poll?\n";
    getline(cin,answer02);
    cout<<"\nWhat is the third selection you wish to add to your poll?\n";
    getline(cin,answer03);

    cout<<"\n\nStarting your poll...\n\n";
//Poll running
    while (loopSwitch)
    {
        cout<<"==========================================================";
        cout<<"\n"<<question<<"\n";
        cout<<"1. "<<answer01<<"\n";
        cout<<"2. "<<answer02<<"\n";
        cout<<"3. "<<answer03<<"\n";
        cout<<"4. Show results\n";
        cout<<"Enter the number of your answer.\n";
        cin>>userAnswerInput;
        if(userAnswerInput==1){++answerCount01;cout<<"Good choice.\n";}
        else if(userAnswerInput==2){++answerCount02;cout<<"Good choice.\n";}
        else if(userAnswerInput==3){++answerCount03;cout<<"Good choice.\n";}
        else if(userAnswerInput==4){loopSwitch=false;cout<<"Here are the results.\n\n";}
        else{cout<<"Incorrect input, try again.\n";}
    }
//Poll results
//Going to use \u2588 for making bar graph lines
    float totalVotes = answerCount01+answerCount02+answerCount03;
    float percent01=answerCount01/totalVotes;
    float percent02=answerCount02/totalVotes;
    float percent03=answerCount03/totalVotes;

    cout<<"==========================================================";
    cout<<"\nHere are the results to your question:";
    cout<<question<<"\n";
    cout<<answer01<<"\t=\t"<<fixed<<setprecision(2)<<percent01*100<<"%\n";
    for (int i=percent01*50;i>0;--i){cout<<"\u2588";}
    cout<<"\n";
    cout<<answer02<<"\t=\t"<<fixed<<setprecision(2)<<percent02*100<<"%\n";
    for (int i=percent02*50;i>0;--i){cout<<"\u2588";}
    cout<<"\n";
    cout<<answer03<<"\t=\t"<<fixed<<setprecision(2)<<percent03*100<<"%\n";
    for (int i=percent03*50;i>0;--i){cout<<"\u2588";}
    cout<<"\n\n\n";
    
    return 0;
}