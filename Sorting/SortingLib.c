/**
 * \file SortingLib.cpp
 *
 * \author Arnold Nunez
 */

#include "SortingLib.h"



 /*-------------------------- Private Functions -----------------*/

 /** Inserts an item between elements in an array.
 *
 * It will move all elements to the right of that array
 * up by 1. This will be used for insertion sort algorithm
 * \param arr The array we will insert item into
 * \param rloc The index of item 1 up from val
 * \param val The item to insert
 */
void Insert(int arr[], size_t rloc, int item)
{
	int i;
	/// Iterate backwards through list and find
	/// the correct location for the new item
	for (i = rloc; (i >= 0 && arr[i] > item); --i)
	{
		/// Move item up by 1
		arr[i + 1] = arr[i];
		/*printf("element above: %d\n", arr[i + 1]);
		printf("element below: %d\n", arr[i]);
		printf("index: %d\n", i);*/
	}

	printf("Inserting at: %d\n", i + 1);
	/// Insert new item into list
	arr[i + 1] = item;
}

/** Swaps elements in an array at the given locs
*
* \param arr The array containng the items to swap
* \param fndx The index of the first item
* \param sndx The index of the second item
*/
void swap(int arr[], size_t fndx, size_t sndx)
{
	int temp;

	temp = arr[fndx];
	arr[fndx] = arr[sndx];
	arr[sndx] = temp;
}

/** Find the index of smallest item in the array
*
* \param arr The array we want to find the min of
* \param startndx The location to start checking at
* \param len The number of elements in the array
* \return minLoc The index of the smallest item in the array
*/
size_t FindSmall(int arr[], size_t startndx, size_t len)
{
	/// At start 1st element will be smallest
	size_t minLoc = startndx;

	for (size_t i = startndx + 1; i < len; ++i)
	{
		/// Item at minLoc is no longer minimu if...
		if (arr[minLoc] > arr[i]) { minLoc = i; }
	}

	return minLoc;
}

/*----------------------------------------------------------------*/



/**
 * The basic idea behind the insertion sort algorithm is that
 * you have a sub-array that is already sorted and the array that
 * is not sorted yet. To sort the array you grab the next item and
 * put it directly where it is supposed to go in the already sorted
 * sub-array. You have to move all elements up by 1 to the right of 
 * the location where the item will go.
 *
 * \param arr The array to sort
 * \param len The number of elements in the array
 */
void InsertionSort(int arr[], size_t len)
{
	/// Loop through entire array and insert the element at correct pos
	for (size_t i = 1; i < len; ++i)
	{
		Insert(arr, i - 1, arr[i]);
	}
}

/** Sort the array using the Bubble Sort algorithm
*
* Bubble sort algorithm works by comparing a pair
* of adjacent elements in the array and swaps them
* if they are not in order. This is done until the
* array is sorted (no more swaps are needed).
*
* \param arr The array to sort (ptr)
* \param len The number of elements in the array
*/
void BubbleSort(int arr[], size_t len)
{
	clock_t tend;				///< The ending time
	double duration;			///< Time spent running
	clock_t tbegin = clock();	///< Get starting time
	

	int swapped = 1;	///< Flag set when an element is swapped

	/// Continue bubblesorting if elements have been swapped
	while (swapped)
	{
		swapped = 0;

		for (size_t i = 0; i < len - 1; ++i)
		{
			if (arr[i] > arr[i + 1])
			{
				/// First numbe is greater than so swap them
				swap(arr, i, i + 1);
				swapped = 1;
			}

		}
	}

	tend = clock();	///< Get ending time

	/// Get duration in seconds
	duration = (double)(tend - tbegin) * 1000 / CLOCKS_PER_SEC;
	printf("Time spent running: %f ms\n", duration);
}

/** Sort the array using the Selection sort algorithm
*
* Selection sort works by finding the smallest item
* in a subarray and swapping it into the end of the
* part of the array that is already sorted.
*
* \param arr The array to sort (ptr)
* \param len The number of elements in the array
*/
void SelectionSort(int arr[], size_t len)
{
	int temploc;
	for (size_t i = 0; i < len; ++i)
	{
		/// Find smallest and swap into current index
		temploc = FindSmall(arr, i, len);
		swap(arr, i, temploc);
	}
}


/** Sort the array using the Merge sort algorithm
*
* Merge sort works by dividing up the original array
* recursively until you only have 1 element in the sub array.
* Then the sorting is done by merging those sub arrays in
* order. We should divide the arrays in half each call.
*
* \param arr The array to sort (ptr)
* \param start The starting index of the array
* \param end The ending index of the array
*/
void MergeSort(int arr[], int start, int end)
{
	/// Only call recursively if there is more than 1 item in sub array
	if (end > start)
	{
		/// Index of middle. We want to cut off the decimal hence int
		int mid = (p + r) / 2;		///< IF this doesn't work maybe use round or floor
		mergeSort(arr, start, end);
		mergeSort(arr, mid + 1, end);
		// merge(arr, p, q, r);
	}
}

void QuickSort()
{

}
