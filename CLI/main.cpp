#include <iostream>
#include "../general/generalFunctions.hpp" 
#include "../ceda_lib/CEDA.hpp"

int main()
{
    ceda::Affine text("RpKKTPDT.Km,", 3, 3, alphabet_full);
    text.decrypt();
    text.printTable();

    return 0;
}
