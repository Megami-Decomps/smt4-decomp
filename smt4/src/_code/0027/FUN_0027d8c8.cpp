/* Returns 1 if the global state's flag at +0x1F4DC is set or FUN_002c09d0(0x528) reports true, else 0. */
#include "common.h"

extern "C" {

typedef struct State {
    /* 0x00000 */ u8 unk00000[0x1F4DC];
    /* 0x1F4DC */ s32 flag;
} State;

typedef struct StateHolder {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ State *state;
} StateHolder;

extern StateHolder g_gameDataBlocks;

extern s32 FUN_002c09d0(u32 id);

s32 FUN_0027d8c8(void)
{
    s32 result;

    if (g_gameDataBlocks.state->flag != 0) {
        return 1;
    }
    result = FUN_002c09d0(0x528);
    if (result != 0) {
        return 1;
    }
    return result;
}

}
