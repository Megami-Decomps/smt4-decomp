/* NON_MATCHING: only the entry differs: the build loads g_gameState's address before the push and the actor before the
 * suppress-step flag; retail loads it after `mov r5, r0` and reads the flag first. */
#include "map/AmbientMovement.h"
#include "map/LmapGlobals.h"
#include "AsdSDK/Source/Snd/SoundActorQueue.h"
#include "util/MathFunctions.h"
#include "util/Random.h"
#include "game/GameState.h"

extern "C" {

void FUN_0039568c(AmbientMovementWork *work)
{
    AmbientMovementTransform *movement = &work->actor->movement;
    if (g_gameState.suppressStep || g_gameState.inputBlocked) {
        return;
    }
    if (work->state != 0) {
        if (work->state == 1) {
            FUN_0039560c(work);
            mapVectorAdd(&movement->position, &movement->position, &work->velocity);
        }
    } else {
        if (g_gameState.map.unk5C)
            return;
        if (movement->frame % 15 != 0 || randNextInRange(100) >= 30)
            return;
        const MapVector *center = &g_lmapScene->pose.position;
        f32 distance = mathDistanceBetweenPoints(movement->position.x, movement->position.y, movement->position.z,
                                                  center->x, center->y, center->z);
        if (g_gameState.map.unk54 > distance) {
            work->speed = g_gameState.map.unk58;
            if (movement->frame <= 60) {
                movement->frame = 60;
            }
            SoundActorQueuePosition position = {
                movement->position.x * (1.0f / 3.0f),
                movement->position.y * (1.0f / 3.0f),
                movement->position.z * (1.0f / 3.0f)
            };
            eventSoundPlayByKind(movement->sound, 1, position);
            ++work->state;
        }
    }
}
}
