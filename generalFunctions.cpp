//This is where the general functions ,which are used by the classes, live!
#include <iostream>
#include <string>
#include "generalParameters.hpp"

namespace general
{
    void printAlphabet(Align alignment, const std::string &textOut, const std::string &textIn)
    {
        for(auto &character : textOut)
        {
            std::cout << character;
            
            switch(alignment)
            {
                default:
                case Align::HORIZONTAL:
                    std::cout << "   "; // 3 spaces between letters.
                    break;
                case Align::VERTICAL:
                    std::cout << "  ";  // 2 spaces before text!
                    general::printAlphabet(Align::HORIZONTAL, textIn, textIn); //non necessary second textIn
                    std::cout << "\n";  // empty line.
                    break;
            }
        }
        //new line after done printing horizontal text.
        if(alignment == Align::HORIZONTAL)
            std::cout << "\n";  
    }


}
