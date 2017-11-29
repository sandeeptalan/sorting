/**
*   The insertion sort algorithm sorts an array
**/

#include "../inc/common.h"

using namespace std;

int insertion_sort(int *array)
{
    cout << "Insertion Sort !!!" << endl;

    cout << "Input Array -" << endl;
    for(int i=0; i<10; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    cout << "After sorting -" << endl;
    for(int i=0; i<10; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}
