// Courtney Peters
// Data Structures
// Program 9
// Heapify function that turns an array into a maxheap.
// 12/11/2015

#include <iostream>

using namespace std;

// Heapify function
// Precondition:    Array with an empty value at index 0 and items
//                  to be sorted starting at index 1.
// Postcondition:   A maxheap in an array with all parent nodes greater 
//                  than all child nodes.

void heapify(int array[], int n);
void percolate_down(int array[], int r, int n);

int main()
{
    char choice = 'y';
    int n;
    
    while (choice == 'y')
    {
        cout << "Number of items to be sorted: ";
        cin >> n;
        int array[n + 1];
        
        array[0] = 0;
        
        // Get array values
        for (int i = 1; i <= n; i++)
        {
            cout << "\nArray [" << i << "]: ";
            cin >> array[i];
        }
        // Display array before heapify
        cout << "Array before applying heapify algorithm: " << endl;
    
        for (int i = 1; i <= n; i++)
        {
            cout << array[i] << " ";
        }
        
        // Heapify
        heapify(array, n);
        
        // Display array after heapify
        cout << "\nArray after heapify: " << endl;
        
        for (int i = 1; i <= n; i++)
        {
            cout << array[i] << " ";
        }
        
        cout << "Enter another array? (y/n) ";
        cin >> choice; 
    }
}

void heapify(int array[], int n)
{
    
    for (int r = n /2; r >= 1; r--)
    {
        percolate_down(array, r, n);
    }
}
    
void percolate_down(int array[], int r, int n)
{ 
    int c = 2 * r;
    
    while (c <= n)
    {
        if (c < n && array[c] < array[c + 1])
        {
            c++;
        }
        
        if (array[r] < array[c])
        {
            int temp = array[r];
            array[r] = array[c];
            array[c] = temp;
            r = c;
            c = 2 * c;
        }
        else
        {
            break;
        }
    }   
}    

