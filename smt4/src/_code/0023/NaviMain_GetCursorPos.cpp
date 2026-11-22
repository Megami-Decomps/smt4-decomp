#include "shard/NaviMain.h"
#include "mapnavi/NaviMainGlobals.h"

extern "C" {

/* Returns the navigation cursor; the caller's navigation state is not needed. */
NaviValuePair *NaviMain_GetCursorPos(const void *navigation)
{
    return &g_naviMain->cursor;
}

} /* extern "C" */
