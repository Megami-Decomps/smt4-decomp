#include "common.h"

extern "C" {

void FUN_0030fd28(void *vector, void *begin, void *end);
void FUN_002e6e14(void *memory);

typedef struct Vector {
    /* 0x00 */ void *begin;
    /* 0x04 */ void *end;
} Vector;

/* Vector teardown: destroys the elements in [begin, end) through FUN_0030fd28, frees the storage and returns the vector. */
Vector *vectorTeardown_0030d03c(Vector *vector)
{
    FUN_0030fd28(vector, vector->begin, vector->end);
    FUN_002e6e14(vector->begin);
    return vector;
}

} /* extern "C" */
