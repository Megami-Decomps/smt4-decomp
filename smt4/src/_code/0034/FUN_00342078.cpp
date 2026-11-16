#include "common.h"

struct FlagBlock {
    u8 unk0000[0x800];     // 0x0000
    u8 groups[100][4];     // 0x0800 (per group: 32 flag bits)
    u8 unk0990[0x1960];    // 0x0990
    u8 touched[16];        // 0x22F0
};

extern "C" {

FlagBlock *FUN_0023d2ec(void);

/* Sets or clears bit `bit` of a byte-packed bit array. */
static __inline void bitArrayWrite(u8 *bits, u32 bit, s32 set)
{
    u8 *byte = &bits[bit >> 3];
    u8 mask = 1 << (bit & 7);
    if (set != 0) {
        *byte |= mask;
    } else {
        *byte &= ~mask;
    }
}

/* Sets or clears flag `bit` of group `group` (< 100); setting also marks the group in the touched bitmap. */
void FUN_00342078(u32 group, u32 bit, s32 set)
{
    if (group >= 110) {
        return;
    }
    if ((s32)group >= 100) {
        return;
    }
    bitArrayWrite(FUN_0023d2ec()->groups[group], bit, set);
    if (set != 0) {
        bitArrayWrite(FUN_0023d2ec()->touched, group, 1);
    }
}

} /* extern "C" */
