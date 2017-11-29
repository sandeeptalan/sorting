#include "../inc/common.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int array[10] = {98,34,2,0,32,1,-23,65,7,8};

    /*Bubble Sort*/
    //bubble_sort(array);

    /*Selection Sort*/
    //int array2[10] = {-9,323,856,255,0,-9999,-22,6,52,87};
    //selection_sort(array);

    /*Insertion Sort*/
    insertion_sort(array);
    return 0;
}
