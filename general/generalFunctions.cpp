//This is where the general functions ,which are used by the classes, live!
#include <iostream>
#include <string>
#include <cassert>
#include "generalParameters.hpp"
#include "generalFunctions.hpp"

namespace general
{
    void printAlphabetH(const std::string &text, const std::string &space)
    {
        for(auto &character : text)
        {
            std::cout << character;
            std::cout << space; // 3 spaces between letters by default.
        }
            std::cout << "\n";  
    }

    void printAlphabetV(const std::string &textOut, const std::string &textIn)
    {
        for(auto &character : textOut)
        {
            std::cout << character;
            std::cout << "  ";  // 2 spaces before text!
            general::printAlphabetH(textIn); // 3 spaces between letters
            std::cout << "\n";  // empty line.
            
        }
    }

    int gcd(int x, int y)
    {
        int remainder;
        int min;
        if(x>y)
        {
            remainder = x % y;
            min = y;
        }
        else
        {
            remainder = y % x;
            min = x;
        }
        if(remainder == 0)
            return min;
        return general::gcd(min, remainder);
    }

    int getCharacterNum(char character,const std::string &alphabet)
    {
        for(int i=0;i < static_cast<int>( alphabet.size() );i++)
        {
            if(alphabet[i] == character)
                return i;
        }
        assert("Character not found in the provided alphabet");
        return 0; //add exception once you learn them :P
    }

}
