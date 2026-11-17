#include "common.h"
#include "gamedata/GamePlayerData.h"

extern "C" {

s32 gameDataFlagTestBit(u32 bit);

/* Returns whether the player's stock has a free slot among those unlocked: four, plus one per flag 0x77-0x7A, at most eight. */
u32 playerStockHasFreeSlot(void)
{
    PlayerDataA *player = gameGetPlayerData();
    s32 slots = 4;

    if (gameDataFlagTestBit(0x77)) {
        slots++;
    }
    if (gameDataFlagTestBit(0x78)) {
        slots++;
    }
    if (gameDataFlagTestBit(0x79)) {
        slots++;
    }
    if (gameDataFlagTestBit(0x7A)) {
        slots++;
    }
    if (slots > 8) {
        slots = 8;
    }
    for (s32 i = 0; i < slots; i++) {
        if (player->skills[i] == 0) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
