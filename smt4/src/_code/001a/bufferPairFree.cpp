#include "common.h"

extern "C" {

int asdMemFree(int ptr);

typedef struct Buffers {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ int data;
    /* 0x28 */ u8 unk28[4];
    /* 0x2C */ u32 flags;
    /* 0x30 */ u8 unk30[0x14];
    /* 0x44 */ int extra;
} Buffers;

/* Frees the data buffer (unless flag 0x10 marks it as borrowed) and the extra buffer. */
void bufferPairFree(Buffers *buffers)
{
    if (buffers->data != 0 && (buffers->flags & 0x10) == 0) {
        asdMemFree(buffers->data);
        buffers->data = 0;
    }
    if (buffers->extra != 0) {
        asdMemFree(buffers->extra);
        buffers->extra = 0;
    }
}

} /* extern "C" */
