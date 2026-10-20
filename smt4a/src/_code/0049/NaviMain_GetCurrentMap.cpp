#include "shard/Shard0049.h"

extern "C" {

extern Sub68Owner *g_naviMain;

u32 NaviMain_GetCurrentMap(void)
{
    return g_naviMain->unk28;
}

} /* extern "C" */
