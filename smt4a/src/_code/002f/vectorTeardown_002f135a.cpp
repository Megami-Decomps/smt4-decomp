#include "common.h"

extern "C" {

void vectorDestroyRangeStride8(void *vector, void *begin, void *end);
void asdOperatorDeleteArray(void *memory);

typedef struct Vector {
    /* 0x00 */ void *begin;
    /* 0x04 */ void *end;
} Vector;

/* Vector teardown: destroys the elements in [begin, end) through vectorDestroyRangeStride8, frees the storage and returns the vector. */
Vector *vectorTeardown_002f135a(Vector *vector)
{
    vectorDestroyRangeStride8(vector, vector->begin, vector->end);
    asdOperatorDeleteArray(vector->begin);
    return vector;
}

} /* extern "C" */
