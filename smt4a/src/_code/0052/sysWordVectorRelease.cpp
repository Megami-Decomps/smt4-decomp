#include "common.h"

extern "C" {

typedef struct IntVector {
    /* 0x00 */ s32 *begin;
    /* 0x04 */ s32 *end;
    /* 0x08 */ s32 *capacityEnd;
} IntVector;

void asdDeallocateArrayStorage(s32 *storage, s32 capacity, s32 arg);

/* Releases the vector's storage; returns the vector. */
IntVector *sysWordVectorRelease(IntVector *vec)
{
    s32 *begin = vec->begin;
    asdDeallocateArrayStorage(begin, vec->capacityEnd - begin, 0);
    return vec;
}

} /* extern "C" */
