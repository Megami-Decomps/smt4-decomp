#include "common.h"

extern "C" {

typedef struct Pair {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 first;
    /* 0x08 */ u32 second;
} Pair;

/* Sets the first word to `first` and the second to -1. */
void pairSetFirstResetSecond(Pair *object, u32 first)
{
    object->first = first;
    object->second = 0xFFFFFFFF;
}

} /* extern "C" */
