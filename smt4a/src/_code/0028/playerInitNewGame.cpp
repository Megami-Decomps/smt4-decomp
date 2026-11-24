#include "gamedata/RosterUnlock.h"
#include "common.h"
#include <stdio.h>
#include <string.h>
#include "AsdSDK/AsdMemUtil.h"
#include "gamedata/GameFlags.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/SaveSlotTable.h"

/* unit-local (as in the IV twin playerInitNewGame): the starting equipment ids (seven, then a 0xFFFF
 * terminator), copied as one block. */
union InitialEquipmentA {
    u16 ids[8];
    u32 words[4];
};

extern "C" {

/* unit-local (as in the IV twin): the default player name and the format the player's display name is built with. */
struct DefaultPlayerTextsA {
    char name[15];
    char nameFormat[13];
};
extern const DefaultPlayerTextsA g_defaultPlayerTexts;
extern const InitialEquipmentA g_initialEquipment;

void gameWorldResetForNewGame(void);
void flagValueAdd(s32 flag, s32 amount);
void playerResetToStartingStats(s32 arg);
void FUN_003df7c4(s32 arg);
void appRefundAllPoints(void);
void gameDataBlocksClearSlots(void);
void saveNameBlockReset(void);

void appTryPurchase(s32 a, s32 b, s32 c);
void popupMarkNewlySeenEntries(s32 arg);

/* Sets up a new game when `loaded` is zero: the starting equipment, the player record and name,
 * the opening story flags and the starting unlocks. */
void playerInitNewGame(s32 loaded)
{
    gameWorldResetForNewGame();
    SaveSlotTableA *slots = gameGetSlotTable();

    if (loaded != 0) {
        return;
    }
    slots->money = 0;
    slots->count = 8;
    InitialEquipmentA equipment = g_initialEquipment;
    u32 index = 0;
    while (index < 7) {
        if (equipment.ids[index] != 0)
            flagValueAdd(equipment.ids[index], 1);
        ++index;
    }
    const DefaultPlayerTextsA *texts = &g_defaultPlayerTexts;
    PlayerDataA *player = gameGetPlayerData();
    sysMemClear(player, sizeof(*player));
    player->level = 1;
    player->alignment = 0;
    strncpy((char *)player->name, texts->name, sizeof(player->name));
    ((char *)player->name)[sizeof(player->name) - 1] = 0;
    playerResetToStartingStats(0);
    player->equipment[0] = equipment.ids[0];
    player->equipment[1] = equipment.ids[1];
    player->equipment[2] = equipment.ids[2];
    player->equipment[3] = equipment.ids[3];
    player->equipment[4] = equipment.ids[4];
    player->equipment[5] = equipment.ids[5];
    player->equipment[6] = equipment.ids[6];
    FUN_003df7c4(0);
    player->hp = player->maxHp;
    player->mp = player->maxMp;
    appRefundAllPoints();
    gameDataBlocksClearSlots();
    sprintf((char *)gameDataGetPlayerName(), texts->nameFormat);
    flagValueAdd(0x33F, 1);
    gameFlagUnlockEntryById(1);
    rosterAddUnit(1);
    saveNameBlockReset();
    gameFlagSetValue(0x52B, 1, 1);
    gameFlagSetValue(0x418, 0, 1);
    gameFlagSetValue(0x416, 1, 1);
    gameFlagSetValue(0x48E, 1, 1);
    gameFlagSetValue(0x556, 1, 1);
    gameFlagSetValue(0x557, 1, 1);
    gameFlagSetValue(0x555, 1, 1);
    gameFlagSetValue(0x4CA, 1, 1);
    gameFlagSetValue(0x49A, 1, 1);
    for (s32 flag = 0x400; flag <= 0x417; flag++) {
        gameFlagSetValue(flag, 1, 1);
    }
    gameFlagSetValue(0x403, 0, 1);
    gameFlagSetValue(0x401, 0, 1);
    gameFlagSetValue(0x406, 0, 1);
    gameFlagSetValue(0x40A, 0, 1);
    gameFlagSetValue(0x40B, 0, 1);
    gameFlagSetValue(0x40D, 0, 1);
    gameFlagSetValue(0x40E, 0, 1);
    gameFlagSetValue(0x40F, 0, 1);
    gameFlagSetValue(0x408, 0, 1);
    gameFlagSetValue(0x464, 0, 1);
    appTryPurchase(0x18, 1, 0);
    appTryPurchase(0x2E, 1, 0);
    appTryPurchase(0x76, 1, 0);
    popupMarkNewlySeenEntries(1);
}

}
