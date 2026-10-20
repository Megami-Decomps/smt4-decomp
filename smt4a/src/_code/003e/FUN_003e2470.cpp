#include "common.h"

extern "C" {

/* State machine record: phase plus two counters reset on every phase change. */
typedef struct {
    u32 state;      /* 0x00 */
    u8 unk04[8];
    u32 counter0c;  /* 0x0c */
    u32 counter10;  /* 0x10 */
} PhaseState;

typedef struct Actor Actor;

int FUN_003e1114(PhaseState *phase, Actor *actor);
int FUN_003ebec8(Actor *actor);
int valueAtF0IsReady(Actor *actor);
int FUN_003f0f40(Actor *actor);
int FUN_003f1334(Actor *actor);
int loadSlotIsLoaded(u32 id);

/* Enters `state` and restarts its counters. */
static __inline void phaseEnter(PhaseState *phase, u32 state)
{
    phase->state = state;
    phase->counter10 = 0;
    phase->counter0c = 0;
}

/* Runs the phase 4 -> 5 -> 6 transition for `actor`, then hands over to FUN_003e1114. */
void FUN_003e2470(PhaseState *phase, Actor *actor)
{
    if (loadSlotIsLoaded(0x4e) == 0) {
        return;
    }
    FUN_003ebec8(actor);
    if (valueAtF0IsReady(actor) != 0) {
        phase->state = 4;
        phase->counter10 = 0;
        phase->counter0c = 0;
        FUN_003f1334(actor);
        phase->state = 5;
        phase->counter10 = 0;
        phase->counter0c = 0;
        if (FUN_003f0f40(actor) == 0) {
            return;
        }
    }
    phaseEnter(phase, 6);
    FUN_003e1114(phase, actor);
}

} /* extern "C" */
