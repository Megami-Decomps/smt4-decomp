/* Dispatches to the active backend (primary, else secondary); returns 0xE0810BF8 when neither is enabled. */
#include "common.h"

extern "C" {

extern s32 g_nnCecdHandle;
extern s32 DAT_005c1fc8;

extern u32 FUN_00430198(u32 a, u32 b, u32 c, u32 *d);
extern u32 FUN_0043064c(u32 a, u32 b, u32 c, u32 *d);

u32 FUN_00430358(u32 a, u32 b, u32 c, u32 *d)
{
    if (DAT_005c1fc8 != 0) {
        return FUN_0043064c(a, b, c, d);
    }
    if (g_nnCecdHandle != 0) {
        return FUN_00430198(a, b, c, d);
    }
    return 0xE0810BF8;
}

}
