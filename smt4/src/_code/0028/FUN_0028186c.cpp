/* NON_MATCHING: near (206 rows against 207): retail copies the origin/offset vectors with mixed ldr/ldm and keeps the saved orientation in s16-s19, the node flags in r8 and the callback table in r7, with a 9-register push; ours uses plain ldm/stm vector copies and different VFP/saved-register assignments. Control flow, constants and the render-state push/pop agree. */
#include "camp/RenderCtx.h"

struct EffectVec4 {
    f32 x, y, z, w;
};

/* Scratch positions shared by the effect update (accessed at 0x100 and 0x110). */
extern struct EffectScratch {
    u8 unk00[0x100];
    EffectVec4 position;    // 0x100
    EffectVec4 offset;      // 0x110
} DAT_004ea81c;

/* The effect definition a node runs: handler type and argument. */
struct EffectDef {
    u8 unk00[4];
    u16 type;           // 0x04
    u8 unk06[2];
    void *argument;     // 0x08
};

/* Per-type handler table entry (0x44 bytes). */
struct EffectHandler {
    u8 unk00[0xC];
    void (*update)(void *argument);                     // 0x0C
    u8 unk10[0x10];
    void (*attach)(void *argument, const EffectVec4 *position);  // 0x20
    void (*orient)(void *argument, const f32 *matrix);  // 0x24
    u8 unk28[0x1C];
};
extern "C" EffectHandler g_handlerTable[];

/* An effect node (accessed fields). */
struct EffectNode {
    EffectVec4 offset;          // 0x00
    u8 unk10[0x30];
    EffectVec4 origin;          // 0x40
    EffectVec4 orientation;     // 0x50
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
    EffectDef *def;             // 0x90
    u8 unk94[0x18];
    EffectNode *next;           // 0xAC
};

#define EFFECT_NODE_PLACED 0x80000000

extern "C" {

extern RenderCtx *g_titleScene;

s32 FUN_0025c8f0(EffectNode *node, const EffectVec4 *position, f32 *matrix);
void FUN_002a3958(EffectNode *node, const f32 *matrix);

/* Places the effect node and updates every child that has started, with the title scene's render state
 * duplicated for the duration; the node's "placed" flag is cleared afterwards. */
void FUN_0028186c(EffectNode *node)
{
    EffectVec4 position;
    EffectVec4 childOffset;
    f32 matrix[9];
    f32 scale;
    s32 lastFrame;
    EffectNode *child;
    u32 flags;

    if (node->frame <= 0) {
        return;
    }
    DAT_004ea81c.position = node->origin;
    DAT_004ea81c.offset = node->offset;
    DAT_004ea81c.position.x += DAT_004ea81c.offset.x;
    DAT_004ea81c.position.y += DAT_004ea81c.offset.y;
    DAT_004ea81c.position.z += DAT_004ea81c.offset.z;
    DAT_004ea81c.position.w += DAT_004ea81c.offset.w;
    position = DAT_004ea81c.position;
    flags = node->flags;
    if ((flags & 0x60) != 0 && (flags & EFFECT_NODE_PLACED) == 0) {
        EffectVec4 orientation = node->orientation;

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
                EffectHandler *handler;

                DAT_004ea81c.position = position;
                if ((child->flags & 4) != 0) {
                    DAT_004ea81c.position.y = 5.0f;
                }
                DAT_004ea81c.offset = childOffset;
                if ((child->flags & 0x80) != 0) {
                    DAT_004ea81c.offset.x *= scale;
                    DAT_004ea81c.offset.y *= scale;
                    DAT_004ea81c.offset.z *= scale;
                    DAT_004ea81c.offset.w *= scale;
                }
                DAT_004ea81c.position.x += DAT_004ea81c.offset.x;
                DAT_004ea81c.position.y += DAT_004ea81c.offset.y;
                DAT_004ea81c.position.z += DAT_004ea81c.offset.z;
                DAT_004ea81c.position.w += DAT_004ea81c.offset.w;
                childOffset = DAT_004ea81c.position;
                handler = &g_handlerTable[child->def->type];
                if (handler->attach != NULL) {
                    handler->attach(child->def->argument, &childOffset);
                }
            }
            if ((child->flags & 0x60) != 0) {
                EffectHandler *handler;

                FUN_0025c8f0(child, &position, matrix);
                handler = &g_handlerTable[child->def->type];
                if (handler->orient != NULL) {
                    handler->orient(child->def->argument, matrix);
                }
            }
        }
        g_handlerTable[child->def->type].update(child->def->argument);
    }
    node->flags &= ~EFFECT_NODE_PLACED;
    renderStackPop(&g_titleScene->stackB);
}

} /* extern "C" */
