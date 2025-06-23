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
string below19(int inputInt);
string tensConvert(int inputInt);
string hundredsConvert(int inputInt);


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

    if(inputInt<20){
        buildString = buildString + below19(inputInt);
    }else if (inputInt>19&&inputInt<100)
    {
        /* code */
    }else if (inputInt>99&&inputInt<1000)
    {
        /* code */
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
 * @brief Converts an integer (0-9) to its hundred multiplied text equivalent.
 * @name hundredsConvert
 * @param num The integer to convert (1 to 9).
 * @return A string containing the text representation (e.g., "hundred").
 * @pre num must be between 0 and 9, inclusive.
 * @post Returns an empty string if the input is invalid.
 * @throws std::invalid_argument if num is out of range.
 */
string hundredsConvert(int inputInt){
    if(inputInt<2||inputInt>9) throw invalid_argument("Number out of range");
    const string words[] = {"","","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};
    return words[inputInt];
}

/**
 * @brief Converts an integer (2-9) to its ten multiplied text equivalent.
 * @name tensConvert
 * @param num The integer to convert (2 to 9).
 * @return A string containing the text representation (e.g., "twenty" for 2).
 * @pre num must be between 2 and 9, inclusive.
 * @post Returns an empty string if the input is invalid.
 * @throws std::invalid_argument if num is out of range.
 */
string tensConvert(int inputInt){
    if(inputInt<2||inputInt>9) throw invalid_argument("Number out of range");
    const string words[] = {"","","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};
    return words[inputInt];
}

/**
 * @brief Converts an integer (1-19) to its text equivalent.
 * @name below19Function
 * @param num The integer to convert (1 to 19).
 * @return A string containing the text representation (e.g., "one" for 1).
 * @pre num must be between 1 and 19, inclusive.
 * @post Returns an empty string if the input is invalid.
 * @throws std::invalid_argument if num is out of range.
 */
string below19(int inputInt){
    //Validation: input must be and int between 1 and 19.
    cout<<inputInt;
    if(inputInt<1||inputInt>19) throw invalid_argument("Number out of range");

    const string words[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine","ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen","seventeen", "eighteen", "nineteen"};

    return words[inputInt];

}