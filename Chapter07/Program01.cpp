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
string numberToText(int inputInt){
    string buildString; // This is the string to built and returned out from the function.
    string numberString = to_string(inputInt); //This is the integer converted to a string format.
        
    if(inputInt<0){buildString="negative "; inputInt=abs(inputInt);}

    for (int i = numberString.length();i>0;i--){

        buildString = buildString + below19();
    }
 
    return buildString;
}
/**
 * @brief Converts an integer (0-9) to its hundred multiplied text equivalent.
 * @param num The integer to convert (1 to 9).
 * @return A string containing the text representation (e.g., "hundred").
 * @pre num must be between 0 and 9, inclusive.
 * @post Returns an empty string if the input is invalid.
 * @throws std::invalid_argument if num is out of range.
 * @name tensConvert
 */
string hundredsConvert(int inputInt){
    if(inputInt<2||inputInt>9) throw invalid_argument("Number out of range");
    const string words[] = {"","","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};
    return words[inputInt];
}

/**
 * @brief Converts an integer (2-9) to its ten multiplied text equivalent.
 * @param num The integer to convert (2 to 9).
 * @return A string containing the text representation (e.g., "twenty" for 2).
 * @pre num must be between 2 and 9, inclusive.
 * @post Returns an empty string if the input is invalid.
 * @throws std::invalid_argument if num is out of range.
 * @name tensConvert
 */
string tensConvert(int inputInt){
    if(inputInt<2||inputInt>9) throw invalid_argument("Number out of range");
    const string words[] = {"","","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};
    return words[inputInt];
}

/**
 * @brief Converts an integer (1-19) to its text equivalent.
 * @param num The integer to convert (1 to 19).
 * @return A string containing the text representation (e.g., "one" for 1).
 * @pre num must be between 1 and 19, inclusive.
 * @post Returns an empty string if the input is invalid.
 * @throws std::invalid_argument if num is out of range.
 * @name below19Function
 */
string below19(int inputInt){
    //Validation: input must be and int between 1 and 19.
    cout<<inputInt;
    if(inputInt<1||inputInt>19) throw invalid_argument("Number out of range");

    const string words[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine","ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen","seventeen", "eighteen", "nineteen"};

    return words[inputInt];

}