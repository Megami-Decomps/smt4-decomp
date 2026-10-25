/* NON_MATCHING: the group base now matches (group offset added separately, byte via writeback ldrb); retail loads the flag byte before the set/clear branch and shares one store, and recomputes the touched mask after its load. */
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
    u8 *bank = FUN_0023d2ec()->groups[group];
    u8 mask = 1 << (bit & 7);
    u8 *flag = &bank[bit >> 3];

    if (set != 0) {
        *flag |= mask;
        u8 *touched = &FUN_0023d2ec()->touched[group >> 3];
        *touched |= 1 << (group & 7);
    } else {
        *flag &= ~mask;
    }
}

} /* extern "C" */
