#include "common.h"

extern "C" {

void strAssign(u32 dest, u32 source, u32 length, u32 flags);

typedef struct Holder {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 string;
} Holder;

/* Assigns `length` characters of `source` to the held string. */
void bufferAssignBytes(Holder *object, u32 source, u32 length)
{
    strAssign(object->string, source, length, 0xFFFFFFFF);
}

} /* extern "C" */
