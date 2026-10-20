#include "common.h"

extern "C" {

typedef struct Vertex {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
    /* 0x08 */ f32 z;
    /* 0x0C */ f32 w;
    /* 0x10 */ s32 color;
} Vertex; /* 0x14 */

#define VERTEX_BATCH 256

/* A batch of vertices collected until VERTEX_BATCH are queued, then submitted at once. */
typedef struct VertexBatch {
    /* 0x0000 */ u8 unk0000[0x10];
    /* 0x0010 */ Vertex vertices[VERTEX_BATCH];
    /* 0x1410 */ u32 count;
} VertexBatch;

typedef struct Renderer {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ void (*drawPoint)(s32 x, s32 y, s32 z, s32 w, s32 color);
    /* 0x2C */ u8 unk2C[4];
    /* 0x30 */ void (*drawBatch)(Vertex *vertices, s32 count);
} Renderer;

typedef struct RenderGlobals {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ Renderer *renderer;
} RenderGlobals;

extern RenderGlobals DAT_00465120;

/* Queues one vertex into the batch (flushing a full batch to the renderer), or, without a batch or
 * batch callback, draws it immediately with its coordinates truncated to integers. */
void FUN_002b7c54(VertexBatch *batch, s32 color, f32 x, f32 y, f32 z, f32 w)
{
    if (DAT_00465120.renderer->drawBatch != NULL && batch != NULL) {
        batch->vertices[batch->count].x = x;
        batch->vertices[batch->count].y = y;
        batch->vertices[batch->count].z = z;
        batch->vertices[batch->count].w = w;
        batch->vertices[batch->count].color = color;
        batch->count++;
        if (batch->count >= VERTEX_BATCH) {
            DAT_00465120.renderer->drawBatch(batch->vertices, VERTEX_BATCH);
            batch->count = 0;
        }
        return;
    }
    DAT_00465120.renderer->drawPoint((s32)x, (s32)y, (s32)z, (s32)w, color);
}

} /* extern "C" */
