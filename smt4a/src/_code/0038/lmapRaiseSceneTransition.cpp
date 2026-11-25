/* NON_MATCHING: the height preload matches. The secondary collision arguments, marker reload
 * order, and idle/default return placement still differ. */
#include "map/LmapMainGlobals.h"
#include "game/GameStateA.h"
extern "C" {
void mapCollisionRelease(void);
void mapCollisionLoad(s32 map, u32 variant, u32 specialMap, u32 mode);
void FUN_0033feb8(LmapMainStateA *state);
void lmapUpdateMapBgm(void);
void FUN_00244ac8(void);
void mapIfResetRecords(void);
void FUN_00364740(s32 map, u32 variant);
void lmapUpdateEngineRecordNavigation(void);
void stateSetterSetFromBase(LmapObj *object, s32 map, u32 variant);
void fieldBuildAreaPlacementList(LmapObj *object);

/* Raises the scene over thirty frames, then restores story-marker tracking on completion. */
u32 lmapRaiseSceneTransition(void)
{
    LmapMainStateA *state = g_lmapMainState;
    const f32 endHeight = 800.0f;
    const s32 liftFrames = 30;
    switch (state->entryRaise.phase) {
    case 0:
        state->entryRaise.start = g_lmapScene->pose.position;
        state->entryRaise.end = state->entryRaise.start;
        state->entryRaise.end.y = endHeight;
        state->entryRaiseAlpha = 0.0f;
        state->entryRaiseDirty = 1;
        state->areaId = 99;
        g_gameState.areaId = 99;
        mapCollisionRelease();
        mapCollisionLoad(state->mapId, state->areaId, state->mapId != 101 ? 0 : 101, state->mapId != 101 ? 0 : 10);
        state->entryRaise.phase = 1;
        state->entryRaise.frame = 0;
        break;
    case 1:
        FUN_0033feb8(state);
        ++state->entryRaise.frame;
        g_lmapScene->pose.position.y = state->entryRaise.start.y +
            (state->entryRaise.end.y - state->entryRaise.start.y) * (f32)state->entryRaise.frame * (1.0f / liftFrames);
        if (state->entryRaise.frame >= liftFrames) {
            g_gameState.inputBlocked = 0;
            g_gameState.transitionCompleted = 1;
            state->entryRaiseAlpha = 1.0f;
            state->entryRaiseDirty = 1;
            state->entryRaise.phase = 2;
        }
        break;
    case 2:
        FUN_0033feb8(state);
        return 0;
    case 3:
    case 4:
        return 0;
    case 5:
        state->cameraFocusLift = 200.0f;
        lmapUpdateMapBgm();
        state = g_lmapMainState;
        state->external = 0;
        state->obj.flags &= ~2;
        FUN_00244ac8();
        {
            s32 map = state->mapId;
            LmapMainStateA *current = g_lmapMainState;
            mapIfResetRecords();
            FUN_00364740(map, current->areaId);
        }
        lmapUpdateEngineRecordNavigation();
        stateSetterSetFromBase(&state->obj, state->mapId - 100, state->areaId);
        fieldBuildAreaPlacementList(&state->obj);
        g_gameState.inputBlocked = 0;
        g_gameState.transitionCompleted = 1;
        break;
    }
    return 0;
}
} /* extern "C" */
