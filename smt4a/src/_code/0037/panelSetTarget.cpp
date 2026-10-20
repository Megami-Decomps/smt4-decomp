#include "shard/Shard0037.h"

extern "C" {

extern PanelRef DAT_0057f588;

u32 panelSetTarget(u32 value, u8 flag)
{
    Panel85 *panel = DAT_0057f588.panel;

    panel->unk93 = flag;
    panel->unk80 = value;
    panel->unk84 = value;
    panel->unk92 = 1;
    panel->unk8C = 0;
    return 1;
}

} /* extern "C" */
