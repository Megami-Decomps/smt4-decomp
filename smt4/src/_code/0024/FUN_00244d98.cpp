#include "common.h"
#include "shard/FUN_00244d98.h"

extern "C" {

int FUN_002c2968(u32 a, u32 b);

extern u32 DAT_00464b7c[];
extern u32 g_asdModelTransformBuilder[];

void*FUN_00244d98(int index)
{
    FUN_002c2968(DAT_00464b7c[index], g_asdModelTransformBuilder[index]);
}

} /* extern "C" */
