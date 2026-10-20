#include "shard/NaviMain.h"

extern "C" {

u8 *NaviMain_GetCursorPos(void)
{
    return DAT_0044cdf0->cursorPos;
}

} /* extern "C" */
