#include "common.h"

extern "C" {

typedef struct Pair {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 first;
    /* 0x08 */ u32 second;
} Pair;

/* Sets the first word to -1 and the second to `second`. */
void pairSetSecondResetFirst(Pair *object, u32 second)
{
    object->first = 0xFFFFFFFF;
    object->second = second;
}

} /* extern "C" */
