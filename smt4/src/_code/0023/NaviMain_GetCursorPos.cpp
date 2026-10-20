#include "shard/NaviMain.h"

extern "C" {

u8 *NaviMain_GetCursorPos(void)
{
    return g_naviMain->cursorPos;
}

} /* extern "C" */
