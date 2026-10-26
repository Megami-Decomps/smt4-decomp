#include "shard/Shard0037.h"
#include "ui/UiControl.h"

extern "C" {

extern MessageGlobalsA g_messageMain;

u32 panelSetTarget(u32 value, u8 flag)
{
    MessagePanelA *panel = g_messageMain.panel;

    panel->unk93 = flag;
    panel->unk80 = value;
    panel->unk84 = value;
    panel->unk92 = 1;
    panel->unk8C = 0;
    return 1;
}

} /* extern "C" */
