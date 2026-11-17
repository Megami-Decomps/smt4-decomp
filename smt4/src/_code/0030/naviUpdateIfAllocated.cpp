#include "shard/NaviMain.h"
#include "mapnavi/NaviMainGlobals.h"

extern "C" {

void dialogActivateAndOpen(u32 *state);

/* Updates navigation only while its work block exists. */
void naviUpdateIfAllocated()
{
    if (g_naviMain != NULL)
        dialogActivateAndOpen(g_naviMain->state);
}

}
