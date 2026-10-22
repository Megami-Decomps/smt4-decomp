#include "shard/NaviMain.h"

extern "C" {
extern NaviMain *g_naviMain;

void dialogActivateAndOpen(u32 *state);

/* Updates navigation only while its work block exists. */
void naviUpdateIfAllocated()
{
    if (g_naviMain != NULL)
        dialogActivateAndOpen(g_naviMain->state);
}

}
