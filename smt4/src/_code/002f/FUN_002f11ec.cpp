#include "battle/BtlMainAccess.h"
#include "common.h"
#include "script/ScriptArgs.h"


extern "C" {


/* Script command: reports whether the battle state's flag 0x40000 is clear. */
u32 FUN_002f11ec(void)
{
    if (btlGetMainState()->encounter.flags & 0x40000) {
        scrSetResult(0);
    } else {
        scrSetResult(1);
    }
    return 1;
}

} /* extern "C" */
