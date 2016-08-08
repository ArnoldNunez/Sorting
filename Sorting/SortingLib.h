#ifndef _SORTINGLIB_H
#define _SORTINGLIB_H

/**
 * \file SortingLib.h
 *
 * \author Arnold Nunez
 *
 * \brief Functions that will demonstrate the usages
 *		of different sorting algorithms.
 */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

 /**
 * The basic idea behind the insertion sort algorithm is that
 * you have a sub-array that is already sorted and the array that
 * is not sorted yet. To sort the array you grab the next item and
 * put it directly where it is supposed to go in the already sorted
 * sub-array. You have to move all elements up by 1 to the right of
 * the location where the item will go.
 *
 * \param arr The array to sort (ptr)
 */
void InsertionSort(int arr[], size_t len);


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
void BubbleSort(int arr[], size_t len);

void QuickSort();

#endif