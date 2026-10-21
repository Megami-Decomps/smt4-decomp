/* NON_MATCHING: compiler derives the far structure members differently from retail. */
#include "common.h"

namespace { struct State { u8 padding[0x1308]; s16 count; u8 reserved[0x128]; u8 blocked; }; }

extern "C" {
u32 FUN_0034ed68(State *state)
{
    if (state->blocked != 0 || state->count != 0) { return 0; }
    return 1;
}
}
