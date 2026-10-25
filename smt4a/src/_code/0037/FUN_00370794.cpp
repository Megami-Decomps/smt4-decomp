#include "shard/Shard0037.h"
#include "shard/Shard004A.h"

extern "C" {

extern MessageGlobalsA g_messageMain;

u32 FUN_00370794(void)
{
    return g_messageMain.panel->unk20;
}

} /* extern "C" */
