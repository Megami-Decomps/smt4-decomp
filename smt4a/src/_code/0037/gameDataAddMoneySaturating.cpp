/* NON_MATCHING: retail loads g_gameDataBlocks and the save work twice, reading the money at its direct offset and
 * writing it through a +0x88 body block (as FUN_002f5004 in IV); armcc folds the two loads into one address. */
#include "common.h"

extern "C" {

struct SaveWork { u8 unk00000[0x27e90]; u32 money; };
struct GameBlocks { u32 unk00; SaveWork *work; };
extern GameBlocks g_gameDataBlocks;

void gameDataAddMoneySaturating(u32 amount)
{
    u32 money = g_gameDataBlocks.work->money + amount;
    if (money > 9999999) {
        g_gameDataBlocks.work->money = 9999999;
    } else {
        g_gameDataBlocks.work->money = money;
    }
}

} /* extern "C" */
