#include "common.h"

extern "C" {

struct Work { u8 unk0000[0x1390]; u32 values[1]; u8 unk1394[0xc7c]; u8 pending; u8 unk2011[6]; u8 active; u8 unk2018[0x1a]; u8 ready; u8 unk2033[0x7d]; u8 dirty; };
struct Globals { u32 unk00; Work *work; };
extern Globals g_gameGlobals;
void FUN_002cb55c(u32 *data, u32 first, u32 second);

void gameGlobalsQueueValues(u32 first, u32 second)
{
    Work *work = g_gameGlobals.work;
    work->pending = 1;
    FUN_002cb55c(work->values, first, second);
    work->active = 0;
    work->dirty = 1;
    work->ready = 1;
}

} /* extern "C" */
