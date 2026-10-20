#include "common.h"

extern "C" {

typedef struct FlagEntry {
    /* 0x0 */ u8 bits;
    /* 0x1 */ u8 unk1[3];
} FlagEntry;

typedef struct FlagBlock {
    /* 0x000 */ u8 unk000[0x2A0];
    /* 0x2A0 */ FlagEntry entries[1];  /* one per id below 0x15E */
} FlagBlock;

FlagBlock *gameFlagBlockGet(void);
u32 FUN_001bd100(u32 id);

static u32 bit3(u8 value)
{
    return (value & 8) >> 3;
}

/* Counts the ids below 400 whose FUN_001bd100 mask equals `mask` and that have bit 3 of their flag entry set. */
s32 FUN_0041862c(u32 mask)
{
    s32 count = 0;
    u16 id = 0;

    do {
        if ((FUN_001bd100(id) & ~mask) == 0) {
            if ((mask & ~FUN_001bd100(id)) == 0 && id < 0x15E && bit3(gameFlagBlockGet()->entries[id].bits)) {
                count++;
            }
        }
        id++;
    } while (id < 400);
    return count;
}

} /* extern "C" */
