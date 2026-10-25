/* NON_MATCHING: register pressure - retail keeps the frame, actor and skill in registers and re-evaluates the frame offsets per use, while this version spills r0-r3 and the derived frames; the stack-argument layout (two skipped words, the speed passed as raw bits) and the calls are the same. */
#include "battle/BtlMainAccess.h"
#include "battle/btlReflect.h"
#include "common.h"

namespace {
/* A skill record: its id at +0x62 (ids below 0x6d are the "reflect" skills). */
struct SkillRecord {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ s16 id;
};

/* The battle unit entry found for a skill: its status flags are at +0xfa. */
struct BattleEntry {
    /* 0x00 */ u8 unk00[0xfa];
    /* 0xfa */ u16 statusFlags;
};
}

extern "C" {
void FUN_002550d8(s32 id, s32 a, s32 b, s32 c);
void *btlMainFindEntryByListedId(void *state, s32 id);

void FUN_002268d0(s32 frame, s32 delay, u32 actor, SkillRecord *skill, s32 first, s32 second, s32 mode, s32 arg, f32 speed);
u32 FUN_00293230(void *state);
void FUN_002505c0(s32 a, s32 b, u32 sound, s32 c, s32 d, s32 e, s32 f);
BattleEntry *FUN_0027da30(void *state, s32 id);

/* Queues the reflect actions of a skill use: the optional pre-effect, the one or two damage amounts (with their
   effect and, when a status flag changes, the effect sound), and the follow-up status actions. Always returns 1. */
u32 FUN_0027df30(s32 frame, u32 actor, SkillRecord *skill, u32 unused4, u32 unused5, u32 unused6, s32 firstAmount, s32 secondAmount,
                 u32 unused7, u32 statusMask, s32 preDelay, s32 effectDelay, s32 preSide, u32 effectSpeedBits,
                 u32 clearMask)
{
    union {
        u32 bits;
        f32 value;
    } speed;
    speed.bits = effectSpeedBits;
    f32 effectSpeed = speed.value;
    s32 isReflect = skill->id < 0x6d;
    if (isReflect) {
        FUN_002550d8(skill->id, 1, 1, 0);
    }
    s16 preFrame = (s16)preDelay + (s16)frame;
    if (preDelay >= 0) {
        void *entry = btlMainFindEntryByListedId(static_cast<void *>(btlGetMainState()), skill->id);
        if (isReflect && entry != NULL && preSide >= 0) {
            ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, preFrame, 0, actor);
            action->kind = 6;
            action->wordValues.unk18 = (u32)entry;
            action->value = preSide;
        }
    }
    s16 effectFrame = (s16)frame + (s16)effectDelay;
    frame = frame + effectDelay;
    u32 changed;
    if (firstAmount >= 1) {
        if (secondAmount >= 1) {
            if (isReflect && effectDelay >= 0) {
                FUN_002268d0(frame, 0, actor, skill, firstAmount, secondAmount, 5, 1, effectSpeed);
            }
            ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, effectFrame, 0, actor);
            action->kind = 0x1c;
            action->target = (u32)skill;
            action->value = 0;
            action->parameter = firstAmount;
            action = btlQueueReflectAction(g_btlActionReflect, effectFrame, 0, actor);
            action->kind = 0x1c;
            action->target = (u32)skill;
            action->value = 1;
            action->parameter = secondAmount;
            changed = FUN_00293230(static_cast<void *>(btlGetMainState()));
        } else {
            if (isReflect && effectDelay >= 0) {
                FUN_002268d0(frame, 0, actor, skill, firstAmount, 0, 2, 1, effectSpeed);
            }
            ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, effectFrame, 0, actor);
            action->kind = 0x1c;
            action->target = (u32)skill;
            action->value = 0;
            action->parameter = firstAmount;
            changed = FUN_00293230(static_cast<void *>(btlGetMainState())) & ~clearMask;
        }
        if (changed != 0) {
            FUN_002505c0(0, 0, 0x10001c1, 0, 1, 0, 0);
        }
    } else if (secondAmount >= 1) {
        if (isReflect && effectDelay >= 0) {
            FUN_002268d0(frame, 0, actor, skill, secondAmount, 0, 3, 1, effectSpeed);
        }
        ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, effectFrame, 0, actor);
        action->kind = 0x1c;
        action->target = (u32)skill;
        action->value = 1;
        action->parameter = secondAmount;
        changed = FUN_00293230(static_cast<void *>(btlGetMainState()));
        if (changed != 0) {
            FUN_002505c0(0, 0, 0x10001c1, 0, 1, 0, 0);
        }
    }
    if (statusMask != 0) {
        u32 flags = 0;
        isReflect = skill->id < 0x6d;
        if (isReflect) {
            BattleEntry *entry = FUN_0027da30(static_cast<void *>(btlGetMainState()), skill->id);
            if (entry != NULL) {
                flags = entry->statusFlags;
            }
        }
        ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)((s16)frame + 1), 0, actor);
        action->kind = 0x1d;
        action->target = (u32)skill;
        action->value = 0;
        action->parameter = statusMask;
        if (isReflect && (flags & ~statusMask & 0x586) == 0) {
            s16 lastFrame = (s16)((s16)frame + 2);
            action = btlQueueReflectAction(g_btlActionReflect, lastFrame, 0, actor);
            action->kind = 0x14;
            action->target = (u32)skill;
            action = btlQueueReflectAction(g_btlActionReflect, lastFrame, 0, actor);
            action->kind = 10;
            action->target = (u32)skill;
            action->value = statusMask;
        }
    }
    return 1;
}

} /* extern "C" */
