#include "../inc/common.h"

void printArray(int *array)
{
    for(int i=0; i<10; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}
