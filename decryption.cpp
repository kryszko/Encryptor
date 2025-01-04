#include <iostream>
#include <string>
#include <fstream>
#include "files_handling.h"
#include "decryption.h"

std::string decrypt(const std::string en_text, const std::string key)
{
	std::string alpha_low = "abcdefghijklmnopqrstuvwxyz";
	std::string alpha_up  = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	std::string de_text = "";
	int not_used = 0;

	for(int i = 0; i < en_text.length(); ++i)
	{
		char x = en_text[i];
		if(isalpha(x))
		{
			int col = alpha_low.find(key[(i - not_used) % key.length()]);
			int distance = 0;

			while (alpha_low[(col - distance + 26) % 26] != x)
			{
				distance += 1;
			}
			de_text += alpha_low[distance];
		}
		else
		{
			de_text += x;
			not_used += 1;
		}
	}

	return de_text;
}