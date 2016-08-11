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
 * \param len The number of elements in the array
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

/** Sort the array using the Selection sort algorithm
 *
 * Selection sort works by finding the smallest item
 * in a subarray and swapping it into the end of the
 * part of the array that is already sorted.
 *
 * \param arr The array to sort (ptr)
 * \param len The number of elements in the array
 */
void SelectionSort(int arr[], size_t len);


/** Sort the array using the Merge sort algorithm
 *
 * Merge sort works by dividing up the original array
 * recursively until you only have 1 element in the sub array.
 * Then the sorting is done by merging those sub arrays in 
 * order. We should divide the arrays in half each call.
 *
 * \param arr The array to sort (ptr)
 * \param low The starting index of the array
 * \param end The ending index of the array
 */
void MergeSort(int arr[], int start, int end);

void QuickSort();

#endif