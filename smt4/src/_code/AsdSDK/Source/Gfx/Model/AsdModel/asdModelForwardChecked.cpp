#include "common.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"

extern "C" {

s32 FUN_00129628(u32 handle, u32 arg, s32 level, u32 extra);

extern s32 DAT_00471b90;

/* Forwards the call to the handler and returns its result. Returns the SDK error codes
 * 0xd8a067f8 when the counter is not positive and 0xd9006405 when `level` is above 8. */
s32 asdModelForwardChecked(u32 handle, u32 arg, s32 level, u32 extra)
{
    if (DAT_00471b90 <= 0) {
        return 0xd8a067f8;
    }
    if (level > 8) {
        return 0xd9006405;
    }
    return FUN_00129628(handle, arg, level, extra);
}

} /* extern "C" */
