#include "common.h"

extern "C" {
struct RequestWork {
    /* 0x00 */ u8 unk00[0x4];
    /* 0x04 */ u8 requested;
};
extern RequestWork *g_aocJob;

static __inline void requestSet(RequestWork *work, u32 requested)
{
    work->requested = requested;
}

/* Raises the pending request flag on the add-on content job. */
void aocJobRequest(void)
{
    requestSet(g_aocJob, 1);
}
}
