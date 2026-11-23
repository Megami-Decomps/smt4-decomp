/* NON_MATCHING: the twin of smt4a FUN_003401a4, written alike; the switches, the block layout, the calls, the
 * frame and the data accesses are retail's. What differs is mostly register allocation: retail keeps the state in
 * r2 with 2 in r0 and 1 in r1 (the build: r0, r1, r2), 0 in r6 and the 0x4C00 base in r9 (the build: sl and r6),
 * and 2.0 in s18 (the build: s19). It also compares the quake's reach limit as `limit <= |offset|` (vcmpe limit,
 * |offset|; bhi) where the build tests `|offset| >= limit`, and its ending falls into its own epilogue. */
#include <math.h>
#include <string.h>
#include "game/GameState.h"
#include "map/lmapMain.h"
#include "map/LmapMainGlobals.h"
#include "script/scrScriptProcess.h"
#include "code/Code0026_Smt4.h"
#include "AsdSDK/Source/Snd/SoundActorQueue.h"

enum {
    /* LmapMainState::state */
    LMAP_STATE_WALK = 1,
    LMAP_STATE_FADE_OUT = 2,
    LMAP_STATE_FADE_IN = 3,
    LMAP_STATE_FADED = 4,
    LMAP_STATE_MOVE = 5,
    LMAP_STATE_MOVED = 6,
    LMAP_STATE_QUAKE = 7,
    LMAP_STATE_EVENT = 8,
    QUAKE_FRAMES = 15
};

extern "C" {
void mapIfTimerStep(void);
void FUN_002fb988(LmapMainState *state);
void FUN_0021dfbc(void);
u32 FUN_002c8684(u32 id);
void mapIfQueueNotice(int id, s32 arg);
void partyApplyPercentHealthDamage(s32 group, s32 percentage);
void partyApplyStatusMask(s32 group, s32 bit, s32 probability);
f32 randomGetNormalizedFloat(void);
void naviRefreshMainBlock(void);
void naviMainStartStateTimer(void);
void mapFastMarkerCreate(f32 x, f32 y, f32 z, f32 heading);
void messageSetConfirmDisplayMode(void);
void mapDepartSetTarget(s32 group, s32 map, u32 target);
s32 tableGroupFindEntryIndex(TableGroupHeader *table, const char *name);
u32 scrScriptProcessStartEntry(ScriptProcess *process, s32 entryIndex);
s32 soundPlaySeUnpanned(u32 id);
void mapIfResetCounter(void);
void FUN_002dfea4(void);
void mapIfClose(void);
void FUN_00274798(void);

/* State 7, the quake: it hurts the party once, then shakes the player's position by a random offset per axis
 * whose amplitude decays. Retail inlines this (the state pointer is copied to r8 for it alone). */
static __inline void lmapMainUpdateQuake(LmapMainState *state)
{
    /* Declared first: retail's frame puts amplitude below reach (stack evidence); declared after reach, armcc swaps
     * the two slots. */
    f32 amplitude[3]; /* this frame's, in units */
    f32 reach[3] = { 0.6f, 0.6f, 0.6f }; /* the part of an amplitude past which an offset swings back */

    if (state->stateStep == 0) {
        AsdSnd3dPosition source;
        mapVectorScale((MapVector *)&source, &g_lmapScene->pose.targetPosition, 1.0f / 3.0f);
        soundActorStartOnFreeChannel(0x1000186, source);
        partyApplyPercentHealthDamage(2, 3);
        partyApplyStatusMask(2, 5, 15);
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
void lmapMainUpdateState(LmapMainState *state)
{
    mapIfTimerStep();
    switch (state->state) {
    case LMAP_STATE_WALK:
        FUN_002fb988(state);
        break;
    case LMAP_STATE_FADE_OUT:
        if (state->stateStep == 0) {
            state->unkC8Float = 1.0f;
            state->stateStep = 1;
            state->stateTime = 0;
            state->unkC4 = 2.0f;
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
            state->unkC4 = 2.0f;
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
            state->angleReset = 1;
            FUN_0021dfbc();
        }
        /* The map notice (mapIfQueueNotice) is queued thirty frames before the end, or on the second frame of a
         * short move. */
        if (state->moveFrames > 30 ? state->moveFrame == state->moveFrames - 30 : state->moveFrame == 1) {
            if (FUN_002c8684(state->mapId)) {
                mapIfQueueNotice(g_gameState.mapId, g_gameState.areaId);
            }
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
        case 0:
            g_gameState.map.unk29 = 0;
            naviRefreshMainBlock();
            mapFastMarkerCreate(g_lmapScene->pose.position.x, g_lmapScene->pose.position.y,
                                g_lmapScene->pose.position.z, 0.0f);
            g_lmapScene->pose.targetPosition = g_lmapScene->pose.position;
            messageSetConfirmDisplayMode();
            mapDepartSetTarget(-1, -1, -1);
            g_gameState.entryValue = 0;
            strcpy(g_gameState.entryText, "scr_lmap1st");
            state->eventEntry = tableGroupFindEntryIndex(state->event.table, g_gameState.entryText);
            scrScriptProcessStartEntry(state->event.script, state->eventEntry);
            state->stateStep++;
            state->stateTime = 0;
            break;
        case 1:
            if (state->stateTime == 2) {
                soundPlaySeUnpanned(0x1000179);
            }
            if (state->stateTime == 45) {
                soundPlaySeUnpanned(0x1000202);
            }
            if (state->stateTime == 156) {
                soundPlaySeUnpanned(0x1000201);
            }
            if (state->stateTime == 240) {
                soundPlaySeUnpanned(0x10001FE);
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
            mapIfResetCounter();
            mapIfQueueNotice(g_gameState.mapId, g_gameState.areaId);
            state->stateStep++;
            state->stateTime = 0;
            break;
        case 4:
            state->stateStep = 5;
            state->stateTime = 0;
            break;
        case 5:
            FUN_002dfea4();
            naviMainStartStateTimer();
            state->stateStep++;
            state->stateTime = 0;
            break;
        case 6:
            state->stateTime++;
            if ((s32)state->stateTime >= 10) {
                FUN_002648e8((Timer *)&state->obj);
                FUN_00274798();
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
