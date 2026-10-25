#include "common.h"

extern "C" {
struct RequestWork {
    /* 0x00 */ u8 unk00[0x8];
    /* 0x08 */ u8 requested;
};
extern RequestWork *g_lmapMainState;

static __inline void requestWorkSetRequested(RequestWork *work, u8 requested)
{
    work->requested = requested;
}

/* Raises the pending request flag on the local map work. */
void lmapRequest(void)
{
    requestWorkSetRequested(g_lmapMainState, 1);
}
}
