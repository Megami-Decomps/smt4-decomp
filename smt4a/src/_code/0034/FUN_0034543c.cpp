/* NON_MATCHING: retail uses `bhi 28` where armcc emits `bhi 24`. */
#include "common.h"

extern "C" {

struct SaveRecord { u8 unk00[0x4e]; u16 value; };
struct SaveWork { u8 unk0000[0x5f0c]; SaveRecord records[1281]; };
struct GameBlocks { u32 unk00; SaveWork *work; };
extern GameBlocks g_gameDataBlocks;

void FUN_0034543c(u32 index)
{
    if (index <= 1280) {
        g_gameDataBlocks.work->records[index].value = 0;
    }
}

} /* extern "C" */
