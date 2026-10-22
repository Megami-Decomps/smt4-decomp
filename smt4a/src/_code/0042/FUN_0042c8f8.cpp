/* NON_MATCHING: the index loop (retail walks six running pointers with a down counter and keeps the layout argument in the stack frame; build indexes by quad) and the resulting register allocation. */
#include "common.h"
#include "shard/S3GxQuad.h"

extern "C" {

void FUN_004ff4e0(u32 arg0, u8 *vertices, u32 arg2, u32 arg3, s32 arg4);
void nn_gxlow_CTR_FlushDataCacheForward(void *address, u32 size);
u32 asdGxGetPhysicalAddress(void *address);
void FUN_0042ca00(GxVertexState *state, const GxVertexLayout *layout, u32 vertexAddress);

/* Builds the quad batch's index buffer (two triangles per quad), flushes both buffers and binds
 * the vertex buffer to the layout through FUN_0042ca00 (the function that follows). */
void FUN_0042c8f8(GxQuadBatch *batch, const GxVertexLayout *layout, u32 arg2, u32 arg3, u32 arg4)
{
    FUN_004ff4e0(arg2, batch->vertices, arg3, arg4, -1);
    for (u32 quad = 0; quad < batch->quadCount; quad++) {
        u16 *index = &batch->indices[quad * GX_QUAD_INDEX_COUNT];

        index[0] = quad * 4;
        index[1] = quad * 4 + 2;
        index[2] = quad * 4 + 1;
        index[3] = quad * 4 + 2;
        index[4] = quad * 4 + 1;
        index[5] = quad * 4 + 3;
    }
    nn_gxlow_CTR_FlushDataCacheForward(batch->vertices, batch->quadCount * GX_QUAD_VERTEX_BYTES);
    nn_gxlow_CTR_FlushDataCacheForward(batch->indices, batch->quadCount * 12);
    batch->indexAddress = asdGxGetPhysicalAddress(batch->indices);
    batch->indexed = 0;
    batch->indexCount = batch->quadCount * GX_QUAD_INDEX_COUNT;
    FUN_0042ca00(&batch->vertexState, layout, asdGxGetPhysicalAddress(batch->vertices));
}

} /* extern "C" */
