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

extern Globals DAT_00588fd0;

s32 FUN_002f036c(void)
{
    return DAT_00588fd0.state->mode;
}

} /* extern "C" */
