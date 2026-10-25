/* NON_MATCHING: pause checks are predicated together and the scaled vector uses a different VFP load/register schedule. */
#include "classes/Obj4222ac.h"
#include "AsdSDK/Source/Snd/SoundActorQueue.h"

extern "C" {
extern EffectGamePauseFlags g_gameState;
}

// Activate the effect and submit its scaled position unless the game is paused.
extern "C" void _ZN9Obj4222ac5startEv(Obj4222ac *self)
{
    self->flags |= 1;
    self->position[0] = 0;
    self->position[1] = -500;
    self->position[2] = 0;
    if (!g_gameState.paused348 && !g_gameState.paused18) {
        Obj4222acMotion *motion = (Obj4222acMotion *)self;
        SoundActorQueuePosition position = {
            motion->position[0] * (1.0f / 3.0f),
            motion->position[1] * (1.0f / 3.0f),
            motion->position[2] * (1.0f / 3.0f)
        };
        eventSoundPlayByKind(motion->handle, 0, position);
    }
}
