/**
*   Bubble Sort is the simplest sorting algorithm that works by 
*   repeatedly swapping the adjacent elements if they are in wrong order.
**/

#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    cout << "Bubble Sort !!!" << endl;
    int array[10] = {98,34,2,0,32,1,-23,65,7,8};
    bool swapped = false;

    cout << "Input Array -" << endl;    
    for(int i=0; i<10; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    for(int i = 0; i<10; i++)
    {
        swapped = false;
        for(int j=0 ; j<10-1; j++)
        {
            if(array[j] > array[j+1])
            {
                int tmp = array[j];
                array[j] = array[j+1];
                array[j+1] = tmp;
                swapped = true;
            }
        }
/*
        cout << "after pass - " << i << endl;
        for(int i=0; i<10; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
*/
        if(swapped == false)
            break;
    }

    cout << "after sorting -" << endl;
    for(int i=0; i<10; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
