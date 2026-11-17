#include "ui/MessageMain.h"
#include "code/Code0029.h"

extern "C" {

u32 FUN_0029c43c(u32 value, u8 flag)
{
    MessageWindow *target = g_messageMain.banner;

    g_messageMain.banner->counterState = 3;
    target->counterDelta = value;
    target->counterElapsed = value;
    target->unk081 = flag;
    target->counterDuration = 0;
    return 1;
}

} /* extern "C" */
