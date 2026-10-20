/* Passes the handle at +0x1c of the global state to FUN_0013b3f4 (a tail call). */
#include "common.h"

extern "C" {

struct State00471a70 {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1c */ u32 handle;
};

extern State00471a70 g_nngxState;

void FUN_0013b3f4(u32 handle);

void FUN_00129b04(void)
{
    FUN_0013b3f4(g_nngxState.handle);
}

}
