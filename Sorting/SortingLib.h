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


 /**
 * The basic idea behind the insertion sort algorithm is that
 * you have a sub-array that is already sorted and the array that
 * is not sorted yet. To sort the array you grab the next item and
 * put it directly where it is supposed to go in the already sorted
 * sub-array. You have to move all elements up by 1 to the right of
 * the location where the item will go.
 */
void InsertionSort();

void BubbleSort();

void QuickSort();

#endif