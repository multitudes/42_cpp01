/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrusa <lbrusa@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 09:31:47 by lbrusa            #+#    #+#             */
/*   Updated: 2024/08/08 14:54:01 by lbrusa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

/**
 * @brief Replace all occurences of a string in a file
 * 
 * @param argc
 * @param argv
 * 
 * Since I am not allowed to use vector I read char by char. Better would be 
 * `std::vector<char> fileContents(sourceFile.seekg(0, std::ios::end).tellg());`
 */
int main(int argc, char *argv[])
{
	if (argc != 4) {
		std::cerr << argv[0] << " ERRor: Usage is <filename> <string1> <string2>" << std::endl;
		return 1;
	}

	// reading
	std::ifstream sourceFile(argv[1], std::ios::binary);
	if (!sourceFile) {
		std::cerr << "Unable to open source file \n";
		return 1;
	}

	// stream out
	std::string newFileName = argv[1];
	newFileName += ".replace";
	

	// yes I need c_str() here... because in cpp98 the ofstream constructor does not take a string
	// but a const char* so I need to convert the string to a c string
	std::ofstream newFile(newFileName.c_str(), std::ios::binary);
	if (!newFile) {
		std::cerr << "Unable to open dest file \n";
		return 1;
	}

	// create cpp strings
	std::string toreplace = argv[2];
	std::string replacement = argv[3];
	
	// Get the size of the file and reset to the beginning
	// the first parameter is the offset from the specified position
    sourceFile.seekg(0, std::ios::end);
    std::streamsize fileSize = sourceFile.tellg();
    sourceFile.seekg(0, std::ios::beg);
	
	// allocate memory for the file contents
	char* fileContents = new char[static_cast<size_t>(fileSize) + 1];
	
	// read into the fileContents
    if (sourceFile.read(fileContents, fileSize)) {
        // Null terminate the string
        fileContents[fileSize] = '\0';

        // Output the file size and contents for debugging
        // std::cout << "File size: " << fileSize << std::endl;
        // std::cout << "File contents: " << fileContents << std::endl;
    } else {
        std::cerr << "Failed to read file." << std::endl;
    }

	// I could use the fileContents as a c string here but since I am in cpp I will convert to a string
	// otherwise i would have to use strstr below to replace which is a c way of doing it and not allowed
	std::string fileContentsStr = fileContents;
	std::cout << "File contents: " << fileContentsStr << std::endl;
	// replace
	if (toreplace != replacement)
	{
		size_t n = 0;
		while ( (n = fileContentsStr.find(toreplace, n)) != std::string::npos)
		{
			fileContentsStr.erase(n, toreplace.length());
			fileContentsStr.insert(n, replacement);
			n += replacement.length();
		}
	}

	// write
	newFile << fileContentsStr;
	newFile.close();

	delete[] fileContents;

	sourceFile.close();
	return 0;
}
