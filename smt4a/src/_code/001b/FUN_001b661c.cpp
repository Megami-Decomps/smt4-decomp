#include "common.h"

extern "C" {

typedef struct Block5c4bb4 {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
} Block5c4bb4;
extern Block5c4bb4 DAT_005c4bb4;

void __aeabi_memset4(void *dest, u32 arg, u32 table);
void rt_memclr(void *dest, u32 arg);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u32 flags;
} Holder;

/* Copies by the mode in `flags`: bit 0 uses rt_memclr, bit 1 uses __aeabi_memset4 with the word at 0x4 of the global at 0x5C4BB4. */
void FUN_001b661c(Holder *holder, void *dest, u32 arg)
{
    if ((holder->flags & 1) != 0) {
        rt_memclr(dest, arg);
        return;
    }
    if ((holder->flags & 2) != 0) {
        __aeabi_memset4(dest, arg, DAT_005c4bb4.unk04);
        return;
    }
}

} /* extern "C" */
