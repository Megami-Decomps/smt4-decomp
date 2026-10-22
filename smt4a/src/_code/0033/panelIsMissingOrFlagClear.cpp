#include "shard/Shard0033.h"

extern "C" {

extern MessageGlobalsA g_messageMain;

/* True when there is no panel or its flag at +8 is clear. */
u8 panelIsMissingOrFlagClear(void)
{
    return g_messageMain.panel == NULL || g_messageMain.panel->flag08 == 0;
}

} /* extern "C" */
