#include <stdio.h>
#include "vector.h"

int add_two(int x) {
    return x + 2;
}

int main(void) {
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
    vec_map(vec, add_two);
    vec_pretty_print(vec);
    vec_free(vec);
}
