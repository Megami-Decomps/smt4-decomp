#include "common.h"

namespace { struct State { u8 padding[0x1c]; s32 state; }; }

extern "C" {
/* Reads or updates the requested state. */
extern State * g_partyPanel;
s32 partyPanelIsStateThree(void)
{
    if (g_partyPanel == NULL)
        return 0;
    return g_partyPanel->state == 3;
}
}
