#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 first;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ u32 second;
    /* 0x10 */ u8 unk10[0x34];
    /* 0x44 */ u8 flag;
} Holder;

/* Clears the words at 0xC and 4 and the byte at 0x44. */
void FUN_002f5d1e(Holder *object)
{
    object->second = 0;
    object->first = 0;
    object->flag = 0;
}

} /* extern "C" */
