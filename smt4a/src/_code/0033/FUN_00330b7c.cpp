#include "common.h"

extern "C" {

struct SaveRecord { u8 unk00[0x4e]; u16 value; };
struct SaveWork { u8 unk0000[0x5f5c]; SaveRecord records[1280]; };
struct GameBlocks { u32 unk00; SaveWork *work; };
extern GameBlocks g_gameDataBlocks;

void FUN_00330b7c(void)
{
    s32 i;
    SaveWork *work = g_gameDataBlocks.work;
    for (i = 0; i < 1280; i++) {
        SaveRecord *record = &work->records[i];
        record->value = 0;
    }
}

} /* extern "C" */
