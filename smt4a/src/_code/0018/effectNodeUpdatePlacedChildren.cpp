/* NON_MATCHING: near (206 rows against 207): retail copies the origin/offset vectors with mixed ldr/ldm and keeps the saved orientation in s16-s19, the node flags in r8 and the callback table in r7, with a 9-register push; ours uses plain ldm/stm vector copies and different VFP/saved-register assignments. Control flow, constants and the render-state push/pop agree. */
#include "shard/Resource.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"

struct Vec4 {
    f32 x, y, z, w;
};

/* Scratch positions shared by the effect update (accessed at 0x100 and 0x110). */
extern struct EffectScratch {
    u8 unk00[0x100];
    Vec4 position;    // 0x100
    Vec4 offset;      // 0x110
} DAT_006471dc;


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

s32 FUN_001ad5ec(EffectNode *node, const Vec4 *position, f32 *matrix);
void FUN_001acb48(EffectNode *node, const f32 *matrix);

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
    DAT_006471dc.position = node->origin;
    DAT_006471dc.offset = node->offset;
    DAT_006471dc.position.x += DAT_006471dc.offset.x;
    DAT_006471dc.position.y += DAT_006471dc.offset.y;
    DAT_006471dc.position.z += DAT_006471dc.offset.z;
    DAT_006471dc.position.w += DAT_006471dc.offset.w;
    position = DAT_006471dc.position;
    flags = node->flags;
    if ((flags & 0x60) != 0 && (flags & EFFECT_NODE_PLACED) == 0) {
        Vec4 orientation = node->orientation;

        FUN_001ad5ec(node, &position, matrix);
        FUN_001acb48(node, matrix);
        node->orientation = orientation;
    }
    lastFrame = node->frame - 1;
    scale = node->scale * node->childScale;
    child = node->firstChild;
    renderStackPush(&g_renderCtx->stackB, g_renderCtx->stackB.entries[g_renderCtx->stackB.count]);
    for (; child != NULL; child = child->next) {
        if (child->startFrame > lastFrame || (child->frame & 2) != 0) {
            continue;
        }
        if ((flags & EFFECT_NODE_PLACED) == 0) {
            if ((child->flags & 0x18) != 0) {
                ResourceHandler *handler;

                DAT_006471dc.position = position;
                if ((child->flags & 4) != 0) {
                    DAT_006471dc.position.y = 5.0f;
                }
                DAT_006471dc.offset = childOffset;
                if ((child->flags & 0x80) != 0) {
                    DAT_006471dc.offset.x *= scale;
                    DAT_006471dc.offset.y *= scale;
                    DAT_006471dc.offset.z *= scale;
                    DAT_006471dc.offset.w *= scale;
                }
                DAT_006471dc.position.x += DAT_006471dc.offset.x;
                DAT_006471dc.position.y += DAT_006471dc.offset.y;
                DAT_006471dc.position.z += DAT_006471dc.offset.z;
                DAT_006471dc.position.w += DAT_006471dc.offset.w;
                childOffset = DAT_006471dc.position;
                handler = &g_handlerTable[child->resource->type];
                if (handler->setPosition != NULL) {
                    handler->setPosition(child->resource->data, &childOffset);
                }
            }
            if ((child->flags & 0x60) != 0) {
                ResourceHandler *handler;

                FUN_001ad5ec(child, &position, matrix);
                handler = &g_handlerTable[child->resource->type];
                if (handler->setOrientation != NULL) {
                    handler->setOrientation(child->resource->data, matrix);
                }
            }
        }
        g_handlerTable[child->resource->type].update(child->resource->data);
    }
    node->flags &= ~EFFECT_NODE_PLACED;
    renderStackPop(&g_renderCtx->stackB);
}

} /* extern "C" */
