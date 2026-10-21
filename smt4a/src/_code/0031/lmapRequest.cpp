/* NON_MATCHING: retail loads the work pointer into r0 before storing the flag; compiler uses r1. */
#include "common.h"

extern "C" {
struct RequestWork {
    /* 0x00 */ u8 unk00[0x8];
    /* 0x08 */ u8 requested;
};
extern RequestWork *g_lmapMainState;

/* Raises the pending request flag on the local map work. */
void lmapRequest(void)
{
    g_lmapMainState->requested = 1;
}
}
