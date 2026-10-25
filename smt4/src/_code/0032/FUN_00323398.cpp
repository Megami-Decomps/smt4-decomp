#include "battle/BtlMainAccess.h"
#include "common.h"


extern "C" {


static __inline u32 btlFlagsSet(u32 *flags, u32 mask)
{
    *flags |= mask;
    return 1;
}

/* Script command: sets bit 17 of the battle's flag word at 0x44A0. */
u32 FUN_00323398(void)
{
    return btlFlagsSet(&btlGetMainState()->battleFlags, 0x20000);
}

} /* extern "C" */
