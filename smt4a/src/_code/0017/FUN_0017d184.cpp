/* NON_MATCHING: retail does not shrink-wrap: it pushes first, tests the pointer with `movs r4, r0; beq` and keeps both field tests as a branch pair; built returns early with `cmp; bxeq lr` before the push. */
#include "common.h"

extern "C" {

typedef struct Buffer {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 unk04;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ void *data;
    /* 0x1C */ u8 unk1C[4];
    /* 0x20 */ s32 count;
    /* 0x24 */ u32 unk24;
    /* 0x28 */ u32 unk28;
    /* 0x2C */ u8 unk2C[4];
    /* 0x30 */ u32 unk30;
    /* 0x34 */ u32 unk34;
} Buffer;                    /* the data array has 0x1C-byte elements */

int sysMemClear(void *block, s32 size);

/* Clears the buffer's element array and resets its bookkeeping, if it has any contents. */
void FUN_0017d184(Buffer *buffer)
{
    if (buffer != NULL) {
        if (buffer->unk04 != 0 || buffer->data != NULL) {
            sysMemClear(buffer->data, buffer->count * 0x1C);
            buffer->unk0C = 0;
            buffer->unk10 = 0;
            buffer->count = 0;
            buffer->unk28 = 0;
            buffer->unk14 = 0;
            buffer->unk24 = 0;
            buffer->unk34 = 0;
            buffer->unk30 = 0;
        }
    }
}

} /* extern "C" */
