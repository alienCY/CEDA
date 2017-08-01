#include <iostream>
#include "../general/generalFunctions.hpp" 
#include "../ceda_lib/CEDA.hpp"

int main()
{
    ceda::Affine text("Hello Humans!", 19, 3, alphabet_full);
    text.encrypt();
    text.printTable(" ");
    std::cout << "\nDecrypted Text:\n" << text.getDecryptedText() << "\n";
    std::cout << "\nEncrypted Text:\n" << text.getEncryptedText() << "\n";

    return 0;
}
