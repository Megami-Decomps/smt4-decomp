/* NON_MATCHING: retail uses `bcs 30` where armcc emits `bcs 2c`. */
#include "common.h"

extern "C" {

struct Record { u8 data[100]; };
struct SaveWork { u8 unk00000[0x2720c]; Record records[32]; };
struct GameBlocks { u32 unk00; SaveWork *work; };
extern GameBlocks g_gameDataBlocks;
void rt_aeabi_memclr(void *data, u32 size);

void FUN_0035b0a4(u32 index)
{
    if (index < 32) {
        rt_aeabi_memclr(&g_gameDataBlocks.work->records[index], sizeof(Record));
    }
}

} /* extern "C" */
