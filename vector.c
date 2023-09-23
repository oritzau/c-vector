#include <stdio.h>
#include <memory.h>
#include <stdlib.h>

#define T int
#define DEFAULT_CAPACITY 4

typedef struct {
    T * inner;
    unsigned len;
    unsigned capacity;
} Vector;

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
    // todo: merge sort?
    unsigned start = 0;
    unsigned end = vec->len;
    unsigned mid = (unsigned) start / end;
}


void vec_pretty_print(Vector * vec) {
    printf("[\n");
    for (unsigned i = 0; i < vec->len; i++) {
        printf("\t%f\n", vec->inner[i]);
    }
    printf("]\n");
}

void vec_debug(Vector * vec) {
    printf("Vec { len: %u, capacity: %u }\n", vec->len, vec->capacity);
    vec_pretty_print(vec);
}
