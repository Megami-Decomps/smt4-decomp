/* NON_MATCHING: support-roster comparison layout and the saved zero returned on the all-healthy path differ. */
#include "code/Code003e.h"
#include "gamedata/SaveSlotRecord.h"
#include "shard/Shard0031.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/GameDataAccess_Shard004B.h"
#include "code/Code0018.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {
s32 FUN_003e0154();
s32 FUN_003e0034();
s32 playerGetMaxMp();
s32 gameSlotTableFindFree();

/* Checks whether the player, stored party, or support roster needs HP, MP or ailment recovery. */
u32 partyNeedsRecovery()
{
    const PlayerDataA *player = gameGetPlayerData();
    s32 hp = FUN_003e0024();
    s32 maxHp = FUN_003e0154();
    s32 mp = FUN_003e0034();
    s32 maxMp = playerGetMaxMp();
    if (hp < maxHp || mp < maxMp || player->ailments != 0)
        return 1;
    s32 count = gameSlotTableFindFree();
    const s8 *party = gameGetSlotTable()->party;
    for (s32 index = 0; index < count; ++index) {
        if (party[index] >= 0) {
            const SlotRecordA *unit = gameGetSlotRecord(party[index]);
            s32 hp = unit->hp;
            s32 maxHp = recordGetScaledMaximum(unit);
            s32 mp = unit->mp;
            s32 maxMp = unit->maxMp;
            if (hp < maxHp || mp < maxMp)
                return 1;
            if (unit->ailments & ~4)
                return 1;
        }
    }
    for (s32 index = 0; index < 12; ++index) {
        PartySlotA *unit = partyGetSlot((u16)index);
        if (partySlotIsOccupied(unit)) {
            s32 hp = unit->record.hp;
            s32 maxHp = recordGetScaledMaximum(&unit->record);
            s32 mp = unit->record.mp;
            s32 maxMp = unit->record.maxMp;
            if (maxHp > hp || maxMp > mp || unit->record.ailments != 0)
                return 1;
        }
    }
    return 0;
}
} /* extern "C" */
