/********************************************************************************
  * @author     Siah Yi Loi
  * @programme  Microelectronics with Embedded Technology
  * @date       04-Oct-2015
  * @brief      Quick Sort
  *             -- Quick Sort first will divides an array using a PIVOT into 
  *                two sub-arrays: the smaller elements and the larger elements.
  *                The smaller elements will put at the left of the PIVOT while
  *                the larger elements will put at the right of the PIVOT.
  *                The sub-arrays were then sorted by using recursive 
  *                Quick Sort method.
  *******************************************************************************/
#include "QuickSort.h"
#include <stdio.h>

/*
 * brief @ Interchange the position of two elements in an array.
 * param @ index1     - The index of first element.
 *         index2     - The index of second element.
 *         array      - The array contained the two elements want to be interchanged.
 * retval@ None
 */
void swamp(int index1, int index2, int *array)
{
  int temp;
  temp = array[index1];
  array[index1] = array[index2];
  array[index2] = temp;
}


void quickSort(int leftIndex, int rightIndex, int *array)
{
  
}


