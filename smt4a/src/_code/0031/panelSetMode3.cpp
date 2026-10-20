#include "shard/Shard0031.h"

extern "C" {

extern PanelRef DAT_0057f588;

u32 panelSetMode3(u32 value, u8 flag)
{
    Panel85 *panel = DAT_0057f588.panel;

    panel->state = 3;
    panel->unk80 = value;
    panel->unk84 = value;
    panel->unk93 = flag;
    panel->unk74 = 0;
    return 1;
}

} /* extern "C" */
