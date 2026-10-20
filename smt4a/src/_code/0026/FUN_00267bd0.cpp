/* Returns the signed byte at +0x10 of the global state, or 0 when its field at +8 is clear. */
#include "common.h"

extern "C" {

typedef struct State {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 active;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ s8 value;
} State;

extern State *DAT_0057f578;

s32 FUN_00267bd0(void)
{
    s32 value;

    if (DAT_0057f578->active != 0) {
        value = DAT_0057f578->value;
    } else {
        value = 0;
    }
    return value;
}

}
