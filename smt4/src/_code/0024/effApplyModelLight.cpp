#include "common.h"
#include "shard/W6_W6Match3_RotationY.h"

extern "C" {

int asdScenePassVisit(u32 a, u32 b);

extern u32 g_asdModelSceneRoots[];
extern u32 g_asdModelTransformBuilder[];

void*effApplyModelLight(int index)
{
    asdScenePassVisit(g_asdModelSceneRoots[index], g_asdModelTransformBuilder[index]);
}

} /* extern "C" */
