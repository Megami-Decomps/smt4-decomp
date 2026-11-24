/* NON_MATCHING: retail keeps frame, actor and skill in registers, uses the opposite reflect predicate and lays out
 * the three damage branches differently. The target-action call also schedules its stack arguments differently. */
#include "battle/BtlMainAccess.h"
#include "battle/ReflectQueueCommands.h"
#include "common.h"
#include "battle/BtlGlobals.h"

extern "C" {
void btlAdjustPropertyClamped(s32 id, s32 a, s32 b, s32 c);
u32 btlScriptUnitIsIncapacitated(void *state);
void btlQueueKeyedScalarReflectAction(s32 a, s32 b, u32 sound, s32 c, s32 d, s32 e, s32 f);

/* Queues the reflect actions of a skill use: the optional pre-effect, the one or two damage amounts (with their
   effect and, when a status flag changes, the effect sound), and the follow-up status actions. Always returns 1. */
u32 btlQueueSkillReflectActions(s32 frame, u32 actor, ReflectTarget *skill, u32 unused3, s32 firstAmount, s32 secondAmount,
                 u32 unused6, u32 statusMask, s32 preDelay, s32 effectDelay, s32 preSide, u32 commandFlags,
                 u32 clearMask)
{
    s32 isReflect = skill->entryIndex < 0x6d;
    if (isReflect) {
        btlAdjustPropertyClamped(skill->entryIndex, 1, 1, 0);
    }
    s16 preFrame = (s16)preDelay + (s16)frame;
    if (preDelay >= 0) {
        BtlEntry *entry = btlMainFindEntryByListedId(btlGetMainState(), skill->entryIndex);
        if (isReflect && entry != NULL && preSide >= 0) {
            btlReflectQueueUnitFollowup(6, preFrame, actor, entry, preSide);
        }
    }
    s16 effectFrame = (s16)frame + (s16)effectDelay;
    frame = frame + effectDelay;
    u32 changed;
    if (firstAmount >= 1) {
        if (secondAmount >= 1) {
            if (isReflect && effectDelay >= 0) {
                FUN_002268d0(frame, 0, actor, skill, firstAmount, secondAmount, 5, (u8)commandFlags, 1);
            }
            reflectCreateKind1c(effectFrame, actor, (u32)skill, firstAmount, 0);
            reflectCreateKind1c(effectFrame, actor, (u32)skill, secondAmount, 1);
            changed = btlScriptUnitIsIncapacitated(static_cast<void *>(btlGetMainState()));
        } else {
            if (isReflect && effectDelay >= 0) {
                FUN_002268d0(frame, 0, actor, skill, firstAmount, 0, 2, (u8)commandFlags, 1);
            }
            reflectCreateKind1c(effectFrame, actor, (u32)skill, firstAmount, 0);
            changed = btlScriptUnitIsIncapacitated(static_cast<void *>(btlGetMainState())) & ~clearMask;
        }
        if (changed != 0) {
            btlQueueKeyedScalarReflectAction(0, 0, 0x10001c1, 0, 1, 0, 0);
        }
    } else if (secondAmount >= 1) {
        if (isReflect && effectDelay >= 0) {
            FUN_002268d0(frame, 0, actor, skill, secondAmount, 0, 3, (u8)commandFlags, 1);
        }
        reflectCreateKind1c(effectFrame, actor, (u32)skill, secondAmount, 1);
        changed = btlScriptUnitIsIncapacitated(static_cast<void *>(btlGetMainState()));
        if (changed != 0) {
            btlQueueKeyedScalarReflectAction(0, 0, 0x10001c1, 0, 1, 0, 0);
        }
    }
    if (statusMask != 0) {
        u32 flags = 0;
        isReflect = skill->entryIndex < 0x6d;
        if (isReflect) {
            BtlUnitData *entry = btlFindEntryBlockByMemberId(btlGetMainState(), skill->entryIndex);
            if (entry != NULL) {
                flags = entry->statusFlags;
            }
        }
        btlReflectQueueStatusChange((s16)((s16)frame + 1), actor, skill, 0, statusMask);
        if (isReflect && (flags & ~statusMask & 0x586) == 0) {
            s16 lastFrame = (s16)((s16)frame + 2);
            ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, lastFrame, 0, actor);
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
