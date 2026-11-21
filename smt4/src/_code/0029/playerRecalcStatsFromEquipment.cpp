/* NON_MATCHING: close: armcc rewrites the 999 clamps as cmp #1000 (retail compares against a register-held 999), the equipment switch has no default in retail, and the parameter-block copy is 16 bytes in retail (built also spills a second block); register assignment differs */
#include "gamedata/PlayerInitialization.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/EquipmentRecord.h"

/* Hit points, magic points and the five stats as stored back to back. */
struct StatValues {
    u16 hp;
    u16 mp;
    s16 stats[5];
};

/* The growth parameters data table 9 supplies. */
struct GrowthParameters {
    u8 unk00[16];
};

struct GrowthValues {
    u16 first;
    u16 second;
};

/* Settings handed to FUN_002dada4: four words and a halfword. */
struct LimitWords {
    u32 words[4];
};

struct StatLimits {
    LimitWords base;
    u16 equipExtra;
};

extern "C" {

void playerGetGrowthParameters(GrowthParameters *info);
void statMaximumsAtLevel(s32 level, GrowthValues *output, const GrowthParameters *parameters);
void FUN_002dada4(StatValues *stats, const StatLimits *limits, s32 mode);

/* The equipped item of one slot. */
static __inline u16 equipmentGet(const PlayerDataIV *player, s32 slot)
{
    switch (slot) {
    case 0:
        return player->equipment[0];
    case 1:
        return player->equipment[1];
    case 2:
        return player->equipment[2];
    case 3:
        return player->equipment[3];
    case 4:
        return player->equipment[4];
    case 5:
        return player->equipment[5];
    case 6:
        return player->equipment[6];
    }
    return 0;
}

/* Keeps a stat within 1..999. */
static __inline s16 statClamp(s16 value)
{
    return 999 < value ? 999 : (value < 1 ? 1 : value);
}

/* Recomputes a player's current stats from his base stats plus equipment bonuses, clamps them and re-derives the
 * maximum hit points and magic points. */
void playerRecalcStatsFromEquipment(PlayerDataIV *player)
{
    StatValues *current;
    s16 hpBonus = 0;
    s16 mpBonus = 0;
    s32 slot;
    GrowthParameters parameters;
    GrowthParameters parametersCopy;
    StatLimits limits;
    EquipmentRecord *record;

    if (player == NULL) {
        player = gameGetPlayerData();
    }
    current = (StatValues *)&player->maxHp;
    *current = *(const StatValues *)&player->baseStats;
    for (slot = 0; slot < 7; slot++) {
        u16 id = equipmentGet(player, slot);

        if (id != 0) {
            record = itemTableGetEquipmentRecord(id);
            if (record != NULL) {
                player->stats[0] += record->statBonus[0];
                player->stats[1] += record->statBonus[1];
                player->stats[2] += record->statBonus[2];
                player->stats[3] += record->statBonus[3];
                player->stats[4] += record->statBonus[4];
                hpBonus += record->hpBonus;
                mpBonus += record->mpBonus;
            }
        }
    }
    player->stats[0] = statClamp(player->stats[0]);
    player->stats[2] = statClamp(player->stats[2]);
    player->stats[3] = statClamp(player->stats[3]);
    player->stats[4] = statClamp(player->stats[4]);
    player->stats[1] = statClamp(player->stats[1]);
    playerGetGrowthParameters(&parameters);
    parametersCopy = parameters;
    statMaximumsAtLevel(player->level, (GrowthValues *)current, &parametersCopy);
    limits.base = *(const LimitWords *)player->skills;
    player->maxHp += hpBonus;
    player->maxMp += mpBonus;
    record = itemTableGetEquipmentRecord(player->equipment[6]);
    limits.equipExtra = record != NULL ? record->modifierId : 0;
    FUN_002dada4(current, &limits, 9);
    player->hp = (s16)player->hp <= (s16)current->hp ? player->hp : current->hp;
    player->mp = (s16)player->mp <= (s16)current->mp ? player->mp : current->mp;
}

} /* extern "C" */
