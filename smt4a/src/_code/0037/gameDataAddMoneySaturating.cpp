/* NON_MATCHING: retail uses `ldr r1, [r1, #4]` where armcc emits `ldr r2, [r1, #4]`. */
#include "common.h"

extern "C" {

struct SaveWork { u8 unk00000[0x27e90]; u32 money; };
struct GameBlocks { u32 unk00; SaveWork *work; };
extern GameBlocks g_gameDataBlocks;

void gameDataAddMoneySaturating(u32 amount)
{
    u32 money = g_gameDataBlocks.work->money + amount;
    g_gameDataBlocks.work->money = money > 9999999 ? 9999999 : money;
}

} /* extern "C" */
