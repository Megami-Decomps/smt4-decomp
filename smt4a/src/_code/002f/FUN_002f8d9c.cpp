#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x000 */ u8 unk000[0x158];
    /* 0x158 */ u32 first;
    /* 0x15C */ u32 second;
} Holder;

/* Clears the words at 0x158 and 0x15C. */
void FUN_002f8d9c(Holder *object)
{
    object->first = 0;
    object->second = 0;
}

} /* extern "C" */
