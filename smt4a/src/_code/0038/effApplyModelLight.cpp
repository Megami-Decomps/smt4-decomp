#include "common.h"

extern "C" {

int FUN_001767a4(u32 a, u32 b);

extern u32 g_effAsdLightHandle[];
extern u32 g_asdModelTransformBuilder[];

void effApplyModelLight(int index)
{
    FUN_001767a4(g_effAsdLightHandle[index], g_asdModelTransformBuilder[index]);
}

} /* extern "C" */
