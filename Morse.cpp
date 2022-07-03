#include <iostream>
#include <string>
using namespace std;

string charToMorse(char16_t letter)
{
    switch(letter)
    {
        case 'a': case 'A':
        return ".-"; break;
        case 'b': case 'B':
        return "-..."; break;
        case 'c': case 'C':
        return "-.-."; break;
        case 'd': case 'D':
        return "-.."; break;
        case 'e': case 'E':
        return "."; break;
        case 'f': case 'F':
        return "..-."; break;
        case 'g': case 'G':
        return "--."; break;
        case 'h': case 'H':
        return "...."; break;
        case 'i': case 'I':
        return ".."; break;
        case 'j': case 'J':
        return ".---"; break;
        case 'k': case 'K':
        return "-.-"; break;
        case 'l': case 'L':
        return ".-.."; break;
        case 'm': case 'M':
        return "--"; break;
        case 'n': case 'N':
        return "-."; break;
        case 'o': case 'O':
        return "---"; break;
        case 'p': case 'P':
        return ".--."; break;
        case 'q': case 'Q':
        return "--.-"; break;
        case 'r': case 'R':
        return ".-."; break;
        case 's': case 'S':
        return "..."; break;
        case 't': case 'T':
        return "-"; break;
        case 'u': case 'U':
        return "..-"; break;
        case 'v': case 'V':
        return "...-"; break;
        case 'w': case 'W':
        return ".--"; break;
        case 'x': case 'X':
        return "-..-"; break;
        case 'y': case 'Y':
        return "-.--"; break;
        case 'z': case 'Z':
        return "--.."; break;
        case 'ą': case 'Ą':
        return ".-.-"; break;
        case 'ć': case 'Ć':
        return "-.-.."; break;
        case 'ę': case 'Ę':
        return "..-.."; break;
        case 'ł': case 'Ł':
        return ".-..-"; break;
        case 'ń': case 'Ń':
        return "--.--"; break;
        case 'ó': case 'Ó':
        return "---."; break;
        case 'ś': case 'Ś':
        return "...-..."; break;
        case 'ż': case 'Ż':
        return "--..-."; break;
        case 'ź': case 'Ź':
        return "--..-"; break;
        default:
        return " "; break;
    }
}
string morseToChar(string morse)
{

        if(morse == ".-")
        {return "a";}
        else if(morse == "-...")
        {return "b";}
        else if(morse == "-.-.")
        {return "c";}
        else if(morse == "-..")
        {return "d";}
        else if(morse == ".")
        {return "e";}
        else if(morse == "..-.")
        {return "f";}
        else if(morse == "--.")
        {return "g";}
        else if(morse == "....")
        {return "h";}
        else if(morse == "..")
        {return "i";}
        else if(morse == ".---")
        {return "j";}
        else if(morse == "-.-")
        {return "k";}
        else if(morse == ".-..")
        {return "l";}
        else if(morse == "--")
        {return "m";}
        else if(morse == "-.")
        {return "n";}
        else if(morse == "---")
        {return "o";}
        else if(morse == ".--.")
        {return "p";}
        else if(morse == "--.-")
        {return "q";}
        else if(morse == ".-.")
        {return "r";}
        else if(morse == "...")
        {return "s";}
        else if(morse == "-")
        {return "t";}
        else if(morse == "..-")
        {return "u";}
        else if(morse == "...-")
        {return "v";}
        else if(morse == ".--")
        {return "w";}
        else if(morse == "-..-")
        {return "x";}
        else if(morse == "-.--")
        {return "y";}
        else if(morse == "--..")
        {return "z";}
        else if(morse == ".-.-")
        {return "ą";}
        else if(morse == "-.-..")
        {return "ć";}
        else if(morse == "..-..")
        {return "ę";}
        else if(morse == ".-..-")
        {return "ł";}
        else if(morse == "--.--")
        {return "ń";}
        else if(morse == "---.")
        {return "ó";}
        else if(morse == "...-...")
        {return "ś";}
        else if(morse == "--..-.")
        {return "ż";}
        else if(morse == "--..-")
        {return "ź";}
        else{return " ";}
}
//-.. .- .-- .. -..
int main()
{
    cout << "Morse Code Converter" << endl;
    char key;
    bool loop = true;
    while(loop)
    {
        bool toMorse=true;
        string input;
        string output = "";
        int node = 0;
        string sub;
        cout << "Type a word or morse code(using - and .): " << endl;
        getline(cin, input);
        if(input[1]=='.' || input[1]=='-')
        {
            toMorse=false;
        }
        else
        {
            toMorse=true;
        }
        if(toMorse)
        {
            for(int i=0;i<input.length();i++)
            {
                if(i!=0)
                {
                    output+=" ";
                }
                output = output + charToMorse(input[i]);
            }
        }
        else{
            for(int i = 0;i<=input.length();i++)
            {
                if(input[i]==' ')
                {
                    sub = input.substr(node,i-node);
                    output+=morseToChar(sub);
                    node = i+1;
                }
                if(i==input.length()-1)
                {
                    sub = input.substr(node,i+1-node);
                    output+=morseToChar(sub);
                    node = i+1;
                }
            }
        }
        cout << output << endl;
        cout << "Press r to restart or any key to exit" << endl;
        cin >> key;
        if(key!='r')
        {
            loop=false;
        }
        cin.clear();
        cin.ignore();
        cout << endl << endl;
    }
    
}
