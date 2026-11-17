#include "ui/MessageMainA.h"
#include "shard/Shard0031.h"

extern "C" {

u32 panelSetMode3(u32 value, u8 flag)
{
    MessageWindowA *panel = g_messageMain.banner;

    panel->counterState = 3;
    panel->counterDelta = value;
    panel->counterElapsed = value;
    panel->unk0093 = flag;
    panel->counterDuration = 0;
    return 1;
}

} /* extern "C" */
