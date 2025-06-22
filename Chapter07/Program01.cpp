/*
1. Implement the source code that turns numbers into English text for numbers between -2 billion
and 2 billion.
*/
//one,two,three,four,five,six,seven,eight,nine,ten,eleven,twelve,thirteen,fourteen,fifteen,sixteen,seventeen,eighteen,nineteen
//twenty,thirty,fourty,fifty,sixty,seventy,eighty,ninety
//hundred,thousand,million,billion 
//negative
#include<iostream>
#include<string>
#include<limits>
#include<cstdlib>

using namespace std;

int userinput();
string numberToText(int sourceNumber);
string below19(int sourceNumber);
string upToHundred(int sourceNumber);
string hundreds(int sourceNumber);
string thousands(int sourceNumber);
string millions(int sourceNumber);
string billions(int sourceNumber);


//-------------START MAIN--------------
int main(){
    
    while (true){
        int userNumber=userinput();
        cout<<numberToText(userNumber)<<"\n-----------------------------------------\n";
    }
}

//-------------INPUT VALIDATION FUNCTION--------------
int userinput(){
    int input;
    cout<<"Enter a number you want converted to text: ";
    cin>>input;
    while (true)
    {
        if(cin.fail()){
            cout<<"invalid input, please enter a number. ";
            cin.clear(); //Reset fail state.
            cin.ignore(numeric_limits<streamsize>::max(), '\n');//clear buffer
        } else{
            cin.ignore(numeric_limits<streamsize>::max(), '\n');//clear left over input
            return input; //valid integer, exit function
        }
    }
    
}

//-------------NUMBER TO TEXT CONVERSION--------------
string numberToText(int sourceNumber){
    string buildString; // This is the string to built and returned out from the function.
    string numberString = to_string(sourceNumber); //This is the integer converted to a string format.
    
    
    if(sourceNumber<0){buildString="negative "; sourceNumber=abs(sourceNumber);}
    if(sourceNumber<20)
    {
        buildString = buildString + below19(sourceNumber);
    }
    //Tens placeholder
    if (sourceNumber>19 && sourceNumber<100)
    {
       buildString = buildString + upToHundred(sourceNumber);
    }
    //Hundreds placeholder
    if (sourceNumber>99 && sourceNumber<1000)
    {
        buildString = buildString + hundreds(sourceNumber);
    }
    //Thousands placeholder
    if (sourceNumber>999 && sourceNumber<1000000)
    {
        buildString = buildString + thousands(sourceNumber);
    }
    //Millions placeholder
    if (sourceNumber>999999 && sourceNumber<1000000000)
    {
        buildString = buildString + millions(sourceNumber);
    }
    //Billions placeholder
    if (sourceNumber>999999999 && sourceNumber<2000000000)
    {
        buildString = buildString + billions(sourceNumber);
    }


    return buildString;
}
string millions(int sourceNumber){

}

string billions(int sourceNumber){

}

string thousands(int sourceNumber){
    string buildString; // This is the string to be built and returned out from the function.
    string numberString = to_string(sourceNumber); //This is the integer converted to a string format.

    string hundredsStrg;
    string thousandsStrg = numberString;
    if (numberString.length()>3){
        hundredsStrg = numberString.substr(numberString.length()-3,3) ;//grabs the hundreds section of the sourceNumber.
        cout<<"\n"<<hundredsStrg<<"\n";
    }else{
        hundredsStrg = numberString;
    }

    int hundredsInt = stoi(hundredsStrg);//makes the hundreds section back into an integer.

    thousandsStrg.erase(thousandsStrg.length()-3); //Grabs the hundreds of thousands into a string
    int thousandsInt = stoi(thousandsStrg); //converts the hundreds of thousands into an integer.

    buildString = below19(thousandsInt) + " " + "Thousand" + " " + hundreds(hundredsInt);
    return buildString;
}

string hundreds(int sourceNumber){
    string buildString; // This is the string to be built and returned out from the function.
    string numberString = to_string(sourceNumber); //This is the integer converted to a string format.
    char hundredsChar;
    int hundredsInt;

    hundredsChar = numberString[numberString.length()-3];//Grabs the hundreds placeholder digit
    hundredsInt = hundredsChar - '0';// The -'0' part converts the char to an int.
    
    if (hundredsInt<1){
        buildString = below19(hundredsInt) + upToHundred(sourceNumber);
    }else{
        buildString = below19(hundredsInt) + " " + "hundred" + " " + upToHundred(sourceNumber);
    }
    return buildString;
}

string upToHundred(int sourceNumber){
    string buildString; // This is the string to be built and returned out from the function.
    string numberString = to_string(sourceNumber); //This is the integer converted to a string format.

    char onesChar;
    char tensChar;
    int ones;
    int tens;
    
    onesChar = numberString[numberString.length()-1]; //copies the ones digit into a char.
    ones = onesChar - '0'; //converts char to int
    
    tensChar = numberString[numberString.length()-2]; //copies the tens digit into a char.
    tens = tensChar - '0'; //converts char to int
    if (tens == 2)
    {
        buildString = "twenty";
    } else if (tens == 3)
    {
        buildString = "thirty";
    } else if (tens == 4)
    {
        buildString = "fourty";
    } else if (tens == 5)
    {
        buildString = "fifty";
    } else if (tens == 6)
    {
        buildString = "sixty";
    } else if (tens == 7)
    {
        buildString = "seventy";
    } else if (tens == 8)
    {
        buildString = "eighty";
    } else if (tens == 9)
    {
        buildString = "ninety";
    }
    
    
    buildString = buildString + " " + below19(ones);
    return buildString;
}

string below19(int sourceNumber){
    string buildString; // This is the string to built and returned out from the function.

    if (sourceNumber==1)
        {
            buildString = buildString+"one";
        }else if (sourceNumber==2)
        {
            buildString = buildString+"two";
        }else if (sourceNumber==3)
        {
            buildString = buildString+"three";
        }else if (sourceNumber==4)
        {
            buildString = buildString+"four";
        }else if (sourceNumber==5)
        {
            buildString = buildString+"five";
        }else if (sourceNumber==6)
        {
            buildString = buildString+"six";
        }else if (sourceNumber==7)
        {
            buildString = buildString+"seven";
        }else if (sourceNumber==8)
        {
            buildString = buildString+"eight";
        }else if (sourceNumber==9)
        {
            buildString = buildString+"nine";
        }else if (sourceNumber==10)
        {
            buildString = buildString+"ten";
        }else if (sourceNumber==11)
        {
            buildString = buildString+"eleven";
        }else if (sourceNumber==12)
        {
            buildString = buildString+"twelve";
        }else if (sourceNumber==13)
        {
            buildString = buildString+"thirteen";
        }else if (sourceNumber==14)
        {
            buildString = buildString+"fourteen";
        }else if (sourceNumber==15)
        {
            buildString = buildString+"fifteen";
        }else if (sourceNumber==16)
        {
            buildString = buildString+"sixteen";
        }else if (sourceNumber==17)
        {
            buildString = buildString+"seventeen";
        }else if (sourceNumber==18)
        {
            buildString = buildString+"eighteen";
        }else if (sourceNumber==19)
        {
            buildString = buildString+"nineteen";
        }
    return buildString;

}