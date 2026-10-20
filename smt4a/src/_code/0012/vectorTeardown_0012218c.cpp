#include "common.h"

extern "C" {

void destroyRangeElem12(void *vector, void *begin, void *end);
void asdOperatorDeleteArray(void *memory);

typedef struct Vector {
    /* 0x00 */ void *begin;
    /* 0x04 */ void *end;
} Vector;

/* Vector teardown: destroys the elements in [begin, end) through destroyRangeElem12, frees the storage and returns the vector. */
Vector *vectorTeardown_0012218c(Vector *vector)
{
    destroyRangeElem12(vector, vector->begin, vector->end);
    asdOperatorDeleteArray(vector->begin);
    return vector;
}

} /* extern "C" */
