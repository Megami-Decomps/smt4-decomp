/* NON_MATCHING: the switches, the block layout, the calls, the frame and the data accesses are retail's. What
 * differs: retail copies the quake's `reach` initialiser as two words and one (the build: three at once; the smt4
 * twin FUN_0026493c copies three); it compares the reach limit with the offset as `limit <= |offset|` (vcmpe
 * limit, |offset|; bhi) where every spelling tried builds `|offset| >= limit` (vcmpe |offset|, limit; blt); it keeps
 * the quake's damage in s17 and its chance in s18 (the build: s18 and s17); the quake's ending falls into its own
 * epilogue; it forms frames - 1 after the last amplitude store; it passes the found script entry on in r1 where
 * the build reads it back; and the scripted move's end is copied through other registers. */
#include <math.h>
#include <string.h>
#include "game/GameStateA.h"
#include "map/lmapMain.h"
#include "map/LmapMainGlobals.h"
#include "script/scrScriptProcess.h"
#include "shard/W6_W6Match6_ItemIcon.h"
#include "shard/W6_W6Match8_StatGrowth.h"
#include "code/Code0048_Smt4a.h"
#include "AsdSDK/Source/Snd/SoundActorQueue.h"

struct MapIfSpawnPose { f32 x, y, z, heading; };

enum {
    /* LmapMainStateA::state */
    LMAP_STATE_WALK = 1,
    LMAP_STATE_FADE_OUT = 2,
    LMAP_STATE_FADE_IN = 3,
    LMAP_STATE_FADED = 4,
    LMAP_STATE_MOVE = 5,
    LMAP_STATE_MOVED = 6,
    LMAP_STATE_QUAKE = 7,
    LMAP_STATE_EVENT = 8,
    QUAKE_FRAMES = 15,
    GAME_FLAG_HALF_QUAKE_DAMAGE = 0x84
};

extern "C" {
void FUN_002237a0(void);
void FUN_003254a0(void);
void FUN_003868dc(LmapMainStateA *state);
void FUN_0031297c(void);
void mapIfQueueNotice(int id, s32 arg);
void FUN_0049f8a4(u32 target, s32 percent);
void partyTryInflictCondition(u32 group, u32 condition, s32 chance);
f32 randomGetNormalizedFloat(void);
void sub68OwnerCall9(void);
void sub68OwnerCall7(void);
void FUN_002d88e0(MapIfSpawnPose pose);
void mapPlaceSet(s32 map, s32 area, u32 variant);
s32 tableGroupFindEntryIndex(TableGroupHeader *table, const char *name);
u32 scrScriptProcessStartEntry(ScriptProcess *process, s32 entryIndex);
void mapIfReleaseSlot0AndReset(void);
void mapIfReleaseFirstOverlay(void);
void mapIfClose(void);
void FUN_00234b30(void);

/* State 7, the quake: it hurts the party once, then shakes the player's position by a random offset per axis
 * whose amplitude decays. Retail inlines this (the state pointer is copied to r8 for it alone). */
static __inline void lmapMainUpdateQuake(LmapMainStateA *state)
{
    /* Declared first: retail's frame puts amplitude below reach (stack evidence); declared after reach, armcc swaps
     * the two slots. */
    f32 amplitude[3]; /* this frame's, in units */
    f32 reach[3] = { 0.6f, 0.6f, 0.6f }; /* the part of an amplitude past which an offset swings back */

    if (state->stateStep == 0) {
        AsdSnd3dPosition source;
        mapVectorScale((MapVector *)&source, &g_lmapScene->pose.targetPosition, 1.0f / 3.0f);
        soundActorStartOnFreeChannel(0x1000224, source);
        f32 damage = 3.0f;
        f32 chance = 15.0f;
        if (gameDataFlagTestBit(GAME_FLAG_HALF_QUAKE_DAMAGE)) {
            damage = 1.5f;
            chance = 7.5f;
        }
        FUN_0049f8a4(2, (s32)damage);
        partyTryInflictCondition(2, 5, (s32)chance);
        state->shakeFrames = QUAKE_FRAMES;
        state->shakeAmplitude[1] = 4000;
        state->shakeAmplitude[0] = 1600;
        state->shakeAmplitude[2] = 1600;
        state->shakeOffset[0] = 0.0f;
        state->shakeOffset[1] = 0.0f;
        state->shakeOffset[2] = 0.0f;
        state->stateStep++;
        state->stateTime = 0;
    } else if (state->stateStep == 1) {
        if (state->shakeFrames == 0) {
            g_lmapScene->pose.position.x = g_lmapScene->pose.targetPosition.x;
            g_lmapScene->pose.position.y = g_lmapScene->pose.targetPosition.y;
            g_lmapScene->pose.position.z = g_lmapScene->pose.targetPosition.z;
            lmapMainStateSetInline(LMAP_STATE_WALK);
        } else {
            amplitude[0] = (f32)state->shakeAmplitude[0] * 0.01f;
            amplitude[1] = (f32)state->shakeAmplitude[1] * 0.01f;
            amplitude[2] = (f32)state->shakeAmplitude[2] * 0.01f;
            for (s32 axis = 0; axis < 3; axis++) {
                if (amplitude[axis] != 0.0f) {
                    f32 step = randomGetNormalizedFloat() * 0.5f * amplitude[axis] + amplitude[axis] * 0.5f;
                    if (fabsf(state->shakeOffset[axis]) >= amplitude[axis] * reach[axis]) {
                        /* Far out: swing back toward the centre. */
                        if (state->shakeOffset[axis] <= 0.0f) {
                            state->shakeOffset[axis] += step;
                        } else {
                            state->shakeOffset[axis] -= step;
                        }
                    } else {
                        state->shakeOffset[axis] += (randomGetNormalizedFloat() - 0.5f) * step * 2.0f;
                    }
                    state->shakeOffset[axis] =
                        state->shakeOffset[axis] > -amplitude[axis] ? state->shakeOffset[axis] : -amplitude[axis];
                    state->shakeOffset[axis] =
                        state->shakeOffset[axis] > amplitude[axis] ? amplitude[axis] : state->shakeOffset[axis];
                }
            }
            s32 frames = state->shakeFrames;
            if (frames > 0) {
                state->shakeAmplitude[0] -= state->shakeAmplitude[0] / (frames + 5);
                state->shakeAmplitude[1] -= state->shakeAmplitude[1] / (frames + 5);
                state->shakeAmplitude[2] -= state->shakeAmplitude[2] / (frames + 5);
                state->shakeFrames = frames - 1;
            }
            g_lmapScene->pose.position.x = g_lmapScene->pose.targetPosition.x + state->shakeOffset[0];
            g_lmapScene->pose.position.y = g_lmapScene->pose.targetPosition.y + state->shakeOffset[1];
            g_lmapScene->pose.position.z = g_lmapScene->pose.targetPosition.z + state->shakeOffset[2];
        }
    }
}

/* The field map's per-frame state update: walking, the screen fades, a scripted move of the player, the quake
 * and the scripted map event. */
void lmapMainUpdateState(LmapMainStateA *state)
{
    FUN_002237a0();
    FUN_003254a0();
    switch (state->state) {
    case LMAP_STATE_WALK:
        FUN_003868dc(state);
        break;
    case LMAP_STATE_FADE_OUT:
        if (state->stateStep == 0) {
            state->unkC8Float = 1.0f;
            state->stateStep = 1;
            state->stateTime = 0;
            state->scaleA = 2.0f;
        } else if (state->stateStep == 1) {
            state->unkC8Float -= 1.0f / 30.0f;
            if (state->unkC8Float < 0.01f) {
                state->unkC8Float = 0.01f;
                state->stateStep = 2;
                state->stateTime = 0;
            }
        }
        break;
    case LMAP_STATE_FADE_IN:
        if (state->stateStep == 0) {
            state->unkC8Float = 0.0f;
            state->stateStep = 1;
            state->stateTime = 0;
            state->scaleA = 2.0f;
        } else if (state->stateStep == 1) {
            state->unkC8Float += 1.0f / 15.0f;
            if (state->unkC8Float > 1.0f) {
                state->unkC8Float = 1.0f;
                state->stateStep = 2;
                state->stateTime = 0;
            }
        } else if (state->stateStep == 2) {
            lmapMainStateSetInline(LMAP_STATE_WALK);
        }
        break;
    case LMAP_STATE_FADED:
        state->unkC8Float = 0.0f;
        break;
    case LMAP_STATE_MOVE:
    {
        MapVector *position = &g_lmapScene->pose.position;
        MapVector step;
        mapVectorScale(&step, &state->moveDirection, state->moveSpeed);
        mapVectorAdd(position, position, &step);
    }
        g_lmapScene->pose.targetPosition = g_lmapScene->pose.position;
        if (state->moveFrame == 0) {
            state->unk094 = 1;
            FUN_0031297c();
        }
        /* The map notice (mapIfQueueNotice) is queued thirty frames before the end, or on the second frame of a
         * short move. */
        if (state->moveFrames > 30 ? state->moveFrame == state->moveFrames - 30 : state->moveFrame == 1) {
            mapIfQueueNotice(g_gameState.mapId, g_gameState.areaId);
        }
        state->moveFrame++;
        if (state->moveFrame >= state->moveFrames) {
            g_lmapScene->pose.targetPosition = g_lmapScene->pose.position = state->moveEnd;
            lmapMainStateSetInline(LMAP_STATE_MOVED);
        }
        break;
    case LMAP_STATE_QUAKE:
        lmapMainUpdateQuake(state);
        break;
    case LMAP_STATE_EVENT:
        switch (state->stateStep) {
        case 0: {
            g_gameState.unk25D = 0;
            sub68OwnerCall9();
            MapIfSpawnPose pose;
            pose.x = g_lmapScene->pose.position.x;
            pose.y = g_lmapScene->pose.position.y;
            pose.z = g_lmapScene->pose.position.z;
            pose.heading = 0.0f;
            FUN_002d88e0(pose);
            g_lmapScene->pose.targetPosition = g_lmapScene->pose.position;
            messageSetScriptDisplayMode();
            mapPlaceSet(-1, -1, -1);
            g_gameState.entryValue = 0;
            strcpy(g_gameState.entryText, "scr_lmap1st");
            state->eventEntry = tableGroupFindEntryIndex(state->event.table, g_gameState.entryText);
            scrScriptProcessStartEntry(state->event.script, state->eventEntry);
            state->stateStep++;
            state->stateTime = 0;
            break;
        }
        case 1:
            if (state->stateTime == 2) {
                sysPlayVoice(0x1000219);
            }
            if (state->stateTime == 45) {
                sysPlayVoice(0x10000C9);
            }
            if (state->stateTime == 156) {
                sysPlayVoice(0x10000C8);
            }
            if (state->stateTime == 240) {
                sysPlayVoice(0x10002AA);
            }
            state->stateTime++;
            if (scrRunOpcodesStub(state->event.script) == 2 && (s32)state->stateTime > 240) {
                state->stateStep++;
                state->stateTime = 0;
            }
            break;
        case 2:
            state->stateTime++;
            if ((s32)state->stateTime > 90) {
                state->stateStep = 3;
                state->stateTime = 0;
            }
            break;
        case 3:
            mapIfReleaseSlot0AndReset();
            mapIfQueueNotice(g_gameState.mapId, g_gameState.areaId);
            state->stateStep++;
            state->stateTime = 0;
            break;
        case 4:
            state->stateStep = 5;
            state->stateTime = 0;
            break;
        case 5:
            mapIfReleaseFirstOverlay();
            sub68OwnerCall7();
            state->stateStep++;
            state->stateTime = 0;
            break;
        case 6:
            state->stateTime++;
            if ((s32)state->stateTime >= 10) {
                controllerUpdateWithIdleTimer((TimedController *)&state->obj);
                FUN_00234b30();
            }
            if (state->stateTime == 20) {
                mapIfClose();
            }
            if ((s32)state->stateTime > 30) {
                state->stateStep++;
                lmapMainStateSetInline(LMAP_STATE_WALK);
            }
            break;
        }
        break;
    }
}

} /* extern "C" */
