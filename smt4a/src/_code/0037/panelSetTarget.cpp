#include "ui/MessageMainA.h"
#include "shard/Shard0037.h"
#include "ui/UiControl.h"

extern "C" {

u32 panelSetTarget(u32 value, u8 flag)
{
    MessageWindowA *panel = g_messageMain.banner;

    panel->unk0093 = flag;
    panel->counterDelta = value;
    panel->counterElapsed = value;
    panel->unk0092 = 1;
    panel->stepActive = 0;
    return 1;
}

} /* extern "C" */
