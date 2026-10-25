/* NON_MATCHING: only register allocation of the action-slot address computation differs (retail loads the unit, the slot stride, then the table pointer into r0/r2/r3). */
#include "battle/btlAction.h"
#include "battle/ActionKindSelection.h"

/* The combatant being driven; only the fields this state machine reads. */
struct ReflectUnit {
    u8 unk00[0x84];
    s32 slotIndex;          // 0x084: index into the action table
    s32 state;              // 0x088 (4: finishing)
    u8 unk8C[0x54];
    u32 flags;              // 0x0E0 (bit 18)
    u8 unkE4[0x1DB4];
    u32 reflectContext;     // 0x1E98
    u8 unk1E9C[0x2604];
    u32 busyFlags;          // 0x44A0 (bit 18)
};

/* The actor whose reflect action runs. */
struct ReflectActor {
    ReflectUnit *unit;
};

struct ReflectTarget {
    u8 unk00[0x24];
    struct { u8 unk00[0x62]; s16 id; } *source; // 0x24
    u8 unk28[0x544];
    s32 step;               // 0x56C
    u8 unk570[0x994];
    u32 delay;              // 0xF04
};


extern "C" {
extern BtlActionGlobals g_btlAction;
extern u32 g_btlActionReflect;
extern void *DAT_00435d18;
extern void *g_btlEvent;
s32 nodeListCountActiveById(u32 list, ReflectTarget *target);
s32 FUN_0027e3b8(void *event);
void battleResetCounterAndFlag(void *owner);
void btlReflectInitKind9(s32 layer, ReflectTarget *target, u32 context, u32 kind, u32 mode);
void *FUN_003cfc84(ReflectActor *actor, ReflectTarget *target, s32 alternate);
void FUN_003d0220(ReflectActor *actor, ReflectTarget *target, s32 alternate);
void FUN_00229a3c(s32 a, ReflectTarget *target, s32 b, s32 c, s32 d);
void frameRangeExtend(ReflectActor *actor, ReflectTarget *target, s32 id, s32 a, s32 b, s32 c);

/* Drive one tick of the reflect action; true once it has switched the combatant's action kind. */
u32 FUN_003cbce4(ReflectActor *actor, ReflectTarget *target)
{
    ReflectUnit *unit = actor->unit;
    if ((unit->busyFlags & 0x40000) == 0 && (unit->flags & 0x40000) != 0) {
        if (nodeListCountActiveById(g_btlActionReflect, target) != 0) {
            return 0;
        }
        ActionKindThread *slot = &static_cast<ActionKindThread *>(g_btlAction.data)[actor->unit->slotIndex];
        slot->kind = 1;
        battleResetCounterAndFlag(DAT_00435d18);
        return 1;
    }
    if (unit->state != 4) {
        FUN_003d0220(actor, target, 0);
        void *ready = FUN_003cfc84(actor, target, 0);
        if (target->step == 0x20) {
            btlReflectInitKind9(0, target, actor->unit->reflectContext, 9, 11);
        }
        if (target->step == 0x25) {
            FUN_00229a3c(0, target, 0, 2, 0);
        }
        target->step = target->step + 1;
        if (nodeListCountActiveById(g_btlActionReflect, target) > 0) {
            return 0;
        }
        if (ready != NULL) {
            target->delay = 0;
            ActionKindThread *slot = &static_cast<ActionKindThread *>(g_btlAction.data)[actor->unit->slotIndex];
            slot->kind = 0x1b;
            return 1;
        }
        if (actor->unit->state != 4) {
            return 0;
        }
    }
    if (FUN_0027e3b8(g_btlEvent) == 0) {
        FUN_003d0220(actor, target, 1);
        void *ready = FUN_003cfc84(actor, target, 1);
        target->step = target->step + 1;
        if (nodeListCountActiveById(g_btlActionReflect, target) <= 0 && ready != NULL) {
            target->delay = 0x1e;
            frameRangeExtend(actor, target, target->source->id, 0, 0x11, 0x11);
            ActionKindThread *slot = &static_cast<ActionKindThread *>(g_btlAction.data)[actor->unit->slotIndex];
            slot->kind = 0x1b;
            return 1;
        }
    }
    return 0;
}
}
