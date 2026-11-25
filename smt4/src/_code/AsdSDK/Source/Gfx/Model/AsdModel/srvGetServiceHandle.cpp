#include "common.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"
#include "nn/srv/SessionIpc.h"

extern "C" {

extern s32 g_srvInitializeCount;

/* Forwards the call to the handler and returns its result. Returns the SDK error codes
 * 0xd8a067f8 when the counter is not positive and 0xd9006405 when `level` is above 8. */
s32 srvGetServiceHandle(u32 handle, u32 arg, s32 level, u32 extra)
{
    if (g_srvInitializeCount <= 0) {
        return 0xd8a067f8;
    }
    if (level > 8) {
        return 0xd9006405;
    }
    return FUN_00129628((u32 *)handle, (const char *)arg, level, extra);
}

} /* extern "C" */
