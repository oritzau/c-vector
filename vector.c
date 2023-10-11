#include <stdio.h>
#include <memory.h>
#include <stdlib.h>
#include "vector.h"

Vector* vec_new() {
    Vector* vec = (Vector *)malloc(sizeof(Vector));
    vec->len = 0;
    vec->capacity = DEFAULT_CAPACITY;
    vec->inner = (T*)malloc(sizeof(T) * vec->capacity);
    return vec;
}

Vector* vec_with_capacity(unsigned capacity) {
    Vector* vec = (Vector*)malloc(sizeof(Vector));
    vec->len = 0;
    vec->capacity = capacity;
    vec->inner = (T*)malloc(sizeof(T) * vec->capacity);
    return vec;
}

void vec_free(Vector * vec) {
    free(vec->inner);
    free(vec);
}

void vec_push(Vector * vec, T value) {
    if (vec->len == vec->capacity) {
        T * tmp = (T *)malloc(sizeof(T) * (unsigned long)vec->capacity * 2);
        memcpy(tmp, vec->inner, sizeof(T) * (unsigned long)vec->capacity);
        free(vec->inner);
        vec->inner = tmp;
        vec->capacity *= 2;
    }
    vec->inner[vec->len] = value;
    vec->len++;
}

void vec_sort(Vector * vec) {
    if (vec->len == 0) return;
    // todo: insertion sort?
    for (long int i = 1; i < vec->len; i++) {
        T curr = vec->inner[i];
        long int compare_index = i - 1;
        while (compare_index >= 0 && curr < vec->inner[compare_index]) {
            // swapping curr and value at compare_index
            vec->inner[compare_index + 1] = vec->inner[compare_index];
            compare_index--;
        }
        vec->inner[compare_index + 1] = curr;
    }
}

void vec_merge_sort(Vector * vec) {
    
}


void vec_pretty_print(Vector * vec) {
    printf("[\n");
    for (unsigned i = 0; i < vec->len; i++) {
        printf("\t%d\n", vec->inner[i]);
    }
    printf("]\n");
}

void vec_debug(Vector * vec) {
    printf("Vec { len: %u, capacity: %u }\n", vec->len, vec->capacity);
    vec_pretty_print(vec);
}

void vec_map(Vector * vec, T func(T)) {
    for (unsigned i = 0; i < vec->len; i++) {
        vec->inner[i] = func(vec->inner[i]);
    }
}

