#include "ui/MessageMain.h"

extern "C" {

u32 messageTargetSetValue(u32 value, u8 flag)
{
    MessageWindow *target = g_messageMain.banner;

    target->unk081 = flag;
    target->counterDelta = value;
    target->counterElapsed = value;
    target->unk080 = 1;
    return 1;
}

} /* extern "C" */
