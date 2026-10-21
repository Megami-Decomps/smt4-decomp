#include "common.h"

extern "C" {

struct GameWork {
    /* 0x0000 */ u8 unk0000[0x137c];
    /* 0x137c */ s8 state;
};
struct GameGlobals {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ GameWork *work;
};
extern GameGlobals g_gameGlobals;

s32 gameGlobalsGetState(void)
{
    GameWork *work = g_gameGlobals.work;
    return work != NULL ? work->state : 0;
}

} /* extern "C" */
