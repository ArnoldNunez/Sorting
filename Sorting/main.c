/**
 * \file main.cpp
 *
 * \author Arnold Nunez
 */

#include "SortingLib.h"

#include <stdio.h>
#include <string.h>

/** Constants */
/// The maximun allowed size of our arrays
/// NOTE: The higher this is the more likely the
/// program is to crash on machines with
/// little memory available
#define SORTING_MAX_SIZE_OF_ARRAYS 16384



/** Prototype functions */
void PrintContent(int arr[], size_t len);



/**
 * Entry point for our program
 * \param argc The number of arguments given
 * \param argv In our case, the file with list of numbers and operation to perform
 */
int main(int argc, char* argv[])
{
	FILE* numList;									///< Ptr to the file with list of nums
	int numArray[SORTING_MAX_SIZE_OF_ARRAYS];		///< Where we will put all of the list nums
	int ndx = 0;									///< Index for placing numbers into array

	/// Variables to keep track of time
	clock_t tend;		///< The ending time of the algorithm
	clock_t tbegin;		///< The starting time of the algorithm
	double duration;	///< The amount of time the algorithm spent running (ms)

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
	while (fscanf(numList, "%d", &numArray[ndx]) != EOF) { ++ndx; }
	fclose(numList);


	/** Sorting algorithm selection */
	if (strcmp("insertion", argv[2]) == 0)
	{
		/// Run insertion sort on numbers array
		printf("Running insertion sort algorithm, please wait...\n");

		tbegin = clock();
		InsertionSort(numArray, ndx);
		tend = clock();
	}
	else if (strcmp("quick", argv[2]) == 0)
	{
		/// Run quick sort on numbers array
		printf("Running quick sort algorithm, please wait...\n");

		tbegin = clock();
		QuickSort(numArray, 0, ndx - 1);
		tend = clock();
	}
	else if (strcmp("bubble", argv[2]) == 0)
	{
		/// Run bubble sort on number array
		printf("Running bubble sort algorithm, please wait...\n");

		tbegin = clock();
		BubbleSort(numArray, ndx);
		tend = clock();
	}
	else if (strcmp("selection", argv[2]) == 0)
	{
		/// Run selection sort on number array
		printf("Running selection sort algorithm, please wait...\n");

		tbegin = clock();
		SelectionSort(numArray, ndx);
		tend = clock();
	}
	else if (strcmp("merge", argv[2]) == 0)
	{
		/// Run merge sort on number array
		printf("Running merge sort algorithm, please wait...\n");

		tbegin = clock();
		MergeSort(numArray, 0, ndx - 1);
		tend = clock();
	}
	else
	{
		/// No correct algorithm given
		printf("There was no correct algorithm given.\n");
		printf("Program exiting\n");
		return 4;
	}

	/// Print contents of sorted array
	PrintContent(numArray, ndx);

	/// Show the running time of the algorithm
	duration = (double)(tend - tbegin) * 1000 / CLOCKS_PER_SEC;
	printf("Time spent sorting: %f ms\n", duration);
	
	return 0;
}

/**
* Print the contents of the array
*
* \param arr The array to print the contents of (ptr)
* \param len The # of elements in the array
*/
void PrintContent(int arr[], size_t len)
{
	for (size_t i = 0; i < len; ++i)
	{
		printf("Element: %d\n", arr[i]);
	}
}
