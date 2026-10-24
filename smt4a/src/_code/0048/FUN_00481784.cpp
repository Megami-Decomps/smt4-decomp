/* NON_MATCHING: updates a field NPC marker (appears after leaving the trigger range, rises into view, shows its message, then follows the NPC with a height offset based on the lmap view); written from the decompilation, the goto structure is rebuilt as blocks, distSpatial's arguments are not recovered and float/bit comparisons are written as float compares */
#include "common.h"

#define NPC_FLAG_PENDING 0x01
#define NPC_FLAG_RISING 0x02
#define NPC_FLAG_NEAR 0x04
#define NPC_FLAG_HIDDEN 0x08
#define NPC_BYTE_FLAG_ACTIVE 0x10
#define NPC_VISIBLE_BITS 3
#define NPC_TRIGGER_DISTANCE 300.0f
#define NPC_RISE_STEP 100.0f
#define NPC_KIND_FLOATING_A 0
#define NPC_KIND_FLOATING_B 3
#define NPC_KIND_GROUND_A 1
#define NPC_KIND_GROUND_B 2

struct NpcControllerInner {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 flags;
};

struct NpcController {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ NpcControllerInner *inner;
};

struct FieldNpc {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u8 byteFlags;
    /* 0x0D */ u8 unk0D[0x1F];
    /* 0x2C */ f32 x;
    /* 0x30 */ f32 y;
    /* 0x34 */ f32 z;
    /* 0x38 */ u8 unk38[0x24];
    /* 0x5C */ u32 queueCount;
    /* 0x60 */ u8 unk60[4];
    /* 0x64 */ u32 messageId;
    /* 0x68 */ u8 unk68[4];
    /* 0x6C */ s32 counter;
    /* 0x70 */ s32 mode;
    /* 0x74 */ u8 unk74[4];
    /* 0x78 */ NpcController *controller;
    /* 0x7C */ u32 flags;
    /* 0x80 */ u8 unk80[4];
    /* 0x84 */ u16 limit;
    /* 0x86 */ u8 unk86[5];
    /* 0x8B */ u8 kind;
    /* 0x8C */ u8 unk8C[0xC];
    /* 0x98 */ f32 offsetX;
    /* 0x9C */ f32 offsetY;
    /* 0xA0 */ f32 offsetZ;
};

struct LmapViewHeight {
    /* 0x000 */ u8 unk000[0x308];
    /* 0x308 */ f32 height;
};

struct NpcGameBlock {
    /* 0x0000 */ u8 unk0000[0x14E8];
    /* 0x14E8 */ s32 forceAppear;
};

extern "C" {
extern LmapViewHeight *g_lmapView;
extern s8 DAT_005f161d;
extern s8 DAT_005f161f;
extern s32 DAT_005f189c;

NpcGameBlock *gameFlagsGetBlock(void);
f32 distSpatial(void);
void messageShowForKindVariant(u32 message, s32 variant);
void controllerSetDestination(u32 controller, f32 *destination);
void controllerSetPosition(u32 controller);
void controllerSetRotationEulerDegrees(u32 controller);

static __inline bool npcKindIsFloating(u8 kind)
{
    return kind == NPC_KIND_FLOATING_A || kind == NPC_KIND_FLOATING_B;
}

/* Raises the pending marker; returns false while the player is still inside the trigger range. */
static __inline bool npcRunPending(FieldNpc *npc)
{
    if (distSpatial() < NPC_TRIGGER_DISTANCE)
        return false;
    npc->offsetY += NPC_RISE_STEP;
    if (npc->offsetY > 0.0f) {
        if (npcKindIsFloating(npc->kind))
            messageShowForKindVariant(npc->messageId, 0);
        npc->offsetY = 0.0f;
        npc->flags &= ~NPC_FLAG_PENDING;
    }
    return true;
}

void FUN_00481784(FieldNpc *npc)
{
    NpcGameBlock *block = gameFlagsGetBlock();
    if (DAT_005f161d != 0)
        return;
    if (npc->mode != 1 && DAT_005f189c > 0)
        return;

    if ((npc->flags & NPC_FLAG_NEAR) != 0) {
        if (distSpatial() < NPC_TRIGGER_DISTANCE)
            return;
        npc->counter++;
        if ((s32)npc->limit < npc->counter || block->forceAppear == 1) {
            if (npcKindIsFloating(npc->kind)) {
                npc->controller->inner->flags &= ~NPC_VISIBLE_BITS;
                npc->flags |= NPC_FLAG_HIDDEN;
            } else if (npc->kind == NPC_KIND_GROUND_A || npc->kind == NPC_KIND_GROUND_B) {
                npc->controller->inner->flags |= NPC_VISIBLE_BITS;
                npc->flags &= ~NPC_FLAG_HIDDEN;
            }
            npc->flags = (npc->flags & ~NPC_FLAG_NEAR) | NPC_FLAG_PENDING;
        }
        if ((npc->flags & NPC_FLAG_PENDING) != 0 && !npcRunPending(npc))
            return;
    } else if ((npc->flags & NPC_FLAG_PENDING) != 0) {
        if (!npcRunPending(npc))
            return;
    } else {
        npc->byteFlags |= NPC_BYTE_FLAG_ACTIVE;
    }

    if (npc->queueCount < 5) {
        npc->offsetY -= NPC_RISE_STEP;
        npc->flags |= NPC_FLAG_RISING;
    }
    if (npc->controller == NULL)
        return;

    f32 destination[3];
    destination[0] = npc->x + npc->offsetX;
    destination[1] = npc->y + npc->offsetY;
    destination[2] = npc->z + npc->offsetZ;
    u32 controller = (u32)npc->controller->inner;
    f32 height = g_lmapView->height;
    if (height >= 0.9f) {
        f32 lift = (height - 0.9f) * 10.0f;
        if (lift < 0.0f)
            lift = 0.0f;
        else if (lift > 1.0f)
            lift = 1.0f;
        destination[1] += lift * NPC_RISE_STEP;
    }
    controllerSetDestination(controller, destination);
    controllerSetRotationEulerDegrees(controller);
    controllerSetPosition((u32)npc->controller->inner);

    NpcControllerInner *inner = npc->controller->inner;
    if (DAT_005f161d != 0) {
        inner->flags |= NPC_VISIBLE_BITS;
    } else if (DAT_005f161f != 0) {
        inner->flags |= NPC_VISIBLE_BITS;
        return;
    } else if ((npc->flags & NPC_FLAG_HIDDEN) != 0) {
        inner->flags &= ~NPC_VISIBLE_BITS;
    } else {
        return;
    }
    if (DAT_005f161f != 0)
        inner->flags |= NPC_VISIBLE_BITS;
    else if ((npc->flags & NPC_FLAG_HIDDEN) != 0)
        inner->flags &= ~NPC_VISIBLE_BITS;
}

} /* extern "C" */
