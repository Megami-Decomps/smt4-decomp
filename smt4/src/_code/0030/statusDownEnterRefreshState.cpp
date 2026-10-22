#include "common.h"

extern "C" {

typedef struct StatusDown {
    /* 0x0000 */ u8 unk0000[0x400];
    /* 0x0400 */ u32 state;
    /* 0x0404 */ u32 prevState;
    /* 0x0408 */ u8 unk0408[4];
    /* 0x040C */ u32 step;
    /* 0x0410 */ u8 unk0410[0x1F81];
    /* 0x2391 */ u8 flag;
} StatusDown;

extern StatusDown *g_statusDown; /* 0x44e190 */

extern int FUN_0026ae68(void);

/* Switches the status screen to state 6, remembering the previous state, and clears its flag after the refresh. */
void statusDownEnterRefreshState(void)
{
    StatusDown *status = g_statusDown;
    u32 previous;

    status->step = 0;
    previous = status->state;
    status->state = 6;
    status->prevState = previous;
    FUN_0026ae68();
    status->flag = 0;
}

} /* extern "C" */
