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
string numberToText(int inputInt);
string hundredsConvert(int inputInt);
string oneThru99(string numberString);
string oneThru999(string numberString);


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
/**
 * @brief Takes an integer and converts it to english, 1 converts to "one".
 * @namenumberToText
 * @param inputInt 
 * @return string 
 * @pre must be an integer between -2 billion and 2 billion
 * @post Returns an empty string if invalid
 * @throws std::invalid_argument if num is out of range.
 */
string numberToText(int inputInt){
    string buildString; // This is the string to built and returned out from the function.
    if(inputInt<0){buildString="negative "; inputInt=abs(inputInt);}//grabs the "-" from the int if needed, and converts the int to a positive.
    string numberString = to_string(inputInt); //This is the integer converted to a string format.

    if(inputInt>0 && inputInt<100)
    {
        buildString = buildString + oneThru99(numberString);

    }else if (inputInt>99&&inputInt<1000)
    {
        buildString = buildString + oneThru999(numberString);
    
    }else if (inputInt>999&&inputInt<1000000)
    {
        /* code */
    
    }else
    {
        /* code */
    }
    return buildString;
}


/**
 * @brief Converts an integer (0-99) to its text equivalent.
 * @name oneThru99
 * @param String integerString - a number between 1 and 99 in string format.
 * @return A string containing the text representation (e.g., "one" for 1).
 * @pre num must be between 0 and 99, inclusive.
 * @post Returns an empty string if the input is invalid.
 * @throws std::invalid_argument if num is out of range.
 */
string oneThru99(string numberString){
    if (numberString.size()>2)throw invalid_argument("oneThru99() received too large a string.");
    string buildString;

     const string below20[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine","ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen","seventeen", "eighteen", "nineteen"};
     const string above20[] = {"","","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};

     int numValue = stoi(numberString);
     if (numValue<20){buildString = below20[stoi(numberString)];}
     else{
        int tens = numberString[0]-'0';
        int ones = numberString[1]-'0';
        buildString = above20[tens] + " " + below20[ones];
     }
    return buildString;
    
}

/**
 * @brief Converts an integer (1-999) to its text equivalent.
 * @name oneThru999
 * @param String integerString - a number between 1 and 999 in string format.
 * @return A string containing the text representation (e.g., "one" for 1).
 * @pre num must be between 1 and 99, inclusive.
 * @post Returns an empty string if the input is invalid.
 * @throws std::invalid_argument if num is out of range.
 */
string oneThru999(string numberString){
    string buildString;
//    string hundredsString = numberString.substr(0,1);//grabs the first digit of the input
//    string onesAndTens = numberString.substr(1,2);//grabs the leftover digits which are 1-99
//    onesAndTens = oneThru99(onesAndTens);
    buildString = oneThru99(numberString.substr(0,1)) + " hundred " + oneThru99(numberString.substr(1,2));

    return buildString;
}