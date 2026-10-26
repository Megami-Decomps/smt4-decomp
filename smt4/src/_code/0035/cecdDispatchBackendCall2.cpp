/* Dispatches to the active backend (primary, else secondary); returns 0xE0810BF8 when neither is enabled. */
#include "common.h"

extern "C" {

extern s32 g_nnCecdHandle;
extern s32 DAT_0047384c;

extern u32 FUN_00359410(u32 a, u32 b, u32 c, u32 *d);
extern u32 FUN_00359888(u32 a, u32 b, u32 c, u32 *d);

u32 cecdDispatchBackendCall2(u32 a, u32 b, u32 c, u32 *d)
{
    if (DAT_0047384c != 0) {
        return FUN_00359888(a, b, c, d);
    }
    if (g_nnCecdHandle != 0) {
        return FUN_00359410(a, b, c, d);
    }
    return 0xE0810BF8;
}

}
