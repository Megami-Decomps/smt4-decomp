#include "common.h"

extern "C" {

int asdScenePassVisit(u32 a, u32 b);

extern u32 g_effAsdLightHandle[];
extern u32 g_asdModelTransformBuilder[];

void effApplyModelLight(int index)
{
    asdScenePassVisit(g_effAsdLightHandle[index], g_asdModelTransformBuilder[index]);
}

} /* extern "C" */
