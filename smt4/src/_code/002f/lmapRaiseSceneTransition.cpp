/* NON_MATCHING: for a map without secondary collision, retail copies the zero area argument into
 * the secondary map argument; the build emits a second immediate zero. */
#include "map/LmapMainGlobals.h"
#include "game/GameState.h"

extern "C" {
void mapCollisionRelease();
void mapCollisionLoad(s32 map, u32 entry, s32 secondaryMap, u32 mode);
void fieldPlayerMoveByStick(LmapMainState *state);
void lmapUpdateMapBgm();
void FUN_00281784();
void mapInitializeStoryMarkerEffects(u32 map);
void objSetBaseAndValue(LmapObj *object, s32 base, u32 value);
void entryListCollectMatches(LmapObj *object);

/* Raises the scene over thirty frames, then restores story-marker tracking on completion. */
u32 lmapRaiseSceneTransition()
{
    LmapMainState *state = g_lmapMainState;
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
        mapCollisionLoad(state->mapId, state->areaId,
            state->mapId != 101 ? 0 : 101, state->mapId != 101 ? 0 : 10);
        state->entryRaise.phase = 1;
        state->entryRaise.frame = 0;
        break;
    case 1:
        fieldPlayerMoveByStick(state);
        ++state->entryRaise.frame;
        g_lmapScene->pose.position.y = state->entryRaise.start.y +
            (state->entryRaise.end.y - state->entryRaise.start.y) * (f32)state->entryRaise.frame * (1.0f / liftFrames);
        if (state->entryRaise.frame >= liftFrames) {
            g_gameState.inputBlocked = 0;
            g_gameState.map.transitionCompleted = 1;
            state->entryRaiseAlpha = 1.0f;
            state->entryRaiseDirty = 1;
            state->entryRaise.phase = 2;
        }
        break;
    case 2:
        fieldPlayerMoveByStick(state);
        break;
    case 3:
    case 4:
        break;
    case 5:
        state->cameraFocusLift = 200.0f;
        lmapUpdateMapBgm();
        state = g_lmapMainState;
        state->external = 0;
        state->obj.flags &= ~2;
        FUN_00281784();
        mapInitializeStoryMarkerEffects(state->mapId);
        objSetBaseAndValue(&state->obj, state->mapId - 100, state->areaId);
        entryListCollectMatches(&state->obj);
        g_gameState.inputBlocked = 0;
        g_gameState.map.transitionCompleted = 1;
        break;
    }
    return 0;
}
} /* extern "C" */
