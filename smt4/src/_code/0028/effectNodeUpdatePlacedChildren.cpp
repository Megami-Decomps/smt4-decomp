/* NON_MATCHING: near (206 rows against 207): retail copies the origin/offset vectors with mixed ldr/ldm and keeps the saved orientation in s16-s19, the node flags in r8 and the callback table in r7, with a 9-register push; ours uses plain ldm/stm vector copies and different VFP/saved-register assignments. Control flow, constants and the render-state push/pop agree. */
#include "shard/Resource.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"

struct Vec4 {
    f32 x, y, z, w;
};

/* Scratch positions shared by the effect update (accessed at 0x100 and 0x110). */
extern struct EffectScratch {
    u8 unk00[0x100];
    Vec4 position;    // 0x100
    Vec4 offset;      // 0x110
} g_vectorScratch;


/* An effect node (accessed fields). */
struct EffectNode {
    Vec4 offset;          // 0x00
    u8 unk10[0x30];
    Vec4 origin;          // 0x40
    Vec4 orientation;     // 0x50
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


s32 FUN_0025c8f0(EffectNode *node, const Vec4 *position, f32 *matrix);
void FUN_002a3958(EffectNode *node, const f32 *matrix);

/* Places the effect node and updates every child that has started, with the title scene's render state
 * duplicated for the duration; the node's "placed" flag is cleared afterwards. */
void effectNodeUpdatePlacedChildren(EffectNode *node)
{
    Vec4 position;
    Vec4 childOffset;
    f32 matrix[9];
    f32 scale;
    s32 lastFrame;
    EffectNode *child;
    u32 flags;

    if (node->frame <= 0) {
        return;
    }
    g_vectorScratch.position = node->origin;
    g_vectorScratch.offset = node->offset;
    g_vectorScratch.position.x += g_vectorScratch.offset.x;
    g_vectorScratch.position.y += g_vectorScratch.offset.y;
    g_vectorScratch.position.z += g_vectorScratch.offset.z;
    g_vectorScratch.position.w += g_vectorScratch.offset.w;
    position = g_vectorScratch.position;
    flags = node->flags;
    if ((flags & 0x60) != 0 && (flags & EFFECT_NODE_PLACED) == 0) {
        Vec4 orientation = node->orientation;

        FUN_0025c8f0(node, &position, matrix);
        FUN_002a3958(node, matrix);
        node->orientation = orientation;
    }
    lastFrame = node->frame - 1;
    scale = node->scale * node->childScale;
    child = node->firstChild;
    renderStackPush(&g_titleScene->stackB, g_titleScene->stackB.entries[g_titleScene->stackB.count]);
    for (; child != NULL; child = child->next) {
        if (child->startFrame > lastFrame || (child->frame & 2) != 0) {
            continue;
        }
        if ((flags & EFFECT_NODE_PLACED) == 0) {
            if ((child->flags & 0x18) != 0) {
                ResourceHandler *handler;

                g_vectorScratch.position = position;
                if ((child->flags & 4) != 0) {
                    g_vectorScratch.position.y = 5.0f;
                }
                g_vectorScratch.offset = childOffset;
                if ((child->flags & 0x80) != 0) {
                    g_vectorScratch.offset.x *= scale;
                    g_vectorScratch.offset.y *= scale;
                    g_vectorScratch.offset.z *= scale;
                    g_vectorScratch.offset.w *= scale;
                }
                g_vectorScratch.position.x += g_vectorScratch.offset.x;
                g_vectorScratch.position.y += g_vectorScratch.offset.y;
                g_vectorScratch.position.z += g_vectorScratch.offset.z;
                g_vectorScratch.position.w += g_vectorScratch.offset.w;
                childOffset = g_vectorScratch.position;
                handler = &g_handlerTable[child->resource->type];
                if (handler->setPosition != NULL) {
                    handler->setPosition(child->resource->data, &childOffset);
                }
            }
            if ((child->flags & 0x60) != 0) {
                ResourceHandler *handler;

                FUN_0025c8f0(child, &position, matrix);
                handler = &g_handlerTable[child->resource->type];
                if (handler->setOrientation != NULL) {
                    handler->setOrientation(child->resource->data, matrix);
                }
            }
        }
        g_handlerTable[child->resource->type].update(child->resource->data);
    }
    node->flags &= ~EFFECT_NODE_PLACED;
    renderStackPop(&g_titleScene->stackB);
}

} /* extern "C" */
