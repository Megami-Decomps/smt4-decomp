#include "ui/MessageMain.h"

extern "C" {
extern MessageGlobals g_messageMain;

u8 messageMainTargetIsClear(void)
{
    return g_messageMain.banner->unk7C == 0;
}

} /* extern "C" */
