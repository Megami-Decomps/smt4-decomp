#include "gamedata/MapSaveBlockA.h"
#include "shard/W5_W5Match7_EntrySort.h"

extern "C" {

/* Whether bit `bit` of the game flag block's array is set. */
u8 FUN_0033aa6c(int bit)
{
    MapSaveBlockA *area = gameFlagsGetBlock();

    const s32 wordIndex = bit / 32;
    const s32 bitIndex = bit % 32;
    const u32 word = area->bits14A8[wordIndex];
    return (word & (1u << bitIndex)) != 0;
}

} /* extern "C" */
