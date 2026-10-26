/* Dispatches to the active backend (primary, else secondary); returns 0xE0810BF8 when neither is enabled. */
#include "common.h"

extern "C" {

extern s32 g_nnCecdHandle;
extern s32 DAT_0047384c;

extern u32 FUN_003592f4(u32 a, u32 b, u32 c, u32 *d);
extern u32 FUN_0035976c(u32 a, u32 b, u32 c, u32 *d);

u32 cecdDispatchBackendCall(u32 a, u32 b, u32 c, u32 *d)
{
    if (DAT_0047384c != 0) {
        return FUN_0035976c(a, b, c, d);
    }
    if (g_nnCecdHandle != 0) {
        return FUN_003592f4(a, b, c, d);
    }
    return 0xE0810BF8;
}

}
