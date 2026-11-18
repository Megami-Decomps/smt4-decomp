#include "common.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"

extern "C" {

s32 FUN_0016fa4c(u32 handle, u32 arg, s32 level, u32 extra);

/* The service state at 0x5c0b10 (its session handle, DAT_005c0b18, follows at 0x8). */
struct AsdModelService {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ s32 openCount;
};

extern AsdModelService DAT_005c0b10;

/* Forwards the call to the handler and returns its result. Returns the SDK error codes
 * 0xd8a067f8 when the counter is not positive and 0xd9006405 when `level` is above 8. */
s32 asdModelForwardChecked(u32 handle, u32 arg, s32 level, u32 extra)
{
    if (DAT_005c0b10.openCount <= 0) {
        return 0xd8a067f8;
    }
    if (level > 8) {
        return 0xd9006405;
    }
    return FUN_0016fa4c(handle, arg, level, extra);
}

} /* extern "C" */
