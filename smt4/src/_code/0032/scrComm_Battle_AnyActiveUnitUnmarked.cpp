#include "battle/BtlMainAccess.h"
#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {


/* Script command: result 1 when any of the 0x6D battle units is active, present, visible and not flagged 0x100. */
u32 scrComm_Battle_AnyActiveUnitUnmarked(void)
{
    int i = 0;
    u8 *btl;
    u32 flags;

    while (1) {
        btl = reinterpret_cast<u8 *>(btlGetMainState());
        flags = *(u32 *)(*(u8 **)(btl + 0x1fc0) + i * 0x288);
        if (((flags & 0x10) != 0 && (flags & 1) != 0) && ((flags & 0x40) == 0) && ((flags & 0x100) == 0)) {
            break;
        }
        i = i + 1;
        if (i >= 0x6d) {
            scrSetResult(0);
            return 1;
        }
    }
    scrSetResult(1);
    return 1;
}

} /* extern "C" */
