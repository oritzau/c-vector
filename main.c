#include <stdio.h>
#include "vector.h"

void sort(int * array, unsigned length) {
    // todo: insertion sort?
    for (unsigned i = 1; i < length; i++) {
        int curr = array[i];
        unsigned compare_index = i - 1;
        printf("curr: %d compare_index: %u\n", curr, compare_index);
        while (compare_index >= 0 && curr > array[compare_index]) {
            printf("checkpoint 1\n");
            // swapping curr and value at compare_index
            array[compare_index + 1]= array[compare_index];
            printf("checkpoint 2\n");
            compare_index--;
            printf("checkpoint 3, compare index: %d\n", compare_index);
        }
        printf("Checkpoint 4\n");
        array[compare_index + 1] = curr;
        printf("Checkpoint 5\n");
    }
}
int main(void) {
    int x[] = {3, 7, 8, 3, 2};
    sort(x, 5);
    for (int i = 0; i < 5; i++) {
        printf("%d, ", x[i]);
    }
    printf("\n");
    /*
    Vector * vec = vec_new();
    vec_push(vec, 5);
    vec_push(vec, 7);
    vec_push(vec, -3);
    vec_push(vec, 9);
    vec_push(vec, 500);
    vec_push(vec, -20);
    vec_debug(vec);
    vec_sort(vec);
    vec_pretty_print(vec);
    vec_free(vec);
    */
}
