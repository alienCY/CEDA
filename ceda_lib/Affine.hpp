#ifndef AFFINE_HPP
#define AFFINE_HPP
#include <string>
#include "generalFunctions.hpp"

namespace ceda
{
    class Affine
    {
    private:
        std::string m_encryptedText;
        std::string m_decryptedText;

    public:
        const std::string& getEncryptedText() { return m_encryptedText; }
       
        


    };
}
#endif
