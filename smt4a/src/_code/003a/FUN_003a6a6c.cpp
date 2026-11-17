#include "ui/MessageMainA.h"

extern "C" {

/* Script condition: the banner's counter panel is closed. */
s32 FUN_003a6a6c(void)
{
    return g_messageMain.banner->panelState == 0;
}

} /* extern "C" */
