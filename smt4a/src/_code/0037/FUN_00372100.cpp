/* NON_MATCHING: retail uses `ldr r3, [r1, #4]` where armcc emits `mov r3, r0`. */
#include "common.h"

extern "C" {

struct GameWork {
    /* 0x0000 */ u8 unk0000[0x19d0];
    /* 0x19d0 */ u32 values[1];
};
struct GameGlobals { u32 unk00; GameWork *work; };
extern GameGlobals g_gameGlobals;
void FUN_002cb55c(u32 *values, s32 first, s32 second);

void FUN_00372100(s32 first, s32 second)
{
    FUN_002cb55c(g_gameGlobals.work->values, first, second);
}

} /* extern "C" */
