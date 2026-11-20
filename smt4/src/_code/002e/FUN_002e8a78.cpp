/* NON_MATCHING: the loop index and the record pointer take each other's register (r5/r4 here, r4/r5 in retail), the effect position loads its x after the y sum, and the scaled arm multiplies z first (retail x, y, z). */
#include "map/MapIfGlobals.h"
#include "map/mapDepart.h"
#include "AsdSDK/Source/Snd/SoundActorQueue.h"
#include "game/GameState.h"

extern "C" {
f32 mathDistanceBetweenPoints(MapVector from, MapVector to); // declcheck: local (util/MathFunctions.h declares six floats for its float callers; retail moves this caller's point as one by-value vector, as in mapSelectNearbyDeferredModel)

// Trigger the first nearby waiting map marker and place its appearance effect above the player.
void FUN_002e8a78(MapVector point)
{
    MapIfState *work = g_mapIf.state;
    for (s32 i = 0; i < 128; ++i) {
        MapIfRecord *record = &work->records[i];
        if (record->active &&
            (record->category == 29 || record->category == 38 ||
             record->category == 30 || record->category == 31 ||
             record->category == 37) && record->state == 6) {
            if (mathDistanceBetweenPoints(point, record->position) < 10.0f) {
                SoundActorQueuePosition position = { record->position.x, point.y + 120.0f, record->position.z };
                if (!g_gameState.inputBlocked) {
                    if (record->category == 38 || record->category == 37) {
                        position.x *= 1.0f / 3.0f;
                        position.y *= 1.0f / 3.0f;
                        position.z *= 1.0f / 3.0f;
                        soundActorStartOnFreeChannel(0x10001FF, position);
                    } else {
                        soundActorStartOnFreeChannel(0x10001FF, position);
                    }
                }
                record->state = 7;
                record->proximityTimer = 0;
                return;
            }
        }
    }
}
}
