/**
 * \file SortingLib.cpp
 *
 * \author Arnold Nunez
 */

#include "SortingLib.h"

 /**
 * Inserts an item between elements in an array.
 * It will move all elements to the right of that array
 * up by 1. This will be used for insertion sort algorithm
 * \param arr The array we will insert item into
 * \param rloc The index of item 1 up from val
 * \param val The item to insert
 */
void Insert(int arr[], size_t rloc, int item)
{
	size_t i;
	/// Iterate backwards through list and find
	/// the correct location for the new item
	for (i = rloc; item < arr[i]; i--)
	{
		/// Move item up by 1
		arr[i + 1] = arr[i];
	}

	/// Insert new item into list
	arr[i + 1] = item;
}


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

void BubbleSort()
{

}

void QuickSort()
{

}