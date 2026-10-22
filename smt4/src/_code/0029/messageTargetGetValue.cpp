#include "ui/MessageMain.h"

extern "C" {
extern MessageGlobals g_messageMain;

u32 messageTargetGetValue(void)
{
    return g_messageMain.banner->value;
}

} /* extern "C" */
