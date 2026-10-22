#include "shard/Shard0037.h"

extern "C" {

extern MessageGlobalsA g_messageMain;

u8 panelStateIs0(void)
{
    return g_messageMain.panel->state == 0;
}

} /* extern "C" */
