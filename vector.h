#ifdef T
#undef T
#endif
#define T int

typedef struct {} Vector;

Vector * vec_new();

Vector * vec_with_capacity(unsigned capacity);

void vec_free(Vector* vec);

void vec_push(Vector* vec, T value);

void vec_pretty_print(Vector* vec);
