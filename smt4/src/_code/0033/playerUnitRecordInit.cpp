#include "common.h"
#include "AsdSDK/AsdMemUtil.h"
#include "gamedata/GamePlayerData.h"

extern "C" {

char *strncpy(char *destination, const char *source, u32 count);
void unitApplyLevelGrowth(PlayerDataIV *player, s32 levels, s32 growStats);
void playerInitializeStats(s32 value);
void playerRecalcStatsFromEquipment(s32 value);

// Builds the player's record: level, name and equipment, grown up from level 1.
void playerUnitRecordInit(s32 level, const char *name, const PlayerEquipment *equipment)
{
    PlayerDataIV *player = gameGetPlayerData();
    memClear(player, sizeof(PlayerDataIV));
    player->level = level;
    player->alignment = 0;
    strncpy(player->name, name, 18);
    player->name[17] = 0;
    playerInitializeStats(0);
    if (level > 1) {
        unitApplyLevelGrowth(player, (s8)(level - 1), 1);
    }
    player->equipped.weapon = equipment->weapon;
    player->equipped.gun = equipment->gun;
    player->equipped.bullets = equipment->bullets;
    player->equipped.head = equipment->head;
    player->equipped.body = equipment->body;
    player->equipped.legs = equipment->legs;
    player->equipped.accessory = equipment->accessory;
    playerRecalcStatsFromEquipment(0);
    player->hp = player->maxHp;
    player->mp = player->maxMp;
}

} /* extern "C" */
