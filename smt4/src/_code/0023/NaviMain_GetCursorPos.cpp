#include "shard/NaviMain.h"
#include "mapnavi/NaviMainGlobals.h"
#include "shard/NaviMain_GetCursorPos.h"

extern "C" {

u8 *NaviMain_GetCursorPos(void)
{
    /* Callers read the cursor through the byte pointer the shared prototype returns. */
    return reinterpret_cast<u8 *>(&g_naviMain->cursor);
}

} /* extern "C" */
