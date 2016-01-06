/* 
	Name: 	Courtney Peters
	Status:	Complete
	Desc:	Program to work with cstrings (cover to upper case, lower case, 
            and flipping the case.)
*/

#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

void upper(char str[]);
void lower(char str[]);
void flip(char str[]);

int main()
{
	const int SIZE = 50;
	char str[SIZE];
	
	cout << "Please enter a string: " << endl;
	cin.getline(str, SIZE);	
	cout << "You entered: " << str << endl;
	
	upper(str);	
	//cout << "Converting string to uppercase: " << upperStr << endl;
	
	lower(str);
	//cout << "Converting string to lowercase: " << lowerStr << endl;
	
	flip(str);
	//cout << "Converting string to flipped case: " << flipStr << endl;	
}

void upper(char str[])
{
	char upperStr[50];
	strcpy(upperStr, str);
	int i = 0;					
								
	while (upperStr[i] != 0)
	{
		upperStr[i] = toupper(str[i]); 
		i++;
	}
	cout << "Converted string to uppercase: " << upperStr << endl;
}

void lower(char str[])
{
	char lowerStr[50];
	strcpy(lowerStr, str);
	int i = 0;	
					
	while (lowerStr[i] != 0)
	{
		lowerStr[i] = tolower(str[i]); 
		i++;
	}
	cout << "Converted string to lowercase: " << lowerStr << endl;
}

void flip(char str[])
{
	char flipStr[50];
	strcpy(flipStr, str);
	int i = 0;
	
	while (flipStr[i] != 0)
	{
		char c = str[i];
		
		if (islower(c))
		{
			flipStr[i] = toupper(c);
		}
		
		else
		{
			flipStr[i] = tolower(c);
		}
 		i++;
	}
	cout << "Converted string to flipped case: " << flipStr << endl;
}
 




