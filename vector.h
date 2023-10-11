#ifndef VECTOR_H
#define VECTOR_H

#define T char

typedef struct {
    T * inner;
    unsigned len;
    unsigned capacity;
} Vector;

#define DEFAULT_CAPACITY 4

Vector * vec_new();

Vector * vec_with_capacity(unsigned capacity);

void vec_free(Vector* vec);

void vec_push(Vector* vec, T value);

void vec_pretty_print(Vector* vec);

void vec_debug(Vector* vec);

void vec_sort(Vector* vec);

void vec_map(Vector* vec, T func(T));

#endif
