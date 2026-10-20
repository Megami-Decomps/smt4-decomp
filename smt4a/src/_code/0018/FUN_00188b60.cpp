#include "common.h"

extern "C" {

void FUN_001af264(void *object);

typedef struct Pair {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 first;
    /* 0x08 */ u32 second;
} Pair;

/* Runs FUN_001af264 on the object, then clears the two words at 4 and 8. */
void FUN_00188b60(Pair *object)
{
    FUN_001af264(object);
    object->first = 0;
    object->second = 0;
}

} /* extern "C" */
