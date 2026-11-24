#include "nw/gfx/SceneBuilder.h"

using nw::gfx::SceneBuilderParams;
using nw::gfx::SceneNode;

extern "C" {

SceneNode *nw_gfx_SceneBuilder_CreateObjectByResourceType(SceneBuilderParams *params, u32 *size, s32 arg,
    void *storage, RelativeResourceRecord *resource, AsdAllocator *allocator, AsdAllocator *deviceAllocator,
    s32 arg7, s32 arg8);

/* Builds a scene object from the resource in the caller's parameters. */
SceneNode *nw_gfx_SceneBuilder_CreateObject(SceneBuilderParams *params, AsdAllocator *allocator,
                                           AsdAllocator *deviceAllocator)
{
    return nw_gfx_SceneBuilder_CreateObjectByResourceType(params, NULL, 0, NULL, params->resource,
                                                          allocator, deviceAllocator, 0, 0);
}

} /* extern "C" */
