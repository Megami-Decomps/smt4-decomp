#include "battle/BtlMainAccess.h"
#include "common.h"

struct BattleFlags {
    /* 0x0000 */ u8 unk0000[0x44a0];
    /* 0x44A0 */ u32 flags;
};

extern "C" {


static __inline u32 btlFlagsSet(u32 *flags, u32 mask)
{
    *flags |= mask;
    return 1;
}

/* Script command: sets bit 17 of the battle's flag word at 0x44A0. */
u32 FUN_00323398(void)
{
    return btlFlagsSet(&reinterpret_cast<BattleFlags *>(btlGetMainState())->flags, 0x20000);
}

} /* extern "C" */
