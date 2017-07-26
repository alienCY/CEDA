#ifndef GENERAL_FUNCTIONS_HPP
#define GENERAL_FUNCTIONS_HPP
#include "generalParameters.hpp"
#include <string>

namespace general
{
    void printAlphabetH(const std::string& =alphabet_upper, const std::string& ="   ");
    void printAlphabetV(const std::string& =alphabet_upper, const std::string& =alphabet_lower);
    int gcd(int,int=26); 
    int getCharacterNum(char, const std::string& = alphabet_upper);
}                                                          

#endif

