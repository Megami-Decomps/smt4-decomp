#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x000 */ u8 unk000[0x524];
    /* 0x524 */ u32 first;
    /* 0x528 */ u32 second;
} Holder;

/* Clears the two words at 0x524 and 0x528. */
void FUN_00145eb8(Holder *object)
{
    object->first = 0;
    object->second = 0;
}

} /* extern "C" */
