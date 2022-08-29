//
// Created by Josean Camarena on 07/07/22.
// Implemented by: $STUDENT$
//

#include "pointers.h"

int bubble_sort(int *collection, int count)
{
    printf("Bubble Sort\n");
    int aux;
    int changes =0;
    for (int current = 0; current < count - 1; ++current) {
        for (int next = 0; next < count - current - 1; ++next) {
            if (collection[next] > collection[next + 1]){
                aux = collection[next];
                collection[next] = collection[next + 1];
                collection[next + 1] = aux;
                ++changes;
            }
        }
    }
    for (int i = 0; i <count ; ++i) {
        printf(" [%d]",collection[i]);
    }
    printf("\nCambios necesarios: %d",changes);
  return changes;
}

void insertion_sort(int *collection, int count)
{
    printf("\nInsertion Sort\n");
    int cambios =0;
    for (int i = 1; i<count; i++){
        int key = collection[i];
        int aux = i -1;
        while (key < collection[aux] && aux >= 0){
            collection[aux + 1] = collection[aux];
            aux--;
            cambios ++;
        }
        collection[aux + 1] = key;
    }
    for (int i = 0; i <count ; ++i) {
        printf("[%d] ",collection[i]);
    }
    printf("\nCambios necesarios: %d",cambios);
}

void reverse(int *collection, int count)
{
    printf("\nReverse\n");
    for (int i = count -1; i > 0 ; --i) {
        printf("[%d] ",*(collection+i));
    }
}

int calulate_frequency(int *collection, int count, int target)
{
    printf("\nCalculate fecuency\n");
    int frequency = 0;
    for (int i = 0; i < count; i++){
        if (*(collection+i)==target){
            frequency++;
        }
    }
    printf("%d",frequency);
  return frequency;
}
