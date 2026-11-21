/* NON_MATCHING: near (206 rows against 207): retail copies the origin/offset vectors with mixed ldr/ldm and keeps the saved orientation in s16-s19, the node flags in r8 and the callback table in r7, with a 9-register push; ours uses plain ldm/stm vector copies and different VFP/saved-register assignments. Control flow, constants and the render-state push/pop agree. */
#include "shard/Resource.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"
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

#define EFFECT_NODE_PLACED 0x80000000

extern "C" {

s32 renderVectorOverrideResolve(EffectNode *node, const Vector4 *position, f32 *matrix);
void effectTimelinePartApplyRotation(EffectNode *node, const f32 *matrix);

/* Places the effect node and updates every child that has started, with the title scene's render state
 * duplicated for the duration; the node's "placed" flag is cleared afterwards. */
void effectNodeUpdatePlacedChildren(EffectNode *node)
{
    Vector4 position;
    Vector4 childOffset;
    f32 matrix[9];
    f32 scale;
    s32 lastFrame;
    EffectNode *child;
    u32 flags;

    if (node->frame <= 0) {
        return;
    }
    g_vectorScratch.first.vector = node->origin;
    g_vectorScratch.second.vector = node->offset;
    g_vectorScratch.first.vector.x += g_vectorScratch.second.vector.x;
    g_vectorScratch.first.vector.y += g_vectorScratch.second.vector.y;
    g_vectorScratch.first.vector.z += g_vectorScratch.second.vector.z;
    g_vectorScratch.first.vector.w += g_vectorScratch.second.vector.w;
    position = g_vectorScratch.first.vector;
    flags = node->flags;
    if ((flags & 0x60) != 0 && (flags & EFFECT_NODE_PLACED) == 0) {
        Vector4 orientation = node->orientation;

        renderVectorOverrideResolve(node, &position, matrix);
        effectTimelinePartApplyRotation(node, matrix);
        node->orientation = orientation;
    }
    lastFrame = node->frame - 1;
    scale = node->scale * node->childScale;
    child = node->firstChild;
    renderStackPushCounted(g_titleScene->stacks + RENDER_STACK_B, g_titleScene->stacks[RENDER_STACK_B].entries[g_titleScene->stacks[RENDER_STACK_B].count]);
    for (; child != NULL; child = child->next) {
        if (child->startFrame > lastFrame || (child->frame & 2) != 0) {
            continue;
        }
        if ((flags & EFFECT_NODE_PLACED) == 0) {
            if ((child->flags & 0x18) != 0) {
                ResourceHandler *handler;

                g_vectorScratch.first.vector = position;
                if ((child->flags & 4) != 0) {
                    g_vectorScratch.first.vector.y = 5.0f;
                }
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
                handler = &g_handlerTable[child->resource->type];
                if (handler->setPosition != NULL) {
                    // The handler table takes its own (incomplete) Vec4: the value is a Vector4.
                    handler->setPosition(child->resource->data, reinterpret_cast<const Vec4 *>(&childOffset));
                }
            }
            if ((child->flags & 0x60) != 0) {
                ResourceHandler *handler;

                renderVectorOverrideResolve(child, &position, matrix);
                handler = &g_handlerTable[child->resource->type];
                if (handler->setOrientation != NULL) {
                    handler->setOrientation(child->resource->data, matrix);
                }
            }
        }
        g_handlerTable[child->resource->type].update(child->resource->data);
    }
    node->flags &= ~EFFECT_NODE_PLACED;
    renderStackPop(g_titleScene->stacks + RENDER_STACK_B);
}

} /* extern "C" */
