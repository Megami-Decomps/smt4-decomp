/* NON_MATCHING: pause checks are predicated together and the scaled vector uses a different VFP load/register schedule. */
#include "classes/Obj4222ac.h"

extern "C" {
extern EffectGamePauseFlags g_gameState;
void FUN_001e296c(u32 handle, u32 option, f32 x, f32 y, f32 z);
}

// Activate the effect and submit its scaled position unless the game is paused.
extern "C" void FUN_003952b0(Obj4222ac *self)
{
    self->flags |= 1;
    self->position[0] = 0;
    self->position[1] = -500;
    self->position[2] = 0;
    if (!g_gameState.paused348 && !g_gameState.paused18) {
        Obj4222acMotion *motion = (Obj4222acMotion *)self;
        FUN_001e296c(motion->handle, 0, motion->position[0] * (1.0f / 3.0f),
                     motion->position[1] * (1.0f / 3.0f), motion->position[2] * (1.0f / 3.0f));
    }
}
