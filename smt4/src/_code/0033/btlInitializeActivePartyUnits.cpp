#include "battle/UnitInitialization.h"
#include "battle/btlUnit.h"
#include "gamedata/PlayerInitialization.h"
#include "gamedata/NkmBaseRecord.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/SaveSlotTableIV.h"

struct SlotWorld;
struct UnitRecordIn;

extern "C" {
void FUN_0033adf8(BtlPartyInitializationStateIV *world, u32 row);
void btlInitializePlayerUnitData(u32 world, BtlUnitData *data, const PlayerDataIV *player);
void FUN_00255e38(SlotWorld *world, UnitRecordIn *record, s32 kind, s32 index, s32 extra);
u32 randomGetLowerTenBits(u32 record, u32 index);
u32 randomGetUpperSixBits(u32 record, u32 index);

/* Seed the player and each occupied active-party slot into the battle's unit table. */
void btlInitializeActivePartyUnits(BtlPartyInitializationStateIV *world)
{
    if (world->resetRequested != 0) {
        FUN_0033adf8(world, world->resetRequested);
    }
    SaveSlotTableIV *slots = gameGetSlotTable();
    const PlayerDataIV *player = gameGetPlayerData();
    BtlEntryInitializationIV entry;
    btlInitializePlayerUnitData((u32)world, (BtlUnitData *)&entry.unit, player);
    FUN_00255e38((SlotWorld *)world, (UnitRecordIn *)&entry.unit, 0, 0, 0);
    for (u16 slot = 0; slot < 3; ++slot) {
        if (slots->active[slot] >= 0) {
            BtlUnitInitializationIV *unit = &entry.unit;
            const StatBlock *saved = saveResolvePartySlot(slot);
            unit->active = 2;
            unit->selection[2] = gameSlotFindByCategory(saved);
            unit->status = saved->id;
            unit->selection[0] = -1;
            unit->selection[1] = -1;
            unit->statMode = 0;
            BtlInitialStatSetIV *current = &unit->current;
            current->hp = saved->hp;
            current->maximumHp = saved->maxHp;
            current->mp = saved->mp;
            current->maximumMp = saved->maxMp;
            for (s32 index = 0; index < 5; ++index) {
                current->stats[index] = saved->effectiveStats[index];
            }
            unit->initial = *current;
            unit->points = saved->ailments;
            unit->pending[0] = 0;
            unit->pending[1] = 0;
            unit->enabled = saved->level;
            unit->counter = 0;
            for (s32 index = 0; index < 14; ++index) {
                unit->effects[index] = 0;
            }
            for (s32 index = 0; index < 18; ++index) {
                unit->encoded[index].value = randomGetLowerTenBits((u32)saved, (u8)index);
                unit->encoded[index].kind = randomGetUpperSixBits((u32)saved, (u8)index);
                unit->initialEncoded[index].value = randomGetLowerTenBits((u32)saved, (u8)index);
                unit->initialEncoded[index].kind = randomGetUpperSixBits((u32)saved, (u8)index);
            }
            const DevilBattleInitialInfoIV *info = (const DevilBattleInitialInfoIV *)nkmBaseGetRecord(unit->status);
            unit->percentage = info->percentage;
            if (info->direction == 1) {
                unit->direction = 1;
            } else if (info->direction == 4) {
                unit->direction = 0;
            } else if (info->direction == 5) {
                unit->direction = 2;
            }
            FUN_00255e38((SlotWorld *)world, (UnitRecordIn *)&entry.unit, 0, slot + 1, 0);
        }
    }
}
} /* extern "C" */
