/* NON_MATCHING: register choice only: retail walks the elements in r1 (end in r2) and keeps the begin pointer in r0; the build walks r0 and reloads it from r2 */
#include "common.h"

extern "C" {

typedef struct PtrVector002f2910 {
    /* 0x00 */ s32 *begin;
    /* 0x04 */ s32 *end;
} PtrVector002f2910;

void asdOperatorDeleteArray(s32 *block);

/* Releases the vector's storage; the element destructors (trivial for plain words) are walked first. */
PtrVector002f2910 *ptrVectorFree(PtrVector002f2910 *vector)
{
    s32 *element;

    for (element = vector->begin; element != vector->end; element++) {
    }
    asdOperatorDeleteArray(vector->begin);
    return vector;
}

} /* extern "C" */
