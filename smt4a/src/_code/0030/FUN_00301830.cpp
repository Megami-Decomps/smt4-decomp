#include "common.h"
extern "C" {
struct AocJobWork { u8 unk00[0x38]; u8 requested; };
extern AocJobWork *g_aocJob;

static __inline void aocJobSetRequested(AocJobWork *work, u32 requested)
{
    work->requested = requested;
}

/* Raises the add-on content job's pending operation. */
void FUN_00301830(void)
{
    aocJobSetRequested(g_aocJob, 1);
}
}
