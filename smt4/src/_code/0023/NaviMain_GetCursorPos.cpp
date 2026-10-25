#include "shard/NaviMain.h"
#include "shard/NaviMain_GetCursorPos.h"

extern "C" {
extern NaviMain *g_naviMain;

u8 *NaviMain_GetCursorPos(void)
{
    return g_naviMain->cursorPos;
}

} /* extern "C" */
