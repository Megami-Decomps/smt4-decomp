#include "common.h"

extern "C" {

typedef struct StateTransition {
    /* 0x0 */ s32 current;
    /* 0x4 */ s32 previous;
} StateTransition;

typedef struct StatusDown {
    /* 0x000 */ u8 unk000[0x518];
    /* 0x518 */ StateTransition state;
    /* 0x520 */ u8 unk520[4];
    /* 0x524 */ s32 timer;
} StatusDown;

extern StatusDown *g_statusDown;

static __inline void stateTransitionSet(StateTransition *transition, s32 next)
{
    transition->previous = transition->current;
    transition->current = next;
}

/* Switches the status screen to state 1, remembering the previous state, and restarts its timer. */
void statusDownEnterState1(void)
{
    g_statusDown->timer = 0;
    stateTransitionSet(&g_statusDown->state, 1);
}

} /* extern "C" */
