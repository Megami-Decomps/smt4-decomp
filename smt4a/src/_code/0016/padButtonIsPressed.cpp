/* NON_MATCHING: retail uses bcs 1c where the compiled block uses bcs 28. */
#include "common.h"

struct PadInputState {
    u32 unk00;  // 0x00
    u32 unk04;  // 0x04
    u32 flags;  // 0x08
};

extern "C" {
extern PadInputState DAT_005b4000;
extern s32 DAT_00640000[31];

u32 padButtonIsPressed(u32 button)
{
    if (button < 31) {
        if (DAT_005b4000.flags & 1) {
            return 0;
        }
        if (DAT_005b4000.flags & 2) {
            return 0;
        }
        if (DAT_00640000[button] == 1) {
            return 1;
        }
    }
    return 0;
}
}
