/* NON_MATCHING: only the zero constant's register/placement differs (retail loads `mov r1,#0` after the table pointer into r2; the build loads it into r2 first). */
#include "common.h"

extern "C" {

struct SaveRecord { u8 unk00[0x4e]; u16 value; };
struct SaveWork { u8 unk0000[0x5f0c]; SaveRecord records[1281]; };
struct GameBlocks { u32 unk00; SaveWork *work; };
extern GameBlocks g_gameDataBlocks;

void FUN_0034543c(u32 index)
{
    if (index > 1280) {
        return;
    }
    SaveWork *work = g_gameDataBlocks.work;
    SaveRecord *record = &work->records[index];
    record->value = 0;
}

} /* extern "C" */
