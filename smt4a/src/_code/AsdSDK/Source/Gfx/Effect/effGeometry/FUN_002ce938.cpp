/* NON_MATCHING: slot null handling matches retail; callee-saved register assignment differs (retail keeps stack-arg constant 16 in fp, per-item counts in r6/r7, slot in r8). */
#include "shard/W6_W6Match3_EffectColor.h"
#include "AsdSDK/AsdDebug.h"
#include <stddef.h>

struct EffectGeometrySlotView { u8 state[0x4c]; };
struct EffectGeometryBatchView {
    EffectGeometrySlotView *slot;
    EffectColor *colors;
    s16 count;
    s16 verticesPerItem;
    s16 trianglesPerItem;
    s16 vertexCount;
    s16 triangleCount;
    u16 flags;
    u8 unk14[4];
    f32 matrix[16];
    u32 drawFlags;
};
typedef char EffectGeometryBatchLayout[sizeof(EffectGeometryBatchView) == 0x5c &&
    offsetof(EffectGeometryBatchView, matrix) == 0x18 ? 1 : -1];

extern "C" {
extern const char DAT_0054baf8[];
void *memAlloc(u32, u32, u32, u32, u32, u32);
void *FUN_00178b04(u32, const char *, u32);
EffectGeometrySlotView *slotReset(EffectGeometrySlotView *);
void slotInit(EffectGeometrySlotView *, u32, s32, s32);
void matrix44SetIdentity(f32 *);

/* Allocate a geometry batch, its vertex slot and opaque white per-item colors. */
EffectGeometryBatchView *FUN_002ce938(s32 count, s32 verticesPerItem, s32 trianglesPerItem, u16 flags)
{
    asdDebugTrace(DAT_0054baf8, 504);
    EffectGeometryBatchView *batch = static_cast<EffectGeometryBatchView *>(memAlloc(0x10000, 0x100, 0, sizeof(EffectGeometryBatchView), 0x10, 1));
    EffectGeometrySlotView *slotMemory = static_cast<EffectGeometrySlotView *>(FUN_00178b04(sizeof(EffectGeometrySlotView), DAT_0054baf8, 506));
    EffectGeometrySlotView *slot = (slotMemory != NULL) ? slotReset(slotMemory) : NULL;
    s32 triangles = trianglesPerItem * count;
    s32 vertices = verticesPerItem * count;
    slotInit(slot, 0x25, triangles * 3, vertices);
    batch->slot = slot;
    asdDebugTrace(DAT_0054baf8, 511);
    batch->colors = static_cast<EffectColor *>(memAlloc(0x10000, 0x100, 0, count * sizeof(EffectColor), 0x10, 1));
    for (u16 i = 0; i < count; ++i) {
        EffectColor *color = &batch->colors[i];
        color->red = 1.0f;
        color->green = 1.0f;
        color->blue = 1.0f;
        color->alpha = 1.0f;
    }
    matrix44SetIdentity(batch->matrix);
    batch->flags = flags | 0x100;
    batch->count = count;
    batch->vertexCount = vertices;
    batch->triangleCount = triangles;
    batch->drawFlags = 0xa5;
    batch->verticesPerItem = verticesPerItem;
    batch->trianglesPerItem = trianglesPerItem;
    return batch;
}
}
