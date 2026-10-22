#include "shard/Shard0034.h"

extern "C" {

extern MessageGlobalsA g_messageMain;

/* True when the panel's flag at +0x8E is set and its state is 2. */
u32 panelIsActiveState2(void)
{
    if (g_messageMain.panel->unk8E == 0 || g_messageMain.panel->state != 2) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
