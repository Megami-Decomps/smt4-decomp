#include "common.h"

struct S4LoadWork {
    u8 unk00[8]; // 0x00
    s32 state;   // 0x08
};

extern "C" S4LoadWork* g_s4Load;

// Report whether loading is in an active state rather than idle or finishing.
extern "C" u32 s4LoadIsInProgress()
{
    if (g_s4Load != NULL) {
        switch (g_s4Load->state) {
        case 0:
        case 1:
        case 2:
        case 31:
        case 32:
            return 0;
        default:
            return 1;
        }
    }
    return 0;
}
