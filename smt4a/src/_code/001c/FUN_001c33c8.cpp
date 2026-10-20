#include "common.h"

extern "C" {

typedef struct Pair {
    /* 0x00 */ u8 unk00[0x88];
    /* 0x88 */ u32 first;
    /* 0x8C */ u32 second;
} Pair;

/* Stores the two words at 0x88 and 0x8C. */
void FUN_001c33c8(Pair *object, u32 first, u32 second)
{
    object->first = first;
    object->second = second;
}

} /* extern "C" */
