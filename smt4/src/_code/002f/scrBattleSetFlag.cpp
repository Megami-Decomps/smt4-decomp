#include "battle/BtlMainAccess.h"
#include "common.h"

namespace { struct Battle { u8 padding[0x49d0]; u64 flags; }; }

extern "C" {
u32 scrGetArg(u32 index);
u32 scrBattleSetFlag(void)
{
    u32 bit = scrGetArg(0);
    Battle *battle = reinterpret_cast<Battle *>(btlGetMainState());
    battle->flags |= 1 << bit;
    return 1;
}
}
