#include <stdio.h>
#include "gamedata/GamePlayerData.h"
#include "gamedata/SaveSlotTableIV.h"
#include <string.h>
#include "AsdSDK/AsdMemUtil.h"

union InitialEquipment {
    u16 ids[8];
    u32 words[4];
};
extern "C" {
void gameWorldResetForNewGame(void);
void saveFlagSetOrAddCounter(u32 item, u32 count);
void playerInitializeStats(u32 mode);
void playerRecalcStatsFromEquipment(u32 slot);
void FUN_001dd930(void);
char *gameDataGetPlayerName(void);
extern const InitialEquipment DAT_00404378;
/* The default player name and the format the player's display name is built with. */
struct DefaultPlayerTexts {
    char name[11];
    char nameFormat[13];
};
extern const DefaultPlayerTexts DAT_00404360;

// Initialize a new game's player record, starting equipment, and inventory capacity.
void playerInitNewGame(s32 mode)
{
    gameWorldResetForNewGame();
    SaveSlotTableIV *slots = gameGetSlotTable();
    if (mode == 0) {
        slots->money = 0;
        slots->stockCount = 8;
        InitialEquipment equipment = DAT_00404378;
        u32 index = 0;
        while (index < 7) {
            if (equipment.ids[index] != 0)
                saveFlagSetOrAddCounter(equipment.ids[index], 1);
            ++index;
        }
        const DefaultPlayerTexts *texts = &DAT_00404360;
        PlayerDataIV *player = gameGetPlayerData();
        memClear(player, sizeof(*player));
        player->level = 1;
        player->alignment = 0;
        strncpy(player->name, texts->name, sizeof(player->name));
        player->name[sizeof(player->name) - 1] = 0;
        playerInitializeStats(0);
        player->equipment[0] = equipment.ids[0];
        player->equipment[1] = equipment.ids[1];
        player->equipment[2] = equipment.ids[2];
        player->equipment[3] = equipment.ids[3];
        player->equipment[4] = equipment.ids[4];
        player->equipment[5] = equipment.ids[5];
        player->equipment[6] = equipment.ids[6];
        playerRecalcStatsFromEquipment(0);
        player->hp = player->maxHp;
        player->mp = player->maxMp;
        FUN_001dd930();
        sprintf(gameDataGetPlayerName(), texts->nameFormat);
        saveFlagSetOrAddCounter(0x370, 1);
    }
}
}
