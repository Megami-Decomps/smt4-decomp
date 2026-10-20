#include "common.h"

extern "C" {

typedef struct Block5c4bb4 {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
} Block5c4bb4;
extern Block5c4bb4 DAT_005c4bb4;

void FUN_001b4a90(void *dest, u32 arg, u32 table);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u32 flags;
} Holder;

/* When bit 1 of `flags` is set, calls FUN_001b4a90 with the destination, `arg` and the word at 0x8 of the global at 0x5C4BB4. */
void FUN_001b061c(Holder *holder, void *dest, u32 arg)
{
    if ((holder->flags & 2) != 0) {
        FUN_001b4a90(dest, arg, DAT_005c4bb4.unk08);
        return;
    }
}

} /* extern "C" */
