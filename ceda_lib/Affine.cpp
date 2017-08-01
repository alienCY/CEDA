#include <iostream>
#include <string>
#include <cassert>
#include "../general/generalParameters.hpp"
#include "../general/generalFunctions.hpp"
#include "Affine.hpp"

void ceda::Affine::setKey(int aKey, int bKey)
{
    int length = m_alphabet.size();
    assert( 0 <= aKey && 0<= bKey && aKey < length && bKey < length && "Range");
    assert(general::gcd(aKey,m_alphabet.size()) == 1 && "aKey & length of alphabet aren't coprime");
    //if it's ok, set the key
    m_aKey = aKey;
    m_bKey = bKey;
}


void ceda::Affine::printTable(std::string spacing)
{
    ceda::Affine alphabet(m_alphabet, m_aKey, m_bKey, m_alphabet);
    alphabet.encrypt();
    std::cout << "Decrypted alphabet: ";
    general::printAlphabetH(alphabet.getDecryptedText(), spacing);
    std::cout << "Encrypted alphabet: ";
    general::printAlphabetH(alphabet.getEncryptedText(), spacing);
}

void ceda::Affine::encrypt()
{
    m_decryptedText = m_text;

    for(const char &character : m_decryptedText)
    {
        int charNum = m_aKey * general::getCharacterNum(character, m_alphabet) + m_bKey;
        m_encryptedText.push_back( m_alphabet[charNum % m_alphabet.size()] );
    }
}

void ceda::Affine::decrypt()
{
    m_encryptedText = m_text;

    for(const char &character : m_encryptedText)
    {
        int aRev;
        for(aRev = 1; true; aRev++)
            if(( (aRev*m_aKey) % m_alphabet.size() ) == 1)
                break; //aRev is set to the correct value
        int index = aRev*(general::getCharacterNum(character, m_alphabet) - m_bKey);
        while(index<0)  //for negative numbers
            index += m_alphabet.size();
        m_decryptedText.push_back( m_alphabet[index % m_alphabet.size()] );
    }
}
