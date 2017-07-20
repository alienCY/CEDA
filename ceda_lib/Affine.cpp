#include <iostream>
#include <string>
#include <cassert>
#include "../general/generalParameters.hpp"
#include "../general/generalFunctions.hpp"
#include "Affine.hpp"

void ceda::Affine::setKey(int aKey, int bKey, int alphabetLength)
{
    assert( 0 <= aKey && 0<= bKey && aKey < alphabetLength && bKey < alphabetLength && "Range");
    assert(general::gcd(aKey) == 1 && "aKey and 26(length of alphabet) aren't coprime");
    //if it's ok, set the key
    m_aKey = aKey;
    m_bKey = bKey;
}


void ceda::Affine::printTable(const std::string &alphabet)
{
    std::cout << "Decrypted alphabet: ";
    general::printAlphabet(Align::HORIZONTAL);
    std::cout << "Encrypted alphabet: ";
    general::printAlphabet(Align::HORIZONTAL);
}
