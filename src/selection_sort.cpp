/**
*   The selection sort algorithm sorts an array by repeatedly finding the
*   minimum element (considering ascending order) from unsorted part and
*   putting it at the beginning. The algorithm maintains two subarrays in
*   a given array.
*
*   1) The subarray which is already sorted.
*   2) Remaining subarray which is unsorted.
*
*   In every iteration of selection sort, the minimum element
*   (considering ascending order) from the unsorted subarray is picked and
*   moved to the sorted subarray.
**/

#include "../inc/common.h"

using namespace std;

int selection_sort(int *array)
{
    cout << "Selection Sort !!!" << endl;

    cout << "Input Array -" << endl;
    for(int i=0; i<10; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    int min_idx;
    for(int i = 0; i<10; i++)
    {
        min_idx = i;
        for(int j=i+1 ; j<10; j++)
        {
            if(array[min_idx] > array[j])
            {
                min_idx = j;
            }
// No need to swap everytime you find a smaller element, find the index
// of smallest element
/*
            if(array[i] > array[j])
            {
                int tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
*/
        }
        // Swap only once per loop
        int tmp = array[i];
        array[i] = array[min_idx];
        array[min_idx] = tmp;

/*
        cout << "after pass - " << i << endl;
        for(int i=0; i<10; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
*/
    }

    cout << "after sorting -" << endl;
    for(int i=0; i<10; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}
