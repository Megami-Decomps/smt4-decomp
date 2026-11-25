/* NON_MATCHING: the loop index and record pointer exchange registers; the by-value position is saved in a different VFP move order. */
#include "map/MapIfGlobals.h"
#include "map/mapDepart.h"
#include "AsdSDK/Source/Snd/SoundActorQueue.h"
#include "game/GameState.h"

extern "C" {
f32 mathDistanceBetweenPoints(MapVector from, MapVector to); // declcheck: local (util/MathFunctions.h declares six floats for its float callers; retail moves this caller's point as one by-value vector, as in mapSelectNearbyDeferredModel)

/* Triggers the first nearby waiting map marker and places its sound above the player. */
void mapIfActivateNearbyMarkerWithSound(MapVector point)
{
    MapIfState *work = g_mapIf.state;
    for (s32 i = 0; i < 128; ++i) {
        MapIfRecord *record = &work->records[i];
        if (!record->active) {
            continue;
        }
        s32 category = record->category;
        if (!(category == 29 || category == 38 || category == 30 || category == 31 || category == 37)) {
            continue;
        }
        if (record->state != 6 || !(mathDistanceBetweenPoints(point, record->position) < 10.0f)) {
            continue;
        }
        SoundActorQueuePosition position = {record->position.x, record->position.y, record->position.z};
        position.y = point.y + 120.0f;
        if (!g_gameState.inputBlocked) {
            if (record->category == 38 || record->category == 37) {
                soundActorStartOnFreeChannel(0x10001FF, soundActorScalePosition(position, 1.0f / 3.0f));
            } else {
                soundActorStartOnFreeChannel(0x10001FF, position);
            }
        }
        record->state = 7;
        record->proximityTimer = 0;
        return;
    }
}
} /* extern "C" */
