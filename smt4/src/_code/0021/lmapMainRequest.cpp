/* NON_MATCHING: armcc keeps the local map pointer in r1 rather than retail's r0. */
#include "common.h"

extern "C" {

struct LocalMapWork {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 requested;
};
extern LocalMapWork *g_lmapMainState;

/* Set the local map's request flag. */
void lmapMainRequest(void)
{
    g_lmapMainState->requested = 1;
}

}
