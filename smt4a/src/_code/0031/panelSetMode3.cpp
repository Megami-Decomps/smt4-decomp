#include "shard/Shard0031.h"

extern "C" {

extern MessageGlobalsA g_messageMain;

u32 panelSetMode3(u32 value, u8 flag)
{
    MessagePanelA *panel = g_messageMain.panel;

    panel->state = 3;
    panel->unk80 = value;
    panel->unk84 = value;
    panel->unk93 = flag;
    panel->unk74 = 0;
    return 1;
}

} /* extern "C" */
