/* NON_MATCHING: loop/record and saved X/Z registers are swapped; effect vector load/multiply scheduling differs. */
#include "map/MapIfGlobals.h"
#include "map/mapDepart.h"
#include "AsdSDK/Source/Snd/SoundActorQueue.h"
#include "game/GameState.h"
#include "util/MathFunctions.h"

extern "C" {

// Trigger the first nearby waiting map marker and place its appearance effect above the player.
void FUN_002e8a78(f32 x, f32 y, f32 z)
{
    MapIfState *work = g_mapIf.state;
    for (s32 i = 0; i < 128; ++i) {
        MapIfRecord *record = &work->records[i];
        if (record->active &&
            (record->category == 29 || record->category == 38 ||
             record->category == 30 || record->category == 31 ||
             record->category == 37) && record->state == 6) {
            if (mathDistanceBetweenPoints(x, y, z, record->position.x, record->position.y, record->position.z) < 10.0f) {
                SoundActorQueuePosition position = { record->position.x, y + 120.0f, record->position.z };
                if (!g_gameState.inputBlocked) {
                    if (record->category == 38 || record->category == 37) {
                        position.x *= 1.0f / 3.0f;
                        position.y *= 1.0f / 3.0f;
                        position.z *= 1.0f / 3.0f;
                    }
                    soundActorStartOnFreeChannel(0x10001FF, position);
                }
                record->state = 7;
                record->proximityTimer = 0;
                return;
            }
        }
    }
}
}
