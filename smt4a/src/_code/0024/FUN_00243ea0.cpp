#include "common.h"

extern "C" {

void FUN_00292268(void);
s32 gameFlagIsSet(u32 id);

typedef struct Global5f0c7c {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 mode;
} Global5f0c7c;
extern Global5f0c7c g_battleViewState;

/* Runs FUN_00292268 when gameFlagIsSet(0x4D0) holds and the mode word is 1. */
void FUN_00243ea0(void)
{
    s32 flag;

    flag = gameFlagIsSet(0x4D0);
    if (((flag != 0) && (g_battleViewState.mode != 0)) && (g_battleViewState.mode == 1)) {
        FUN_00292268();
        return;
    }
}

} /* extern "C" */
