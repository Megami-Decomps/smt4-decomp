#include "common.h"
extern "C" {
struct FlagWork { u8 unk00[0xC00]; struct { u8 unk00[0x1F4]; u32 state; f32 value; u8 active; } work; };
FlagWork *gameFlagsGetBlock(void);
/* Resets the game-flag work's ramp and pending state. */
void FUN_002b5c88(void) {
    FlagWork *work = gameFlagsGetBlock();
    work->work.state = 1;
    work->work.value = 0.0f;
    work->work.active = 0;
}
}
