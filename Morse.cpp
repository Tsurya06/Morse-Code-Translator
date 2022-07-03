// Morse Code Converter
#include <iostream>
#include <string>
using namespace std;
 
// Prototypes
string toMorse(char);
 
// Global data. Each valid character and its equivalent
// morse code are stored in the parallel arrays.
const int NUM_CHARS = 40;
char regular[NUM_CHARS] = { ' ', ',', '.', '?', '0', '1', '2', '3', '4', '5', 
                            '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 
                            'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 
                            'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'
                          };
 
string morse[NUM_CHARS] = { " ", "--..--" , ".-.-.-" , "..--.." ,
                            "-----", ".----", "..---", "...--",
                            "....-", ".....", "-....", "--...",
                            "---..", "----.", ".-", "-...",
                            "-.-.", "-..", ".", "..-.",
                            "--.", "....", "..", ".---",
                            "-.-", ".-..", "--", "-.",
                            "---", ".--.", "--.-", ".-.",
                            "...", "-", "..-", "...-",
                            ".--", "-..-", "-.--", "--.."
                          };
 
int main()
{
    string str;        // To hold the user's input
 
    // Get a word from the user.
    cout << "Enter a word and I will translate it to Morse code.\n";
    cout << "-> ";
    getline(cin, str);
 
    // Translate each character and display it.
    int index = 0;
    while (index < str.size())
    {
        
        cout << toMorse(toupper(str[index++]))<<" ";
       
    }
 
    return 0;
}
 
// The toMorse function accepts a char argument and
// returns a string containing the morse code
// for that character.
 
string toMorse(char ch)
{
    // Find the character in the array.
    int index = 0;
    while (index < NUM_CHARS && ch != regular[index]) { index++; } string morseValue; 
    // To hold the morse code 
    if (index >= NUM_CHARS)
        morseValue = "UNDEFINED";  // ch was not found
    else
        morseValue = morse[index]; // Get the morse code
 
    return morseValue;
}
