#include "common.h"

extern "C" {

typedef struct StateTransition {
    /* 0x0 */ s32 current;
    /* 0x4 */ s32 previous;
} StateTransition;

typedef struct StatusDown {
    /* 0x000 */ u8 unk000[0x400];
    /* 0x400 */ StateTransition state;
    /* 0x408 */ u8 unk408[4];
    /* 0x40C */ s32 timer;
} StatusDown;

extern StatusDown *g_statusDown;
int FUN_0026ae68(void);

static __inline void stateTransitionSet(StateTransition *transition, s32 next)
{
    transition->previous = transition->current;
    transition->current = next;
}

/* Switches the status screen to state 4, remembering the previous state, and restarts its timer. */
void statusDownEnterState4(void)
{
    g_statusDown->timer = 0;
    stateTransitionSet(&g_statusDown->state, 4);
    FUN_0026ae68();
}

} /* extern "C" */
