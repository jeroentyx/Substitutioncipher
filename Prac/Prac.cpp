/*******************************************************************************
filename Prac.cpp
author Jeroen Tan
email yixujeroen.tan@digipen.edu
date created 14 May 2020
Brief Description: A Source file containing definitions for
Substitution Cipher
******************************************************************************/

#include <iostream>
#include <string>

/*Substitution Cipher*/
int main()
{
	std::string alpha{ "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
	std::string key{ "XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr" };

	std::string user{};
	std::string encrypt{};
	std::string decrypt{};


	std::cout << "Enter string " << std::endl;
	std::getline(std::cin, user);

	/*Check for the position*/
	for (char c : user)
	{
		/*Find the character in the alpha*/
		size_t position = alpha.find(c);
		/*Check if there is character*/
		if (position != std::string::npos)
			encrypt += key.at(position);
		else
			encrypt += c;

	}

	std::cout << "Encrypted message is " << encrypt << std::endl;

	for (char c : encrypt)
	{
		/*Find the position in the key*/
		size_t position = key.find(c);
		/*Check if there is character*/
		if (position != std::string::npos)
			decrypt += alpha.at(position);
		else
			decrypt += c;
	}
	std::cout << "Decrypted message is " << decrypt << std::endl;



	return 0;
}