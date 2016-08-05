/**
 * \file main.cpp
 *
 * \author Arnold Nunez
 */

#include <cstdio>


#define MAX_SIZE 255



/**
 * Entry point for our program
 * \param argc The number of arguments given
 * \param argv In our case, the file with list of numbers and operation to perform
 */
int main(int argc, char* argv[])
{
	printf("Number of arguments: %d\n", argc);

	char fileName[MAX_SIZE];	///< Buffer for file name
	char mode[MAX_SIZE];		///< The sorting algorithm to use
	FILE* numList;				///< Ptr to the file with list of nums
	int numArray[MAX_SIZE];		///< Where we will put all of the list nums


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


	/// Read numbers from file
	while (true)
	{

		break;
	}


	fclose(numList);
	return 0;
}