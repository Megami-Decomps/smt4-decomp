/* NON_MATCHING: 93 raw / 17 shape lines. Two differences remain: retail keeps the entry in r9 and the motion
 * selection in r8 (the build swaps them), and after the no-handle animation test retail branches to the shared
 * defeat call and falls into an epilogue copy (`beq; add sp; pop`) where the build has `bne <return>; b <call>`,
 * which shifts every later branch target. */
#include "battle/BtlGlobals.h"
#include "battle/btlScript.h"
#include "camp/CampMenuEntry.h"
#include "code/Code003e_Smt4a.h"
#include "shard/Shard004F.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

enum {
    MOTION_ANIMATION_DEFEATED = 13, /* the animation a defeated unit's model ends in */
    SPECIAL_UNIT_ID = 0x35b,        /* the unit that plays its defeat animation while game flag 0x592 is set */
    SPECIAL_UNIT_FLAG = 0x592
};

/* Current HP as a percentage of the maximum (the helper of FUN_00380f20 and FUN_00372b80). */
static __inline s32 hpPercent(s32 hp, s32 maxHp)
{
    return hp * 100 / maxHp;
}

extern "C" {

u32 querySlotHasHandle(void);
s32 callOnHandleField4A(BattleMotionHandle **handle);
void asdModelStartReferencedAnimation(BattleMotionHandle **model, u32 animation); // declcheck: local (the roster's handle type)
void targetStartIndexWithFlag2(BattleMotionHandle **handle, u32 index);
s32 handleOwnerIsActive(BattleMotionHandle **handle);
u32 holderObjectCall(BattleMotionHandle **handle);
f32 FUN_004d8668(BattleMotionHandle **handle);
f32 FUN_004d86a0(BattleMotionHandle **handle);
void FUN_003f2638(BtlMainStateA *battle, s32 value, BattleRosterRecordA *record, s32 force);
void obj4FStartSwitch(Obj4F *obj, u32 value);
void FUN_004fecd4(s32 id, u32 options);
u8 FUN_004fd2cc(s32 actor, u32 options, s32 allSlots, s32 slot, s32 parameter, u32 scalarBits, f32 value);

/* Steps the motion sequence a roster record asked for: starts each step's animation on the unit's model,
 * waits for it to end, and finishes by clearing the request or queueing the unit's defeat. */
void btlRosterMotionStepSequence(BtlMainStateA *battle, BattleRosterRecordA *record)
{
    BtlCombatantEntryA *entry = btlMainFindEntryByListedId(battle, record->motion.group);

    if (entry->data.id == SPECIAL_UNIT_ID) {
        if (gameFlagIsSet(SPECIAL_UNIT_FLAG)) {
            if (querySlotHasHandle()) {
                if (callOnHandleField4A(record->motion.handle) != MOTION_ANIMATION_DEFEATED) {
                    battleRosterMotionEndRequest(&record->motion);
                    record->motion.state = 0;
                    record->motion.stateFrame = 0;
                    record->motion.motionDuration = 0;
                    FUN_004d888c(record->motion.handle, MOTION_ANIMATION_DEFEATED, 10.0f, 1);
                }
                return;
            }
            if (callOnHandleField4A(record->motion.handle) != MOTION_ANIMATION_DEFEATED) {
                return;
            }
            FUN_003f2638(battle, 1, record, 0);
        } else if (callOnHandleField4A(record->motion.handle) == MOTION_ANIMATION_DEFEATED) {
            FUN_003f2638(battle, 1, record, 0);
        }
    }
    s16 pending = record->motion.pending;
    if (pending == 0 && record->motion.pendingAlternate == 0) {
        return;
    }
    s16 requested = record->motion.pendingAlternate;
    if (pending != requested) {
        record->motion.applied = pending;
        record->motion.pending = requested;
        record->motion.appliedAlternate = 0;
        record->motion.flags &= ~BATTLE_MOTION_CAMERA_SWITCHED;
    }
    if (record->motion.pending == 0 && record->motion.pendingAlternate == 0) {
        return;
    }
    BattleMotionSelection *selection = btlMotionFindSelection(battle, entry->data.id);
    if (selection == NULL || selection->kind == 0) {
        return;
    }
    BattleMotionSequence *sequence = btlMotionFindSequence(battle, selection->kind, record->motion.pending);
    if (sequence == NULL) {
        battleRosterMotionEndRequest(&record->motion);
        record->motion.state = 0;
        record->motion.stateFrame = 0;
        record->motion.motionDuration = 0;
        return;
    }
    if ((sequence->cameraFlags & 1) && g_btlCamera->state != 3 &&
        !(record->motion.flags & BATTLE_MOTION_CAMERA_SWITCHED)) {
        obj4FStartSwitch((Obj4F *)g_btlCamera, sequence->cameraSwitch);
        record->motion.flags |= BATTLE_MOTION_CAMERA_SWITCHED;
        if (sequence->cameraFlags & 2) {
            g_btlCamera->switchHeld = 1;
            battle->gameOver.cameraHeld = 1;
        } else {
            g_btlCamera->switchHeld = 0;
        }
        BtlUnitA *unit = btlUnitGet((BtlMainStateA *const *)g_btlScriptUnit);
        u32 options = 0;
        if (unit != NULL) {
            options = (u32)unit;
        }
        FUN_004fecd4(1, options);
    }
    s32 current = callOnHandleField4A(record->motion.handle);
    s32 index = record->motion.appliedAlternate;
    if (index >= 3) {
        return;
    }
    BattleMotionStep *step = &sequence->steps[index];
    if (step->animation != 0 || step->blend != 0.0f || step->loops != 0) {
        if (step->animation != current) {
            FUN_004d888c(record->motion.handle, step->animation, step->blend, step->loops != 0);
            if (step->startsReferenced) {
                asdModelStartReferencedAnimation(record->motion.handle, step->referencedIndex);
            }
            if (step->startsClip) {
                targetStartIndexWithFlag2(record->motion.handle, step->clipIndex);
            }
            s32 animation = step->animation;
            s32 override = battle->reflectedSlots.animationOverride;
            if (override >= 0) {
                animation = override;
                battle->reflectedSlots.animationOverride = -1;
            }
            FUN_004fd2cc(0, 0, 1, 0, animation, step->loops != 0, step->blend);
            return;
        }
        if (step->loops != 0) {
            if (!handleOwnerIsActive(record->motion.handle) && !holderObjectCall(record->motion.handle)) {
                return;
            }
        } else {
            if (handleOwnerIsActive(record->motion.handle)) {
                s32 frame = (s32)FUN_004d8668(record->motion.handle);
                s32 frameCount = (s32)FUN_004d86a0(record->motion.handle);
                if (frame < frameCount - 1) {
                    return;
                }
                record->motion.appliedAlternate++;
            } else if (holderObjectCall(record->motion.handle)) {
                record->motion.appliedAlternate++;
            }
            return;
        }
    }
    if (sequence->endsInDefeat == 0) {
        battleRosterMotionEndRequest(&record->motion);
        record->motion.state = 0;
        record->motion.stateFrame = 0;
        record->motion.motionDuration = 0;
        return;
    }
    BattleMotionSequence *dying = btlMotionFindSequence(battle, selection->kind, 2);
    if (hpPercent(entry->data.hp, entry->data.maxHp) < 20 && dying != NULL) {
        FUN_003f2638(battle, 2, record, 1);
    } else {
        FUN_003f2638(battle, 1, record, 1);
    }
    record->motion.state = 0;
    record->motion.stateFrame = 0;
    record->motion.motionDuration = 0;
}

} /* extern "C" */
