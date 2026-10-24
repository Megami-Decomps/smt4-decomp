/* NON_MATCHING: retail adds the group offset (+0x800) separately and uses a register-offset ldrb with writeback; built folds the constant into the load and orders the mask setup differently */
#include "common.h"

struct FlagBlock {
    u8 unk0000[0x800];     // 0x0000
    u8 groups[100][4];     // 0x0800 (per group: 32 flag bits)
    u8 unk0990[0x1960];    // 0x0990
    u8 touched[16];        // 0x22F0
};

extern "C" {

FlagBlock *FUN_0023d2ec(void);

/* Sets or clears flag `bit` of group `group` (< 100); setting also marks the group in the touched bitmap. */
void FUN_00342078(u32 group, u32 bit, s32 set)
{
    if (group >= 110) {
        return;
    }
    if ((s32)group >= 100) {
        return;
    }
    u8 *byte = &FUN_0023d2ec()->groups[group][0] + (bit >> 3);
    u32 mask = (u8)(1 << (bit & 7));
    u32 value;

    if (set != 0) {
        *byte = mask | *byte;
        byte = &FUN_0023d2ec()->touched[0] + (group >> 3);
        value = (u8)(1 << (group & 7)) | *byte;
    } else {
        value = *byte & ~mask;
    }
    *byte = value;
}

} /* extern "C" */
