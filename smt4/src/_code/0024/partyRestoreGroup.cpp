#include "shard/Shard0034.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/SaveSlotTableIV.h"
#include "gamedata/GameDataAccess_Smt4.h"
#include "gamedata/UnitRecordAccess.h"
extern "C" {

/* playerSyncPair2AOnce, inlined: refills the player's HP and MP. */
static __inline void playerRefillHpMp(void)
{
    PlayerDataIV *player = gameGetPlayerData();

    player->hp = player->maxHp;
    player->mp = player->maxMp;
}

/* FUN_002954bc, inlined: refills a unit's HP and MP; false without a unit. */
static __inline bool unitRefillHpMp(StatBlock *unit)
{
    if (unit != NULL) {
        unit->hp = unit->maxHp;
        unit->mp = unit->maxMp;
    }
    return unit != NULL;
}

/* Restores a party group (0/1: the stock, 2/3: the active party; 0, 2 and 3 include the player): clears
 * the members' ailments and refills their HP and MP. Dead members (ailment bit 1) come back only with
 * `revive`; members with ailment bit 10 (units: or bit 2) are left alone. */
void partyRestoreGroup(u32 group, s32 revive)
{
    if ((group == 0 || group == 2 || group == 3) &&
        (revive || (gameGetPlayerData()->ailments & 2) == 0) &&
        (gameGetPlayerData()->ailments & 0x400) == 0) {
        PlayerDataIV *player = gameGetPlayerData();
        player->ailments = 0;
        playerRefillHpMp();
        player->hp = player->maxHp;
        player->mp = player->maxMp;
    }
    s32 count;
    s8 *slots;
    switch (group) {
    case 0:
    case 1:
        count = gameCountUnits();
        slots = gameGetSlotTable()->stock;
        break;
    case 2:
    case 3:
        count = 3;
        slots = gameGetSlotTable()->active;
        break;
    default:
        return;
    }
    for (s32 index = 0; index < count; ++index) {
        if (slots[index] >= 0) {
            StatBlock *unit = gameGetUnitRecord(slots[index]);
            if ((revive || (unit->ailments & 2) == 0) &&
                (unit->ailments & 0x400) == 0 && (unit->ailments & 4) == 0 && unit != NULL) {
                unit->ailments = 0;
                unitRefillHpMp(unit);
            }
        }
    }
}
}
