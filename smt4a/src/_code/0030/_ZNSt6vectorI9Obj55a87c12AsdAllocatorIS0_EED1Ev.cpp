#include "common.h"

extern "C" {

void destroyRangeElem40(void *vector, void *begin, void *end);
void asdOperatorDeleteArray(void *memory);

typedef struct Vector {
    /* 0x00 */ void *begin;
    /* 0x04 */ void *end;
} Vector;

/* Vector teardown: destroys the elements in [begin, end) through destroyRangeElem40, frees the storage and returns the vector. */
Vector *_ZNSt6vectorI9Obj55a87c12AsdAllocatorIS0_EED1Ev(Vector *vector)
{
    destroyRangeElem40(vector, vector->begin, vector->end);
    asdOperatorDeleteArray(vector->begin);
    return vector;
}

} /* extern "C" */
