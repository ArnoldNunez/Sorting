/**
 * \file main.cpp
 *
 * \author Arnold Nunez
 */

#include "SortingLib.h"

#include <stdio.h>
#include <string.h>

/// The maximun allowed size of our arrays
#define MAX_SIZE 255


/**
 * Print the contents of the array (for testing purposes)
 *
 * \param arr The array to print the contents of
 * \param len The # of elements in the array
 */
void PrintContent(int arr[], size_t len)
{
	for (size_t i = 0; i < len; ++i)
	{
		printf("Element: %d\n", arr[i]);
	}
}

/**
 * Entry point for our program
 * \param argc The number of arguments given
 * \param argv In our case, the file with list of numbers and operation to perform
 */
int main(int argc, char* argv[])
{
	FILE* numList;				///< Ptr to the file with list of nums
	int numArray[MAX_SIZE];		///< Where we will put all of the list nums
	int ndx = 0;				///< Index for placing numbers into array

	printf("Welcome to Arnold's sorting program\n");





	/// Error checking -- 2 arguments required	
	if (argc != 3)
	{
		printf("Invalid number of arguments. 2 arguments required:\n");
		printf("The first argument: Plain txt file with list of unsorted numbers\n");
		printf("The second argument: The Sorting algorithm to perform on the file\n");
		return 2;
	}

	/// Try to open file for reading
	numList = fopen(argv[1], "r");
	if (numList == NULL) 
	{
		printf("There was an error reading the file provided\n");
		return 3;
	}




	/// Read numbers from file and store them in numArray
	while (fscanf(numList, "%d", &numArray[ndx]) != EOF) { ndx++; }
	fclose(numList);

	PrintContent(numArray, 10);

	/// Sorting algorithm selection
	if (strcmp("insertion", argv[2]) == 0)
	{
		/// Run insertion sort on numbers array
		printf("Running insertion sort algorithm, please wait...\n");
		InsertionSort(numArray, 10);
	}
	else if (strcmp("quick", argv[2]) == 0)
	{
		/// Run quick sort on numbers array
		printf("Running quick sort algorithm, please wait...\n");
	}
	else
	{
		/// No correct algorithm given
		printf("There was no correct algorithm given.\n");
		printf("Program exiting\n");
		return 4;
	}



	PrintContent(numArray, 10);
	


	return 0;
}