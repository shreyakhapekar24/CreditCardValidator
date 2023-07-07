#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

// ANSI escape sequences for text colors
const string ANSI_RESET = "\033[0m";
const string ANSI_GREEN = "\033[32m";
const string ANSI_RED = "\033[31m";
const string ANSI_YELLOW = "\033[33m";

int main(int argc, char *argv[]){
    const int N = 16;
    int card[N];    //we will store card number in this array
    int sum=0;
    int evenSum = 0, oddSum = 0;
    string input = "";
    cout<<"Enter card number: ";
    cin>>input;

    // now we need to convert our string into int digits and store it 
    for(int i=0; i<input.size(); i++){
        card[i] = input[i] - '0';
    }

    string maskedNumber = input;
    // masked the card number 
    for(int i=4; i<input.size()-4; i++){
        maskedNumber[i] = '*';
    }

    // and now Luhn algorihtm 
    for(int i=N-2; i>=0; i-=2)  //going backwards by 2 steps 
    {
        int num = card[i] * 2;  //double the digit 
        if(num > 9) num = num - 9;  // If the result is two digits, subtract 9
        evenSum += num; //add the result to evenSum
    }

    for(int i=N-1; i>=0; i-=2)  //going backwards by 2 steps 
    {
        oddSum += card[i];  //add the digit to oddSum
    }

    sum = evenSum + oddSum;
    cout<<"Even sum is: "<<evenSum;
    cout<<"\nOdd sum is: "<<oddSum;
    cout<<"\nTotal sum is: "<<sum<<"\n\n";

    // Card Type Recognition 
    string cardType;
    if(card[0] == 4){
        cardType = "Visa";
    }
    else if(card[0] == 5 && card[1] >= 1 && card[1] <= 5){
        cardType = "Mastercard";
    }
    else if(card[0] == 3 && (card[1] == 4 || card[1] == 7)){
        cardType = "American Express";
    }
    else{
        cardType = "Unknown";
    }
    cout<< ANSI_YELLOW <<"Card Type: "<< cardType << ANSI_RESET << endl;

    // now we need to check if sum%10 with 0 as remainder - it is valid 
    if(sum % 10 == 0){
        cout<< ANSI_GREEN <<"Card is VALID!" << ANSI_RESET<<endl;
    }
    else{
        cout<< ANSI_RED <<"Card is INVALID!" << ANSI_RESET <<endl;
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}