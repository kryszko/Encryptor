#include <iostream>
#include <string>
#include <fstream>
#include "files_handling.h"
#include "decryption.h"

int main()
{
    std::string en_text = download("tekst_do_dekrypcji.txt");
    std::string key = download("klucz.txt");

    std::cout << "Text: " << en_text << std::endl;
    std::cout << "Key: " << key << std::endl;

    std::cout << decrypt(en_text, key);
}