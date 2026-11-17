#include "ui/MessageMain.h"

extern "C" {

/* Answers whether the banner is idle. */
u32 messageIsWindowIdle(void)
{
    return g_messageMain.banner->counterState == 0;
}

} /* extern "C" */
