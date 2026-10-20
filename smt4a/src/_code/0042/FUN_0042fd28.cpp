/* Dispatches to the active backend (primary, else secondary); returns 0xE0810BF8 when neither is enabled. */
#include "common.h"

extern "C" {

extern s32 DAT_005c1fc4;
extern s32 DAT_005c1fc8;

extern u32 FUN_0042ffd8(u32 arg);
extern u32 FUN_0043048c(void);

u32 FUN_0042fd28(u32 arg)
{
    if (DAT_005c1fc8 != 0) {
        return FUN_0043048c();
    }
    if (DAT_005c1fc4 != 0) {
        return FUN_0042ffd8(arg);
    }
    return 0xE0810BF8;
}

}
