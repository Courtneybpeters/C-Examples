/* 
	Name: 	Courtney Peters
	Status:	Complete
	Desc:	Input, process, display, and average test scores
*/

#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int *scoreInput(int size);
void displayScores(int * scores, int size, double average);
double calcAverage(int * scores, int size);

int main()
{
	int size;
	
	cout << "Number of students: ";
	cin >> size;
	
	int * scrPtr =  scoreInput(size);
	
	sort(scrPtr, scrPtr + size);
	
	double average = calcAverage(scrPtr, size);
	
	displayScores(scrPtr, size, average);	
}

// Gets input from user and scores in dynamic array
int *scoreInput(int size)
{
	int * scores = new int[size];
	
	cout << "Starting score input - Please input score between 0 and 105." << endl;
	
	for (int i = 0; i < size; i++)
	{
		*(scores + i) = -1;		
		
		while (*(scores + i) < 0 || *(scores + i) > 105)	// Input validation
		{
			cout << "Test " << i + 1 << " score: ";
			cin >> *(scores + i);
		}
	}
	
	return scores;
}

// Displays scores and average
void displayScores(int * scores, int size, double average)
{
	cout << "Scores" << endl;
	cout << "------" << endl;
	
	for (int i = 0; i < size; i++)
	{
		cout << scores[i] << endl;
	}
		
	cout << fixed << showpoint << setprecision(2);
	cout << "Average: " << average << endl;
}

// Calculates and returns average of score array
double calcAverage(int * scores, int size)
{
	double total, average;
	total = 0;
	
	for (int i = 0; i < size; i++)
	{
		total += *(scores + i);
	}
	
	average = total / size;
	
	return average;
}

