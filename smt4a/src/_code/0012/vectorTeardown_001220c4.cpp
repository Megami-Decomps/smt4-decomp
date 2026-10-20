#include "common.h"

extern "C" {

void FUN_0030fdc0(void *vector, void *begin, void *end);
void asdOperatorDeleteArray(void *memory);

typedef struct Vector {
    /* 0x00 */ void *begin;
    /* 0x04 */ void *end;
} Vector;

/* Vector teardown: destroys the elements in [begin, end) through FUN_0030fdc0, frees the storage and returns the vector. */
Vector *vectorTeardown_001220c4(Vector *vector)
{
    FUN_0030fdc0(vector, vector->begin, vector->end);
    asdOperatorDeleteArray(vector->begin);
    return vector;
}

} /* extern "C" */
