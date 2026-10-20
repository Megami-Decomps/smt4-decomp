#include "common.h"

extern "C" {

void inlineBufferFreeData(void *holder, u32 data);

typedef struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 data;
} Holder;

/* Calls inlineBufferFreeData with the holder and its pointer at 4. */
void inlineBufferFree(Holder *holder)
{
    inlineBufferFreeData(holder, holder->data);
}

} /* extern "C" */
