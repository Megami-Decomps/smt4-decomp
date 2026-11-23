#include "classes/Obj4222ac.h"
#include "AsdSDK/Source/Snd/SoundActorQueue.h"
#include "game/GameState.h"

// Activate the effect and submit its scaled position unless the game is paused.
void Obj4222ac::start()
{
    flags |= 1;
    position = nodeVec3(0.0f, -500.0f, 0.0f);
    if (!g_gameState.suppressStep && !g_gameState.inputBlocked) {
        SoundActorQueuePosition sound = {
            basePosition.x * (1.0f / 3.0f),
            basePosition.y * (1.0f / 3.0f),
            basePosition.z * (1.0f / 3.0f)
        };
        eventSoundPlayByKind(id, 0, sound);
    }
}
