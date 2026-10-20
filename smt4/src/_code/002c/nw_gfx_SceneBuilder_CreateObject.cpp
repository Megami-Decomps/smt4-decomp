#include "common.h"

extern "C" {

int FUN_002aaa88(u32 *builder, int a, int b, int c, u32 d, u32 e, u32 f, int g, int h);

void nw_gfx_SceneBuilder_CreateObject(u32 *builder, u32 a, u32 b)
{
    FUN_002aaa88(builder, 0, 0, 0, *builder, a, b, 0, 0);
}

} /* extern "C" */
