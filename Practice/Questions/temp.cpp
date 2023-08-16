#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Main function
int main() {

    // Declare variables
    string phoneNumber;
    string correspondingDigits = "";

    // Prompt the user to enter the telephone number in letters
    cout << "Enter the telephone number in letters: ";
    // Get the telephone number in letters
    getline(cin, phoneNumber);

    // Convert the letters to digits (only the first seven letters)
    int digitCount = 0;
    for (char letter : phoneNumber) {
        if (isalpha(letter)) {
            letter = toupper(letter); // Convert the letter to uppercase
            if (letter >= 'A' && letter <= 'C')
                correspondingDigits += "2";
            else if (letter >= 'D' && letter <= 'F')
                correspondingDigits += "3";
            else if (letter >= 'G' && letter <= 'I')
                correspondingDigits += "4";
            else if (letter >= 'J' && letter <= 'L')
                correspondingDigits += "5";
            else if (letter >= 'M' && letter <= 'O')
                correspondingDigits += "6";
            else if (letter >= 'P' && letter <= 'S')
                correspondingDigits += "7";
            else if (letter >= 'T' && letter <= 'V')
                correspondingDigits += "8";
            else if (letter >= 'W' && letter <= 'Z')
                correspondingDigits += "9";

            digitCount++;
            // Add hyphen after the third digit
            if (digitCount == 3 && digitCount < 7) {
                correspondingDigits += "-";
            }
        }
        if (digitCount == 7) {
            break; // Stop processing after seven letters
        }
    }

    // Output the corresponding telephone number in digits
    cout << "The corresponding telephone number in digits is: " << correspondingDigits << endl;

    return 0;
}
