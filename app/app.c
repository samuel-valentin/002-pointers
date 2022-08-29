#include "pointers.h"

int main(void)
{
    int array [] = {1,6,3,8,2,3,3,4,1,2,4,1,1,1};
    int size = sizeof(array) / sizeof(array[0]);
    bubble_sort(array,size);
    insertion_sort(array, size);
    reverse(array,size);
    calulate_frequency(array, size,1);
  return 0;
}
