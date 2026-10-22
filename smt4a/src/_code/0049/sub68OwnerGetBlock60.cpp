#include "shard/NaviMain.h"
#include "shard/Shard0049.h"

extern "C" {
extern NaviMainA *g_naviMain;

u8 *sub68OwnerGetBlock60(void)
{
    return (u8 *)&g_naviMain->value;
}

} /* extern "C" */
