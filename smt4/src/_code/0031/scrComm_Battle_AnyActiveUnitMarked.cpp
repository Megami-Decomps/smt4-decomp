#include "common.h"

extern "C" {

int scrSetResult(int result);
extern u8 *btlGetMainState(void);

/* Script command: result 1 when any of the 0x6D battle units is active, present, visible and flagged 0x100. */
u32 scrComm_Battle_AnyActiveUnitMarked(void)
{
    int i = 0;
    u8 *btl;
    u32 flags;

    while (1) {
        btl = btlGetMainState();
        flags = *(u32 *)(*(u8 **)(btl + 0x1fc0) + i * 0x288);
        if ((((flags & 0x10) != 0 && (flags & 1) != 0) && ((flags & 0x40) == 0)) &&
            ((flags & 0x100) != 0)) {
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
