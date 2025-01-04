#include <iostream>
#include <string>
#include <fstream>
#include "files_handling.h"
#include "decryption.h"


std::string download(std::string file_adres)
{
	std::string encrypted_text;

	std::ifstream inputfile(file_adres);
	if(!inputfile.is_open())
	{
		std::cout << "File input problem " << std::endl;
	}

	char x;
	while (inputfile.get(x))
	{
		encrypted_text += x;
	}

	inputfile.close();

	return encrypted_text;
}