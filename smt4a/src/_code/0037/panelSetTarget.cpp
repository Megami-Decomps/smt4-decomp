#include "shard/Shard0037.h"

extern "C" {

extern PanelRef g_messageMain;

u32 panelSetTarget(u32 value, u8 flag)
{
    Panel85 *panel = g_messageMain.panel;

    panel->unk93 = flag;
    panel->unk80 = value;
    panel->unk84 = value;
    panel->unk92 = 1;
    panel->unk8C = 0;
    return 1;
}

} /* extern "C" */
