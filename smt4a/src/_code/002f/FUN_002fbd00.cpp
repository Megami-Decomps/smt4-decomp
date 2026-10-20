#include "common.h"

extern "C" {

void wideBufferAppend(u32 object, u32 value);

typedef struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 value;
} Holder;

/* Passes `object` and the word at 4 of `holder` to wideBufferAppend. */
void FUN_002fbd00(u32 object, Holder *holder)
{
    wideBufferAppend(object, holder->value);
}

} /* extern "C" */
