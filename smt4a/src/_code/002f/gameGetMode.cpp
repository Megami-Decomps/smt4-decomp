#include "common.h"

extern "C" {

typedef struct State {
    u8 unk0000[0x2014];
    s8 mode; /* 0x2014 */
} State;

typedef struct Globals {
    u32 unk00;
    State *state; /* 0x04 */
} Globals;

extern Globals g_gameGlobals;

s32 gameGetMode(void)
{
    return g_gameGlobals.state->mode;
}

} /* extern "C" */
