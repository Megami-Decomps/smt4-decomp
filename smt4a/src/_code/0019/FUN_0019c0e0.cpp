/* NON_MATCHING: VFP scheduling and local vector copies differ: retail keeps the saved orientation in s16-s19 and copies the position/offset vectors with ldm/stm, the build spills extra vector temporaries (larger frame). */
#include "common.h"

struct EffectVec4 {
    f32 x, y, z, w;
};

/* Scratch positions shared by the effect update (accessed at 0x100 and 0x110). */
extern struct EffectScratch {
    u8 unk00[0x100];
    EffectVec4 position;    // 0x100
    EffectVec4 offset;      // 0x110
} DAT_006471dc;

/* The effect definition a node runs: handler type and argument. */
struct EffectDef {
    u8 unk00[4];
    u16 type;           // 0x04
    u8 unk06[2];
    void *argument;     // 0x08
};

/* Per-type handler table entry (0x44 bytes). */
struct EffectHandler {
    u8 unk00[8];
    void (*update)(void *argument);                     // 0x08
    u8 unk0C[0x14];
    void (*attach)(void *argument);                     // 0x20
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

extern "C" {
s32 FUN_0025c8f0(EffectNode *node, const EffectVec4 *position, f32 *matrix);
void FUN_002a3958(EffectNode *node, const f32 *matrix);
s32 effGetFrameCounter(void);
}

/* Advance an effect node one frame: place it, then update every child that has started. */
extern "C" void FUN_0019c0e0(EffectNode *node)
{
    DAT_006471dc.position = node->origin;
    DAT_006471dc.offset = node->offset;
    DAT_006471dc.position.x += DAT_006471dc.offset.x;
    DAT_006471dc.position.y += DAT_006471dc.offset.y;
    DAT_006471dc.position.z += DAT_006471dc.offset.z;
    DAT_006471dc.position.w += DAT_006471dc.offset.w;
    EffectVec4 position = DAT_006471dc.position;
    EffectVec4 childOffset;
    f32 matrix[8];
    if ((node->flags & 0x60) != 0) {
        EffectVec4 orientation = node->orientation;
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
            DAT_006471dc.position = position;
            if ((child->flags & 4) != 0)
                DAT_006471dc.position.y = 5.0f;
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
            EffectHandler *handler = &g_handlerTable[child->def->type];
            if (handler->attach != 0)
                handler->attach(child->def->argument);
        }
        if ((child->flags & 0x60) != 0) {
            FUN_0025c8f0(child, &position, matrix);
            EffectHandler *handler = &g_handlerTable[child->def->type];
            if (handler->orient != 0)
                handler->orient(child->def->argument, matrix);
        }
        g_handlerTable[child->def->type].update(child->def->argument);
    }
    node->flags |= 0x80000000;
    node->frame += effGetFrameCounter();
}
