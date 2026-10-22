#include "ui/MessageMain.h"

extern "C" {
extern MessageGlobals g_messageMain;

u32 messageTargetSetValue(u32 value, u8 flag)
{
    MessagePanel *target = g_messageMain.banner;

    target->unk81 = flag;
    target->unk70 = value;
    target->unk74 = value;
    target->unk80 = 1;
    return 1;
}

} /* extern "C" */
