/* NON_MATCHING: constant store uses r0 rather than retail's r1 and reorders the pointer load. */
#include "common.h"

namespace {
struct AocJobState {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 enabled;
};
}

extern "C" {
extern AocJobState *g_aocJob;

/* Enables the add-on content job state. */
void aocJobEnable(void)
{
    g_aocJob->enabled = 1;
}
}
