#include "common.h"

extern "C" {

void strAssign(u32 dest, u32 source, s32 length, u32 flags);

typedef struct Holder {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 string;
} Holder;

/* Assigns `count` 16-bit characters (2 * count bytes) of `source` to the held string. */
void FUN_002e7690(Holder *object, u32 source, s32 count)
{
    strAssign(object->string, source, count << 1, 0xFFFFFFFF);
}

} /* extern "C" */
