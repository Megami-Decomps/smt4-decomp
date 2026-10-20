#include "common.h"

extern "C" {

void FUN_002ee784(void *holder, u32 data);

typedef struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 data;
} Holder;

/* Calls FUN_002ee784 with the holder and its pointer at 4. */
void FUN_002ee80e(Holder *holder)
{
    FUN_002ee784(holder, holder->data);
}

} /* extern "C" */
