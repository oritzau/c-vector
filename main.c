#include <stdio.h>
#include "vector.h"

int main(void) {
    Vector * vec = vec_new();
    vec_push(vec, 5);
    vec_push(vec, 7);
    vec_push(vec, -3);
    vec_push(vec, 9);
    vec_push(vec, 500);
    vec_push(vec, -20);
    vec_pretty_print(vec);
    vec_sort(vec);
    vec_pretty_print(vec);
    vec_free(vec);
}
