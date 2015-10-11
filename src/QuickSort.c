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
 * @brief Interchange the position of two elements in an array.
 * @param  index1   - The index of element that swap with index2 element.
 * @param  index2   - The index of element that swap with index1 element.
 * @param  array    - The array contained the two elements want to be interchanged.
 * @retval None
 */
void swap(int index1, int index2, int *array)
{
  int temp;
  temp = array[index1];
  array[index1] = array[index2];
  array[index2] = temp;
}

/*
 * @brief   Sort the elements in array in ascending sequence.
 * @param   first   - The index of first element.
 * @param   last    - The index of last element.
 * @param   array   - The array contained the elements want to be sorting in ascending sequence.
 * @retval  None
 */
void quickSort(int first, int last, int *array)
{
  int temp, pivot, i, j;
  
  if(first >= last)
    return;
  
  if(first < last)
  {
    pivot = first;
    i = first;
    j = last;
    
    while(i<j)
    {
      while(array[j] > array[pivot]  && j > i && j > first)
        j--;
      
      if(j > i)
      {
        swap(pivot, j , array);
        pivot = j;
      }
      
      while(array[i] <= array[pivot]  && j > i && i < last)
        i++;
      
      if(j > i)
      {
        swap(i, pivot , array);
        pivot = i;
      }
    }
    
    quickSort(first, pivot-1, array);
    quickSort(pivot+1, last, array);
  }
  
}


