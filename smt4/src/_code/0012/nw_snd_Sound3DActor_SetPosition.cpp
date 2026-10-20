#include "common.h"

extern "C" {

typedef struct Sound3DActor {
    /* 0x00 */ u8 unk00[0x68];
    /* 0x68 */ f32 position[3];
    /* 0x74 */ f32 velocity[3];
    /* 0x80 */ u8 positionSet;
} Sound3DActor;

/* Stores the new position and, unless it is the first one, the velocity (difference to the previous position). */
void nw_snd_Sound3DActor_SetPosition(Sound3DActor *actor, f32 *position)
{
    f32 x;
    f32 y;

    if (actor->positionSet == 0) {
        actor->velocity[0] = position[0] - actor->position[0];
        actor->velocity[1] = position[1] - actor->position[1];
        actor->velocity[2] = position[2] - actor->position[2];
    }
    x = position[0];
    y = position[1];
    actor->position[2] = position[2];
    actor->position[0] = x;
    actor->position[1] = y;
    actor->positionSet = 0;
}

} /* extern "C" */
