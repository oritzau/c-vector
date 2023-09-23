#include <stdio.h>
#include "vector.h"

int main(void) {
    Vector * vec = vec_new();
    vec_push(vec, 4.0);
    vec_pretty_print(vec);
    vec_free(vec);
}
