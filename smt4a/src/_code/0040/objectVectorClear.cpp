#include "shard/Shard0040.h"

extern "C" {

typedef struct ObjectVector {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Object **begin;
    /* 0x08 */ Object **end;
} ObjectVector;

/* Releases every object in the vector (through its vtable) and empties it. */
void objectVectorClear(ObjectVector *vec)
{
    Object **p;
    Object **end = vec->end;
    u32 last;

    for (p = vec->begin; p != end; p++) {
        if (*p != NULL) {
            (*p)->vtbl->release(*p);
        }
    }
    last = (u32)vec->end;
    if (vec->begin != vec->end) {
        vec->end = (Object **)(last - ((last - (u32)vec->begin) & ~3u));
    }
}

} /* extern "C" */
