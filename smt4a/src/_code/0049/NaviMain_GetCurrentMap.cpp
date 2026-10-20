#include "shard/Shard0049.h"

extern "C" {

extern Sub68Owner *DAT_00587f28;

u32 NaviMain_GetCurrentMap(void)
{
    return DAT_00587f28->unk28;
}

} /* extern "C" */
