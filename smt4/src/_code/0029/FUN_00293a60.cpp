/* NON_MATCHING: compiler adds a shared explicit-zero return rather than retail's predicated result. */
#include "common.h"

namespace { struct State { u8 padding[0x1c]; s32 state; }; }

extern "C" {
/* Reads or updates the requested state. */
extern State * g_partyPanel;
s32 FUN_00293a60(void)
{
    return g_partyPanel != NULL && g_partyPanel->state == 3;
}
}
