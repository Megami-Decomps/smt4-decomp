#include "common.h"

extern "C" {

typedef struct Timer {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ s32 delay;
} Timer;

typedef struct Actor {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ Timer timer;
} Actor;

typedef struct ActorState {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ Actor *actor;
    /* 0x10 */ u8 unk10[0xC];
    /* 0x1C */ u32 phase;
} ActorState;

s32 randNextInRange(u32 range);

/* Gives the actor's timer a random delay of 150..449 and resets the phase. */
void FUN_003957e0(ActorState *state)
{
    Timer *timer = &state->actor->timer;

    timer->delay = randNextInRange(300) + 150;
    state->phase = 0;
}

} /* extern "C" */
