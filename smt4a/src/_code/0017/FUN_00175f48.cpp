#include "common.h"

extern "C" {

typedef struct Pair {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 first;
    /* 0x08 */ u32 second;
} Pair;

/* Stores the two values at 4 and 8. */
void FUN_00175f48(Pair *object, u32 first, u32 second)
{
    object->first = first;
    object->second = second;
}

} /* extern "C" */
