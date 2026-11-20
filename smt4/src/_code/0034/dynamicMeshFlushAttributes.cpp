/* NON_MATCHING: retail keeps each flag/mask pair as `tst; tstne` with conditionally executed loads and `blne`, computing the size in r0 first; armcc here branches around each call and fuses the first test into `and; tst`. */
#include "gfx/DynamicMesh.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {


/* Flush the attribute arrays selected by mask (and present in the mesh) to memory. */
void dynamicMeshFlushAttributes(DynamicMesh *mesh, u32 mask)
{
    if ((mesh->flags & 0x100) == 0) {
        return;
    }
    if ((mesh->flags & 0x1) && (mask & 0x1)) {
        nn_gxlow_CTR_FlushDataCacheForward((u32)(mesh->positions), mesh->vertexCount * 12);
    }
    if ((mesh->flags & 0x2) && (mask & 0x2)) {
        nn_gxlow_CTR_FlushDataCacheForward((u32)(mesh->colors), mesh->vertexCount * 16);
    }
    if ((mesh->flags & 0x20) && (mask & 0x20)) {
        nn_gxlow_CTR_FlushDataCacheForward((u32)(mesh->packed), mesh->vertexCount * 4);
    }
    if ((mesh->flags & 0x4) && (mask & 0x4)) {
        nn_gxlow_CTR_FlushDataCacheForward((u32)(mesh->texCoords), mesh->vertexCount * 8);
    }
    if ((mesh->flags & 0x80) && (mask & 0x80)) {
        nn_gxlow_CTR_FlushDataCacheForward((u32)(mesh->indices), mesh->indexCount * 2);
    }
}

} /* extern "C" */
