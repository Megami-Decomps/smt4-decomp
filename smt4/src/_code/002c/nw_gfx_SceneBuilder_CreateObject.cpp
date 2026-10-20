#include "common.h"

extern "C" {

int nw_gfx_SceneBuilder_CreateObjectByResourceType(u32 *builder, int a, int b, int c, u32 d, u32 e, u32 f, int g, int h);

void nw_gfx_SceneBuilder_CreateObject(u32 *builder, u32 a, u32 b)
{
    nw_gfx_SceneBuilder_CreateObjectByResourceType(builder, 0, 0, 0, *builder, a, b, 0, 0);
}

} /* extern "C" */
