/* Dispatches to the active backend (primary, else secondary); returns 0xE0810BF8 when neither is enabled. */
#include "common.h"

extern "C" {

extern s32 DAT_00473848;
extern s32 DAT_0047384c;

extern u32 FUN_0035937c(u32 arg);
extern u32 FUN_003597f4(void);

u32 FUN_003594f0(u32 arg)
{
    if (DAT_0047384c != 0) {
        return FUN_003597f4();
    }
    if (DAT_00473848 != 0) {
        return FUN_0035937c(arg);
    }
    return 0xE0810BF8;
}

}
