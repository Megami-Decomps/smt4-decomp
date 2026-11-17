/* NON_MATCHING: VFP scheduling and local vector copies differ: retail keeps the saved orientation in s16-s19 and copies the position/offset vectors with ldm/stm, the build spills extra vector temporaries (larger frame). */
#include "common.h"
#include "shard/Resource.h"
#include "gfx/VectorScratch.h"


/* Scratch positions shared by the effect update (accessed at 0x100 and 0x110). */

/* An effect node (accessed fields). */
struct EffectNode {
    Vector4 offset;          // 0x00
    u8 unk10[0x30];
    Vector4 origin;          // 0x40
    Vector4 orientation;     // 0x50
    f32 scale;                  // 0x60
    u8 unk64[4];
    u32 flags;                  // 0x68
    u8 unk6C[8];
    f32 childScale;             // 0x74
    u8 unk78[8];
    s32 startFrame;             // 0x80
    s32 frame;                  // 0x84 (children: flags2 at the same offset)
    u8 unk88[4];
    EffectNode *firstChild;     // 0x8C
    Resource *resource;             // 0x90
    u8 unk94[0x18];
    EffectNode *next;           // 0xAC
};

extern "C" {
s32 FUN_0025c8f0(EffectNode *node, const Vector4 *position, f32 *matrix);
void FUN_002a3958(EffectNode *node, const f32 *matrix);
s32 effGetFrameCounter(void);
}

/* Advance an effect node one frame: place it, then update every child that has started. */
extern "C" void effectNodeUpdateTransform(EffectNode *node)
{
    g_vectorScratch.first.vector = node->origin;
    g_vectorScratch.second.vector = node->offset;
    g_vectorScratch.first.vector.x += g_vectorScratch.second.vector.x;
    g_vectorScratch.first.vector.y += g_vectorScratch.second.vector.y;
    g_vectorScratch.first.vector.z += g_vectorScratch.second.vector.z;
    g_vectorScratch.first.vector.w += g_vectorScratch.second.vector.w;
    Vector4 position = g_vectorScratch.first.vector;
    Vector4 childOffset;
    f32 matrix[8];
    if ((node->flags & 0x60) != 0) {
        Vector4 orientation = node->orientation;
        FUN_0025c8f0(node, &position, matrix);
        FUN_002a3958(node, matrix);
        node->orientation = orientation;
    }
    f32 scale = node->scale * node->childScale;
    s32 frame = node->frame;
    for (EffectNode *child = node->firstChild; child != 0; child = child->next) {
        if (child->startFrame > frame || (child->frame & 2) != 0)
            continue;
        if ((child->flags & 0x18) != 0) {
            g_vectorScratch.first.vector = position;
            if ((child->flags & 4) != 0)
                g_vectorScratch.first.vector.y = 5.0f;
            g_vectorScratch.second.vector = childOffset;
            if ((child->flags & 0x80) != 0) {
                g_vectorScratch.second.vector.x *= scale;
                g_vectorScratch.second.vector.y *= scale;
                g_vectorScratch.second.vector.z *= scale;
                g_vectorScratch.second.vector.w *= scale;
            }
            g_vectorScratch.first.vector.x += g_vectorScratch.second.vector.x;
            g_vectorScratch.first.vector.y += g_vectorScratch.second.vector.y;
            g_vectorScratch.first.vector.z += g_vectorScratch.second.vector.z;
            g_vectorScratch.first.vector.w += g_vectorScratch.second.vector.w;
            childOffset = g_vectorScratch.first.vector;
            ResourceHandler *handler = &g_handlerTable[child->resource->type];
            if (handler->setPosition != 0)
                // The handler table takes its own (incomplete) Vec4: the value is a Vector4.
                handler->setPosition(child->resource->data, reinterpret_cast<const Vec4 *>(&childOffset));
        }
        if ((child->flags & 0x60) != 0) {
            FUN_0025c8f0(child, &position, matrix);
            ResourceHandler *handler = &g_handlerTable[child->resource->type];
            if (handler->setOrientation != 0)
                handler->setOrientation(child->resource->data, matrix);
        }
        g_handlerTable[child->resource->type].run(child->resource->data);
    }
    node->flags |= 0x80000000;
    node->frame += effGetFrameCounter();
}
