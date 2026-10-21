/* NON_MATCHING: retail uses `mov r0, #0` where armcc emits `push {r4}`. */
#include "common.h"

extern "C" {

struct SaveRecord { u8 unk00[0x4e]; u16 value; };
struct SaveWork { u8 unk0000[0x5f5c]; SaveRecord records[1280]; };
struct GameBlocks { u32 unk00; SaveWork *work; };
extern GameBlocks g_gameDataBlocks;

void FUN_00330b7c(void)
{
    SaveWork *work = g_gameDataBlocks.work;
    for (s32 i = 0; i < 1280; i++) {
        work->records[i].value = 0;
    }
}

} /* extern "C" */
