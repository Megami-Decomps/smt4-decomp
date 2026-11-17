#include "ui/MessageMain.h"

extern "C" {

u8 messageMainTargetIsClear(void)
{
    return g_messageMain.banner->counterState == 0;
}

} /* extern "C" */
