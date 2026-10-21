#include "common.h"

namespace { struct State { u8 padding[0x1154]; u32 value; }; }

extern "C" {
extern State *g_partyPanel;

/* Reads the current status value when the owner exists. */
s32 partyPanelGetValue(void)
{
    return g_partyPanel != NULL ? g_partyPanel->value : 0;
}
}
