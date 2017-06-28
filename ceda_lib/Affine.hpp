#ifndef AFFINE_HPP
#define AFFINE_HPP
#include <string>
#include "generalParameters.hpp"

namespace ceda
{
    class Affine
    {
    private:
        const std::string m_encryptedText;
        const std::string m_decryptedText;
        const std::string m_text;
        const std::string m_alphabet;
        int m_aKey;
        int m_bKey;

    public:
        Affine(const std::string &text,int aKey,int bKey,const std::string &alphabet=alphabet_upper)
            : m_text(text), m_alphabet(alphabet)                       
        {
            setKey(aKey, bKey);
        }

        Affine(const std::string &text)
            : m_text(text), m_aKey(1), m_bKey(0)       {               }

        void setKey(int,int,int=26); //3rd argument is alphabetLength
        void encrypt();
        void decrypt();
        void printTable(const std::string&);

        std::string getEncryptedText() const { return m_encryptedText; }
        std::string getDecryptedText() const { return m_encryptedText; }

    };
}
#endif
