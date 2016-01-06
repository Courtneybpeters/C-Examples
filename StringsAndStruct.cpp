/* 
	Name: 	Courtney Peters
	Status:	Complete
	Desc:	Figure out the most recurring character in a string
*/

#include <iostream>
#include <string>

using namespace std;

// Struct for the mostRepeated function to return data in
struct CharAndCount {
	
	int count;
	char character;
};

CharAndCount mostRepeated(string text);

int main()
{
	string text;
	CharAndCount character;
	const int maxLength = 500; 	// Arbitrary max string length for getline
	
	cout << "Enter the string to be processed: " << endl;
	getline(cin, text);
	
	character = mostRepeated(text);
	
	cout << character.character << " was the most repeated character." << endl;
	cout << "Repeated " << character.count << " times in the string." << endl;
}

CharAndCount mostRepeated(string text)
{
	CharAndCount character;
	character.count = 0;
	
	int currCount;		  // count for the current ASCII character
	
	for (int ascii = 31; ascii <= 126; ascii++)	// Loop through ascii values
	{
		currCount = 0;	  						// Reset current count
		
		for (int i = 0; i < text.length(); i++)
		{			
			if (text[i] == ascii)
			{
				currCount++;
			}				
		}
		
		if (currCount > character.count)
		{
			character.count = currCount;
			character.character = ascii;	
		}		
	}
	
	return character;	
}


