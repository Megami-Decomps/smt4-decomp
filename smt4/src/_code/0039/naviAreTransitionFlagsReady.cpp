#include "common.h"

extern "C" {

extern int flagBitIsSet(u32 flag);
extern int gameFlagIsSet(u32 flag);

/* Whether game flag 0x400 and flag bit 0x76 are both set. */
u32 naviAreTransitionFlagsReady(void)
{
    u32 result = gameFlagIsSet(0x400);

    if (result != 0) {
        result = flagBitIsSet(0x76) != 0;
    }
    return result;
}

}
