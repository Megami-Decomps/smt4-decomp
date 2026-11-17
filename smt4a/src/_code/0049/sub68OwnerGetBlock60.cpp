#include "shard/NaviMain.h"
#include "mapnavi/NaviMainGlobals.h"
#include "shard/Shard0049.h"

extern "C" {

u8 *sub68OwnerGetBlock60(void)
{
    return (u8 *)&g_naviMain->value;
}

} /* extern "C" */
