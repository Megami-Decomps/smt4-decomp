/* NON_MATCHING: compiler uses subs and movne instead of retail's cmp and two predicated moves. */
#include "common.h"

namespace { struct CampState { u8 padding[0x18]; s32 state; }; }

extern "C" {
/* Reads or updates the requested state. */
extern CampState *g_camp;
s32 FUN_002b8694(void)
{
    if (g_camp == NULL) {
        return 0;
    }
    return g_camp->state != 54;
}
}
