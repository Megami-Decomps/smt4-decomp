#include "common.h"

extern "C" {

void FUN_001bad18(u32 *object, s32 a, s32 b, s32 c, u32 d, u32 e, u32 f, s32 g, s32 h);

/* Forwards to FUN_001bad18 with the object, its first word and the two arguments, padding the rest with zeros. */
void nw_gfx_SceneBuilder_CreateObject(u32 *object, u32 a, u32 b)
{
    FUN_001bad18(object, 0, 0, 0, *object, a, b, 0, 0);
}

} /* extern "C" */
