#include "shard/Shard0037.h"

extern "C" {

extern PanelRef g_messageMain;

u8 panelStateIs0(void)
{
    return g_messageMain.panel->state == 0;
}

} /* extern "C" */
