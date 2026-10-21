#include "shard/NaviMain.h"

extern "C" {

void FUN_0039c968(u32 *state);

/* Updates navigation only while its work block exists. */
void naviUpdateIfAllocated()
{
    if (g_naviMain != NULL)
        FUN_0039c968(g_naviMain->unk00040);
}

}
