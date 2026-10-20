#include "common.h"

extern "C" {

typedef struct Pair {
    /* 0x00 */ u32 first;
    /* 0x04 */ u32 second;
} Pair;

/* Clears both words. */
void FUN_0015e8c0(Pair *object)
{
    object->first = 0;
    object->second = 0;
}

} /* extern "C" */
