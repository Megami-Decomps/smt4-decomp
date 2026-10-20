#include "shard/Shard0034.h"

extern "C" {

extern s32 DAT_0057f6dc;
extern u32 FUN_00164af0(u32 button);
extern u32 FUN_001656a0(u32 button);
extern u32 FUN_0018719c(s32 index);
extern void FUN_003fd63c(s32 index, u32 value, s32 flag);

/* Moves the 0x1500-entry flag browser cursor with the D-pad / shoulder buttons and toggles the flag under it. */
u32 flagBrowserStep(void)
{
    u32 result;
    s32 page;
    s32 row;
    s32 col;

    if (FUN_00164af0(3) != 0 || FUN_00164af0(0xC) != 0) {
        DAT_0057f6dc += 1;
    }
    if (FUN_00164af0(6) != 0 || FUN_00164af0(0xF) != 0) {
        DAT_0057f6dc += 0x10;
    }
    if (FUN_00164af0(4) != 0 || FUN_00164af0(0xD) != 0) {
        DAT_0057f6dc -= 1;
    }
    if (FUN_00164af0(5) != 0 || FUN_00164af0(0xE) != 0) {
        DAT_0057f6dc -= 0x10;
    }
    if (FUN_00164af0(8) != 0) {
        DAT_0057f6dc -= 0x100;
    }
    if (FUN_00164af0(7) != 0) {
        DAT_0057f6dc += 0x100;
    }
    if (DAT_0057f6dc >= 0x1500) {
        DAT_0057f6dc -= 0x1500;
    }
    if (DAT_0057f6dc < 0) {
        DAT_0057f6dc += 0x1500;
    }
    if (FUN_001656a0(0) != 0) {
        FUN_003fd63c(DAT_0057f6dc, FUN_0018719c(DAT_0057f6dc) ^ 1, 1);
    }
    if (FUN_001656a0(1) != 0) {
        result = 1;
    } else {
        page = DAT_0057f6dc / 0x100;
        for (row = 0; row < 0x10; row++) {
            for (col = 0; col < 0x10; col++) {
                FUN_0018719c(col + row * 0x10 + page * 0x100);
            }
        }
        result = 0;
    }
    return result;
}

} /* extern "C" */
