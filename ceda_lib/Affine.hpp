#ifndef AFFINE_HPP
#define AFFINE_HPP
#include <string>
#include "../general/generalParameters.hpp"

namespace ceda
{
    class Affine
    {
    private:
        std::string m_encryptedText;
        std::string m_decryptedText;
        std::string m_text;
        std::string m_alphabet=alphabet_upper;
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

        void setKey(int,int);
        void encrypt();
        void decrypt();
        void printTable();

        std::string getEncryptedText() const { return m_encryptedText; }
        std::string getDecryptedText() const { return m_decryptedText; }
    };
}
#endif
