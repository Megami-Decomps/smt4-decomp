/* NON_MATCHING: only the third position float's load is scheduled differently: retail adds the position offset first
 * and loads it as `vldr s3, [r0, #8]` after the vldmia; this build folds it into `vldr s3, [r0, #36]` before.
 * (Wave 90: soundActorScalePosition with a named `const f32` 1/3 factor local is IDENTICAL, but that local is a
 * single-use named constant; with the literal factor it is 8 lines.) */
#include "AsdSDK/Source/Snd/SoundActorQueue.h"
#include "game/GameState.h"
#include "map/DeferredModels.h"
#include "map/MapIfGlobals.h"

extern "C" DeferredModelWork *g_deferredMapModels;

enum { MAP_MODEL_SELECTION_SOUND = 0x10001FD };

/* Restart the HUD's selection animation and sound at the selected map model. */
extern "C" void mapHudStartSelectionAnimation(s32 mode, s32 id)
{
    MapIfState *hud = g_mapIf.state;
    MapIfRecord *animation = &hud->primary;
    if (hud->mode == mode && animation->selectionModelId == id) {
        return;
    }
    hud->mode = (s8)mode;
    if (mode != 0) {
        animation->selectionModelId = id;
        if (g_gameState.mapId > 100) {
            /* The sound system works in thirds of map units. */
            MapVector world = g_deferredMapModels->entries[id].position;
            SoundActorQueuePosition position;
            position.x = world.x / 3.0f;
            position.y = world.y / 3.0f;
            position.z = world.z / 3.0f;
            soundActorStartOnFreeChannel(MAP_MODEL_SELECTION_SOUND, position);
        }
        animation->start.x = 0.0f;
        animation->start.y = 20.0f;
        animation->start.z = 0.0f;
        animation->progress = 0.0f;
        animation->angle = 0.0f;
        animation->current = animation->start;
    }
}
