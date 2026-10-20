#include "common.h"

extern "C" {

void rt_memcpy(u8 *dest, u32 source, s32 size);

typedef struct Holder {
    /* 0x0000 */ u8 unk0000[0x3DA0];
    /* 0x3DA0 */ u8 buffer[1];
} Holder;

/* Copies `count` 16-bit characters (2 * count bytes) into the buffer at 0x3DA0. */
void FUN_002fb3c8(Holder *object, u32 source, s32 count)
{
    rt_memcpy(object->buffer, source, count << 1);
}

} /* extern "C" */
