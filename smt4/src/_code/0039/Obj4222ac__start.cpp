/* NON_MATCHING: one scheduling difference: retail loads g_gameState's address after the vstmia of the position (the build before it) and so uses r1 where the build uses r2 for the flags. */
#include "classes/Obj4222ac.h"
#include "AsdSDK/Source/Snd/SoundActorQueue.h"
#include "game/GameState.h"

// Activate the effect and submit its scaled position unless the game is paused.
void Obj4222ac::start()
{
    flags |= 1;
    position[0] = 0;
    position[1] = -500;
    position[2] = 0;
    if (!g_gameState.suppressStep && !g_gameState.inputBlocked) {
        SoundActorQueuePosition sound = {
            basePosition.x * (1.0f / 3.0f),
            basePosition.y * (1.0f / 3.0f),
            basePosition.z * (1.0f / 3.0f)
        };
        eventSoundPlayByKind(id, 0, sound);
    }
}
