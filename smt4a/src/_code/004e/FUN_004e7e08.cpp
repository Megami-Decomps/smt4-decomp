/* NON_MATCHING: readable rebuild from asm of a battle action's reflect-skill step machine (draft: the returned value of FUN_004f6d34 and the two effect names restored from the code pool); armcc here shares the property comparison and the state-store tail differently. */
#include "common.h"
#include "battle/btlAction.h"

/* A script unit slot (0x1254 bytes each); byte +9 is its phase. */
struct ScriptUnit {
    /* 0x0000 */ u8 unk0000[9];
    /* 0x0009 */ u8 phase;
    /* 0x000A */ u8 unk000A[0x124A];
};

/* The acting battle entry (its actor id at +0xA4). */
struct ActionOwner {
    /* 0x00 */ u8 unk00[0xA4];
    /* 0xA4 */ s32 unitIndex;
};

struct ActionContext {
    ActionOwner *owner;
};

/* The reflect action being stepped (only the fields read here). */
struct ReflectAction {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 step;
    /* 0x0C */ u8 unk0C[0x14];
    /* 0x20 */ u8 *attacker;           /* +0: flag word, +0x3F8: effect id */
    /* 0x24 */ u8 *target;             /* +0x6A: target entry id */
    /* 0x28 */ u8 *skill;              /* +2: skill id */
};

extern "C" {
extern ScriptUnit g_btlScriptUnit[];
extern u64 DAT_00571168;
extern s32 g_btlAux;
extern u32 g_btlUiBlock;
extern u32 g_btlActionReflect;

s32 btlScriptUnitHasFlags(ActionOwner *owner);
s32 btlFindEntryValue(s32 entry, u32 property);
s32 btlGetPropertyMaximum(u32 property);
s32 FUN_004f6d34(s32 aux);
s32 chainCountIdUnflagged(u32 chain, ReflectAction *action);
void FUN_004fdcd8(s32 a, ReflectAction *action, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
void FUN_004aa3d4(u32 block, s32 a, s32 b, u32 effect, u32 skill, s32 c);
void btlReflectQueueValueAction(s32 a, ReflectAction *action, s32 b, u8 *attacker, s32 c);
void FUN_004fbeac(s32 a, ReflectAction *action, s32 b, s32 c, s32 d);
void FUN_004f7b84(s32 aux, const char *name);

/* Whether every defence property of the entry is at its maximum. */
static bool propertiesAtMaximum(s32 entry)
{
    s32 a = btlFindEntryValue(entry, 7);
    s32 maxA = btlGetPropertyMaximum(7);
    s32 b = btlFindEntryValue(entry, 8);
    s32 maxB = btlGetPropertyMaximum(8);
    s32 c = btlFindEntryValue(entry, 9);
    s32 maxC = btlGetPropertyMaximum(9);
    s32 d = btlFindEntryValue(entry, 10);
    s32 maxD = btlGetPropertyMaximum(10);
    return d == maxD && c == maxC && b == maxB && a == maxA;
}

/* Steps the reflect action: 0 starts the effect, 1 waits for it, 2 plays the reflect, 3 waits for the
 * chain to finish. Returns 1 when the action is over. */
u32 FUN_004e7e08(ActionContext *context, ReflectAction *action)
{
    if (btlScriptUnitHasFlags(context->owner) != 0) {
        if (!propertiesAtMaximum(*(s16 *)(action->target + 0x6A)))
            FUN_004c8284(*(s16 *)(action->target + 0x6A), 3, 1, 0);
        g_btlScriptUnit[context->owner->unitIndex].phase = 0x1D;
        return 1;
    }
    s32 next;
    if (action->step == 0) {
        if (*(u64 *)action->attacker & DAT_00571168)
            FUN_004f7b84(g_btlAux, "ef_e_rastcand_c");
        else
            FUN_004f7b84(g_btlAux, "ef_d_rastcand");
        next = 1;
    } else if (action->step == 1) {
        if (FUN_004f6d34(g_btlAux) == 0)
            return 0;
        action->step = 2;
        return 0;
    } else if (action->step == 2) {
        s32 entry = *(s16 *)(action->target + 0x6A);
        if (*(u64 *)action->attacker & DAT_00571168)
            FUN_004fdcd8(0, action, entry, entry, 7, 0, 0, 0);
        else
            FUN_004fdcd8(0, action, entry, entry, 7, 0, 2, 0);
        FUN_004aa3d4(g_btlUiBlock, 2, 0x1CC, *(u32 *)(action->attacker + 0x3F8), *(u16 *)(action->skill + 2), 0);
        if (propertiesAtMaximum(*(s16 *)(action->target + 0x6A))) {
            btlReflectQueueValueAction(10, action, 0x40, action->attacker, 0);
        } else {
            FUN_004c8284(*(s16 *)(action->target + 0x6A), 3, 1, 0);
            FUN_004fbeac(10, action, 0, 0x3F, 0);
        }
        next = 3;
    } else if (action->step == 3) {
        if (chainCountIdUnflagged(g_btlActionReflect, action) > 0)
            return 0;
        g_btlScriptUnit[context->owner->unitIndex].phase = 0x1D;
        return 1;
    } else {
        return 0;
    }
    action->step = next;
    return 0;
}

} /* extern "C" */
