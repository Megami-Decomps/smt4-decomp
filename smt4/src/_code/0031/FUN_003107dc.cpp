#include "ui/MessageMain.h"

extern "C" {

/* Script condition: the banner's counter panel is closed. */
s32 FUN_003107dc(void)
{
    return g_messageMain.banner->panelState == 0;
}

} /* extern "C" */
