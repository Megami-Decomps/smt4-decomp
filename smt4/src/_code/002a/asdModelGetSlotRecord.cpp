#include "common.h"

extern "C" {

extern u32 g_asdModelSceneRoots[];

u32 asdModelGetSlotRecord(int index)
{
    return g_asdModelSceneRoots[index];
}

} /* extern "C" */
