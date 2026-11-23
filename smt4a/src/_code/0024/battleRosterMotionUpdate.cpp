/* NON_MATCHING: 665 lines (531 by shape). Retail keeps the battle state in r9 and has no stack frame: it reloads
 * 0xFFFF, 0x3DC2, the clear mask's and the effect settings' addresses where they are used. This build keeps one of
 * those constants in a callee-saved register and spills the battle state instead (`ldr r0, [sp]` at every call),
 * which also renumbers the zero and camera registers. The blocks, calls and tests follow retail; the end-of-shake
 * block is btlRosterMotionSyncStatus's body and its status test hasAnyOf3DC2's, both inlined by retail (one file, btlUnit.cpp). */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W5_W5Match8_CameraTransition.h"
#include <stddef.h>
#include "battle/BtlEntryLookup.h"
#include "battle/btlCamera.h"
#include "battle/BattleHelpers_VariantB.h"

typedef char CheckRosterMotionHandle[offsetof(BattleRosterMotionA, handle) == 0x1BC ? 1 : -1];
typedef char CheckRosterMotionSelection[offsetof(BattleRosterMotionA, selection) == 0x128 ? 1 : -1];
typedef char CheckCombatantEntrySize[sizeof(BtlCombatantEntryA) == 0x408 ? 1 : -1];

extern "C" {
extern BtlCameraStatics g_btlCamera;
extern BattleEffectGlobals g_battleEffectSettings;
extern u64 g_battleMotionCombatantClearMask;
BtlMainStateA *jobGetWork(u32 job);
s32 idSetFindSubjectIndex(BtlMainStateA *battle, const BattleRosterRecordA *record);
u32 randBetween(u32 minimum, u32 maximum);
void *stateEntryFindById(BtlMainStateA *battle, s32 id);
f32 asdAnimGetTrackLastFrame(void *animation, u32 track);
BattleMotionSelection *btlMotionFindSelection(BtlMainStateA *battle, u32 id); // declcheck: local (the shared declaration does not compile here or changes this unit)
s32 btlMotionFindSequence(BtlMainStateA *battle, s32 kind, u32 action); // declcheck: local (the shared declaration does not compile here or changes this unit)
void FUN_003f2638(BtlMainStateA *battle, u32 action, BattleRosterRecordA *record, u32 flags);
void btlRosterMotionStepSequence(BtlMainStateA *battle, BattleRosterRecordA *record);
f32 randomGetNormalizedFloat(void);
f32 phaseSine(f32 angle);
void halfRecClear(BtlMainStateA *battle, BtlUnitDataA *subject);
void flagSelectionRebuild(void *selection, u32 flags);
void FUN_004cb64c(BtlMainStateA *battle, BattleRosterRecordA *record);
void battleUnitUpdateModelLoad(BtlMainStateA *battle, BattleRosterRecordA *record);
BattleMotionCameraSubject *obj80Select(u32 index);
f32 __hardfp_atan2f(f32 x, f32 z);
void callOnHandleField4D(BattleMotionHandle **handle, f32 first, f32 second, f32 third);
void callOnHandleField4B(BattleMotionHandle **handle, f32 x, f32 y, f32 z);
void callOnHandleField4C(BattleMotionHandle **handle, f32 x, f32 y, f32 z);
void setHandleEnabled(BattleMotionHandle **handle, u32 enabled);
void FUN_004cb394(BtlMainStateA *battle, BattleRosterRecordA *record);
void battleUpdateRotatingObjects(void *selection);

/* hasAnyOf3DC2's body, which retail inlines late (the mask stays a pool word tested with tst). */
static u8 statusHasAnyOf3DC2(u32 mask)
{
    if (mask & 0x3DC2) {
        return 1;
    }
    return 0;
}

/* Advance active roster motion, model handles, and independent color/alpha transitions. */
u32 battleRosterMotionUpdate(u32 job)
{
    BtlMainStateA *battle = jobGetWork(job);
    for (s32 index = 0; index < 109; ++index) {
        BattleRosterRecordA *entry = &battle->roster[index];
        if (entry == NULL || (entry->motion.flags & 1) == 0) {
            continue;
        }
        BattleRosterMotionA &motion = entry->motion;
        s32 variant = idSetFindSubjectIndex(battle, entry);
        if (variant < 0) {
            variant = 0;
        }
        BtlUnitDataA *subject = btlFindEntryBlockByMemberId(battle, motion.group);
        if (subject != NULL && (subject->statusFlags & 0x10) != 0) {
            ++motion.pulseFrame;
            if ((subject->flags & 3) != 0 && motion.pulseFrame >= motion.pulseDuration) {
                btlMainFindEntryByListedId(battle, motion.group);
                motion.pulseDuration = randBetween(2, 6) * 30;
                motion.pulseFrame = 0;
            }
        }
        switch (motion.state) {
        case 0:
            if ((motion.flags & 0x200000) != 0) {
                btlRosterMotionStepSequence(battle, entry);
            } else if ((motion.flags & 2) != 0) {
                motion.motionDuration = 0;
                motion.amount = 0.0f;
                void *animation = stateEntryFindById(battle, subject->parts[variant]);
                motion.frame += 2;
                s32 lastFrame = (s32)asdAnimGetTrackLastFrame(animation, 0);
                motion.frame %= lastFrame;
            }
            break;
        case 1:
            if ((motion.flags & 0x200000) != 0) {
                if (btlScriptUnitHasFlags(battle)) {
                    if (motion.pending == 0 && motion.pendingAlternate == 0) {
                        battleRosterMotionEndRequest(&motion);
                    }
                } else {
                    BtlCombatantEntryA *unit = btlMainFindEntryByListedId(battle, motion.group);
                    if (unit->data.motionState == 0 || (motion.flags & 0x800000) != 0) {
                        BattleMotionSelection *selection = btlMotionFindSelection(battle, unit->data.id);
                        if (selection != NULL && btlMotionFindSequence(battle, selection->kind, 6)) {
                            FUN_003f2638(battle, 6, entry, 0);
                            btlRosterMotionStepSequence(battle, entry);
                        } else {
                            battleRosterMotionEndRequest(&motion);
                        }
                    } else if (motion.pending == 0 && motion.pendingAlternate == 0) {
                        battleRosterMotionEndRequest(&motion);
                    }
                }
                motion.state = 0;
                motion.stateFrame = 0;
                motion.motionDuration = 0;
            } else if ((motion.flags & 2) != 0) {
                f32 random = randomGetNormalizedFloat();
                f32 displacement = motion.amount * motion.motionScale * random;
                if ((motion.stateFrame & 1) != 0) {
                    displacement = -displacement;
                }
                motion.offset = displacement;
                if (motion.motionDuration > motion.stateFrame) {
                    f32 angle = (((f32)motion.stateFrame * 1.5707964f) /
                                 (f32)motion.motionDuration) * 40.743664f;
                    motion.amount = (1.0f - phaseSine(angle)) * motion.amplitude;
                    if (motion.amount < 0.05f) {
                        motion.amount = 0.0f;
                    }
                } else {
                    motion.amount = 0.0f;
                }
                if (motion.stateFrame >= motion.motionDuration) {
                    motion.motionDuration = 0;
                    motion.stateFrame = 0;
                    for (u32 marker = 0; marker < 5; ++marker) {
                        motion.markers[marker] = 0;
                    }
                    /* btlRosterMotionSyncStatus's body: synchronizes the motion with its unit's status and rebuilds the condition list */
                    subject = btlFindEntryBlockByMemberId(btlGetMainState(), motion.group);
                    if (subject != NULL) {
                        if (subject->statusFlags & 0x180) {
                            btlGetMainState();
                            motion.state = 3;
                            motion.stateFrame = 0;
                            motion.motionDuration = 0;
                        } else if (motion.flags & 0x80) {
                            motion.state = 0;
                            motion.stateFrame = 0;
                            motion.motionDuration = 0;
                            BtlMainStateA *state = btlGetMainState();
                            if (motion.unitIndex >= 0) {
                                state->entries[motion.unitIndex].flags &= ~g_battleMotionCombatantClearMask;
                            }
                        }
                        if (statusHasAnyOf3DC2(subject->statusFlags)) {
                            halfRecClear(btlGetMainState(), subject);
                        }
                        if (motion.unitIndex >= 0) {
                            BtlCombatantEntryA *unit = &btlGetMainState()->entries[motion.unitIndex];
                            if (unit != NULL) {
                                flagSelectionRebuild(motion.selection, subject->statusFlags);
                            }
                        }
                    }
                }
            }
            break;
        case 2:
            if ((motion.flags & 0x400) != 0 && (motion.flags & 0x10) == 0 &&
                (motion.flags & 2) != 0) {
                f32 displacement;
                if (motion.phaseSpeed >= 0.0f) {
                    f32 step = (1.0f - motion.phase) * motion.phaseSpeed;
                    motion.phaseSpeed += g_battleEffectSettings.motion.growingAcceleration;
                    displacement = motion.amount * motion.phase;
                    motion.phase += step;
                    if (motion.phase >= 0.99f) {
                        motion.phaseSpeed = motion.motionScale * -0.6f;
                    }
                } else {
                    f32 step = motion.phase * -motion.phaseSpeed;
                    motion.phaseSpeed += g_battleEffectSettings.motion.shrinkingAcceleration;
                    displacement = motion.amount * motion.phase;
                    motion.phase -= step;
                    if (motion.phase <= 0.01f) {
                        displacement = 0.0f;
                        motion.state = 0;
                        motion.stateFrame = 0;
                        motion.motionDuration = 0;
                    }
                }
                motion.offset = displacement;
            } else {
                motion.state = 0;
                motion.stateFrame = 0;
                motion.motionDuration = 0;
            }
            break;
        case 3:
            if ((motion.flags & 0x200000) != 0) {
                btlRosterMotionStepSequence(battle, entry);
            }
            break;
        case 4:
            if ((motion.flags & 0x200000) != 0) {
                btlRosterMotionStepSequence(battle, entry);
            } else {
                motion.state = 0;
                motion.stateFrame = 0;
                motion.motionDuration = 0;
            }
            break;
        case 5:
            FUN_004cb64c(battle, entry);
            break;
        case 6:
            battleUnitUpdateModelLoad(battle, entry);
            break;
        }
        if (g_btlCamera.camera != NULL && (motion.flags & 0x200000) == 0) {
            const BattleMotionCameraSubject *cameraSubject = obj80Select(0);
            f32 x = motion.position[0] - cameraSubject->position[0];
            f32 z = motion.position[2] - cameraSubject->position[2];
            if (x == 0.0f && z == 0.0f) {
                motion.yaw = -3.1415927f;
            } else {
                motion.yaw = __hardfp_atan2f(x, z) - 3.1415927f;
            }
        }
        if ((motion.flags & 0x200000) != 0) {
            callOnHandleField4D(motion.handle, motion.scale, motion.scale, motion.scale);
            callOnHandleField4B(motion.handle, motion.position[0], motion.position[1], motion.position[2]);
            callOnHandleField4C(motion.handle, 0.0f, motion.yaw * 57.295776f, 0.0f);
            bool enabled = (motion.statusFlags & 0x800) == 0 ||
                           (motion.flags & 0x4000) != 0 || (motion.statusFlags & 0x2000) != 0;
            setHandleEnabled(motion.handle, enabled ? 1 : 0);
        }
        if ((motion.flags & 0x1000) != 0) {
            if (motion.colorFrame > motion.colorDuration) {
                motion.flags &= ~0x1000;
            } else {
                f32 progress = motion.colorDuration == 0 ? 1.0f :
                               (f32)motion.colorFrame / (f32)motion.colorDuration;
                motion.color = (motion.color & 0xFF) |
                    battleBlendColorComponent(motion.colorTarget, motion.colorStart, 0xFF000000, progress) |
                    battleBlendColorComponent(motion.colorTarget, motion.colorStart, 0x00FF0000, progress) |
                    battleBlendColorComponent(motion.colorTarget, motion.colorStart, 0x0000FF00, progress);
                ++motion.colorFrame;
            }
        }
        if ((motion.flags & 0x2000) != 0) {
            if (motion.alphaFrame > motion.alphaDuration) {
                motion.flags &= ~0x2000;
            } else {
                f32 progress = motion.alphaDuration == 0 ? 1.0f :
                               (f32)motion.alphaFrame / (f32)motion.alphaDuration;
                motion.color = (motion.color & 0xFFFFFF00) |
                    battleBlendColorComponent(motion.colorTarget, motion.colorStart, 0xFF, progress);
                ++motion.alphaFrame;
            }
        }
        FUN_004cb394(battle, entry);
        battleUpdateRotatingObjects(motion.selection);
        if (motion.stateFrame < 0xFFFF) {
            ++motion.stateFrame;
        }
    }
    return 0;
}
}
