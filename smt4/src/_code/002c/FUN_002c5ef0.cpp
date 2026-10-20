/* NON_MATCHING: the bit test is `and #8; lsrs #3` in retail (built: `tst #8`), the loop keeps two more values in registers (r7/r8), and the final division is a tail call into the function that follows (a nop in retail) */
/* Percentage of the active entries (of the 400) that are marked in their slot. */
#include "common.h"

extern "C" {

struct Entry002c5ef0 {
    /* 0x00 */ u8 unk00[7];
    /* 0x07 */ u8 flags; /* 0x80: active */
};

struct Slot002c5ef0 {
    /* 0x00 */ u8 unk0Bits : 3;
    /* 0x00 */ u8 marked : 1;
    /* 0x00 */ u8 unk0Rest : 4;
    /* 0x01 */ u8 unk01[3];
};

struct Table002c5ef0 {
    /* 0x000 */ u8 unk000[0x200];
    /* 0x200 */ Slot002c5ef0 slots[400];
};

Entry002c5ef0 *dataTable1bOr1cGetRecord(u32 index);
Table002c5ef0 *gameGetFlagBlock(void);

s32 FUN_002c5ef0(void)
{
    s32 active = 0;
    s32 marked = 0;
    s32 i;

    for (i = 0; i < 400; i++) {
        Entry002c5ef0 *entry = dataTable1bOr1cGetRecord((u16)i);

        if (entry != NULL && (entry->flags & 0x80)) {
            u16 index = i;

            active++;
            if (gameGetFlagBlock()->slots[index].marked) {
                marked++;
            }
        }
    }
    return marked * 100 / active;
}

}
