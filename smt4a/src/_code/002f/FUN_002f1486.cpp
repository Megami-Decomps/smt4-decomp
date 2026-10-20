/* NON_MATCHING: only the loop compare's operand order differs (retail `cmp r1, r2` with the cursor first; built `cmp r2, r1`). */
#include "common.h"

extern "C" {

typedef struct PtrVector {
    /* 0x00 */ int **begin;
    /* 0x04 */ int **end;
} PtrVector;

void asdOperatorDeleteArray(void *block);

/* Destroys the vector's elements (trivial, so only the walk remains) and frees its storage; returns the vector. */
PtrVector *FUN_002f1486(PtrVector *vec)
{
    int **begin = vec->begin;
    int **it;

    for (it = begin; vec->end != it; it++) {
    }
    asdOperatorDeleteArray(begin);
    return vec;
}

} /* extern "C" */
