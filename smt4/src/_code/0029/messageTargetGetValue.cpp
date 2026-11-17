#include "ui/MessageMain.h"

extern "C" {

u32 messageTargetGetValue(void)
{
    return g_messageMain.banner->value;
}

} /* extern "C" */
