/*
Problem: Palindrome Number Check
Concepts:
- Modulo operator (%) to extract digits.
- Integer division (/) to remove digits.
- Reversing numbers mathematically.
- Boolean logic for comparison.
*/

#include <iostream>
#include <string>

using namespace std;

/*
-----------------------------------------------------------
Function: ReadPositiveNumber
Purpose : Ensures the user enters a valid positive integer.
-----------------------------------------------------------
*/
int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    
    return Number;
}

/*
-----------------------------------------------------------
Function: ReverseNumber
Purpose : Mathematically reverses the digits of the input.
          Example: 123 -> 321
-----------------------------------------------------------
*/
int ReverseNumber(int Number)
{
    int Remainder = 0;
    int ReversedNumber = 0;
    
    while (Number > 0)
    {
        Remainder = Number % 10;          // Extract last digit
        Number = Number / 10;             // Remove last digit
        ReversedNumber = ReversedNumber * 10 + Remainder; // Build reversed number
    }
    
    return ReversedNumber;
}

/*
-----------------------------------------------------------
Function: IsPalindromeNumber
Purpose : Compares original number with its reversed version.
-----------------------------------------------------------
*/
bool IsPalindromeNumber(int Number)
{
    // A number is palindrome if it equals its reverse
    return Number == ReverseNumber(Number);
}

int main()
{
    int Number = ReadPositiveNumber("Please enter a positive number?");

    if (IsPalindromeNumber(Number))
    {
        cout << "\nYes, [" << Number << "] is a Palindrome number.\n";
    }
    else
    {
        cout << "\nNo, [" << Number << "] is NOT a Palindrome number.\n";
    }

    system("pause>0");
    return 0;
}
