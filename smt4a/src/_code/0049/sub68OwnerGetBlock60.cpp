#include "shard/Shard0049.h"

extern "C" {

extern Sub68Owner *g_naviMain;

u8 *sub68OwnerGetBlock60(void)
{
    return g_naviMain->block60;
}

} /* extern "C" */
