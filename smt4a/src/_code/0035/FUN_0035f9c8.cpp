/* NON_MATCHING: the flag word address is computed with two adds from the state in retail, and its load/or/store are scheduled differently */
/* Script command: sets the bit the script argument names of the battle state's flag word. Returns 1. */
#include "common.h"

extern "C" {

struct BattleMain0035f9cc {
    /* 0x0000 */ u8 unk0000[0x4cc8];
    /* 0x4cc8 */ u32 flags;
};

u32 scrGetArg(u32 index);
BattleMain0035f9cc *btlGetMainState(void);

u32 FUN_0035f9c8(u32 index)
{
    u32 bit = scrGetArg(index);
    u32 *flags = &btlGetMainState()->flags;

    *flags |= 1 << bit;
    return 1;
}

}
