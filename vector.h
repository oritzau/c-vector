#ifndef VECTOR_H
#define VECTOR_H

#include "vector.c"

Vector * vec_new();

Vector * vec_with_capacity(unsigned capacity);

void vec_free(Vector* vec);

void vec_push(Vector* vec, T value);

void vec_pretty_print(Vector* vec);

void vec_debug(Vector* vec);

void vec_sort(Vector* vec);

#endif
