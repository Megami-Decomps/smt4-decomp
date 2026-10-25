/* Script command: sets the bit the script argument names of the battle state's flag word. Returns 1. */
#include "common.h"

static __inline void battleCommandFlagSet(u32 *flags, u32 bit)
{
    *flags |= 1u << bit;
}

extern "C" {

struct BattleMain0035f9cc {
    /* 0x0000 */ u8 unk0000[0x4cc8];
    /* 0x4cc8 */ u32 flags;
};

u32 scrGetArg(u32 index);
BattleMain0035f9cc *btlGetMainState(void);

u32 scrCommSetBattleCommandFlag(void)
{
    u32 bit = scrGetArg(0);
    u32 *flags = &btlGetMainState()->flags;

    battleCommandFlagSet(flags, bit);
    return 1;
}

}
