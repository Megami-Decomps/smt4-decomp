#include "common.h"

namespace {
struct AocJobState {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 enabled;
};
}

static void aocJobSetEnabled(AocJobState *job, u8 enabled)
{
    job->enabled = enabled;
}

extern "C" {
extern AocJobState *g_aocJob;

/* Enables the add-on content job state. */
void aocJobEnable(void)
{
    aocJobSetEnabled(g_aocJob, 1);
}
}
