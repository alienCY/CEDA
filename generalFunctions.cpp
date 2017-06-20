//This is where the general functions ,which are used by the classes, live!
#include <iostream>
#include <string>
#include "generalParameters.hpp"

namespace general
{
    void printAlphabet(Align alignment, const std::string &text)
    {
        for(auto &character : text)
        {
            std::cout << character;
            
            switch(alignment)
            {
                default:
                case Align::HORIZONTAL:
                    std::cout << " ";
                    break;
                case Align::VERTICAL:
                    std::cout << "  ";  // 2 spaces before text!
                    general::printAlphabet(Align::HORIZONTAL, text);
                    std::cout << "\n";  // empty line
                    break;
                case Align::SQUARE:
                    std::cout << "   "; // 3 spaces before text!
                    general::printAlphabet(Align::HORIZONTAL, text);
                    general::printAlphabet(Align::VERTICAL, text);
                    break;
            }
        }
        //new line after done printing horizontal text
        if(alignment == Align::HORIZONTAL)
            std::cout << "\n";  
    }


}
