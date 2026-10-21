/* NON_MATCHING: compiler calls the 64-bit shift helper instead of retail split-register variable shifts. */
#include "common.h"

namespace { struct Battle { u8 padding[0x49d0]; u64 flags; }; }

extern "C" {
u32 scrGetArg(u32 index);
Battle *btlGetMainState(void);
u32 scrBattleSetFlag(u32 argument)
{
    u32 bit = scrGetArg(argument);
    Battle *battle = btlGetMainState();
    battle->flags |= (1ULL << (bit & 255));
    return 1;
}
}
