/* NON_MATCHING: retail reloads the final stat and materializes the unit base before the saved-record lookup. */
#include "battle/UnitInitialization.h"
#include "battle/btlUnit.h"
#include "gamedata/PlayerInitialization.h"
#include "gamedata/DevilRecord.h"
#include "shard/W7_W7Match2_PartyDamage.h"

struct SlotWorld;
struct UnitRecordIn;
struct SavedUnitRecord;

extern "C" {
void FUN_0033adf8(BtlPartyInitializationStateIV *world, u32 row);
PartyDamageSlotsIV *gameGetSlotTable();
const PlayerInitialRecordIV *gameGetPlayerData();
void btlInitializePlayerUnitData(u32 world, BtlUnitData *data, const PlayerInitialRecordIV *player);
void FUN_00255e38(SlotWorld *world, UnitRecordIn *record, s32 kind, s32 index, s32 extra);
SavedUnitRecord *saveResolvePartySlot(u32 slot);
u16 gameSlotFindByCategory(const SavedUnitRecord *record);
u32 randomGetLowerTenBits(u32 record, u32 index);
u32 randomGetUpperSixBits(u32 record, u32 index);

/* Seed the player and each occupied active-party slot into the battle's unit table. */
void FUN_003370ac(BtlPartyInitializationStateIV *world)
{
    if (world->resetRequested != 0) {
        FUN_0033adf8(world, world->resetRequested);
    }
    PartyDamageSlotsIV *slots = gameGetSlotTable();
    const PlayerInitialRecordIV *player = gameGetPlayerData();
    BtlEntryInitializationIV entry;
    btlInitializePlayerUnitData((u32)world, reinterpret_cast<BtlUnitData *>(&entry.unit), player);
    FUN_00255e38(reinterpret_cast<SlotWorld *>(world), reinterpret_cast<UnitRecordIn *>(&entry.unit), 0, 0, 0);
    for (u16 slot = 0; slot < 3; ++slot) {
        if (slots->active[slot] >= 0) {
            const SavedBattleInitialViewIV *saved = reinterpret_cast<const SavedBattleInitialViewIV *>(saveResolvePartySlot(slot));
            BtlUnitInitializationIV *unit = &entry.unit;
            unit->active = 2;
            unit->selection[2] = gameSlotFindByCategory(reinterpret_cast<const SavedUnitRecord *>(saved));
            unit->status = saved->id;
            unit->selection[0] = -1;
            unit->selection[1] = -1;
            unit->statMode = 0;
            unit->current.hp = saved->hp;
            unit->current.maximumHp = saved->maximumHp;
            unit->current.mp = saved->mp;
            unit->current.maximumMp = saved->maximumMp;
            for (s32 index = 0; index < 5; ++index) {
                unit->current.stats[index] = saved->stats[index];
            }
            unit->initial = unit->current;
            unit->points = saved->points;
            unit->pending[0] = 0;
            unit->pending[1] = 0;
            unit->enabled = saved->enabled;
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
            const DevilBattleInitialInfoIV *info = reinterpret_cast<const DevilBattleInitialInfoIV *>(devilGetRecord(unit->status));
            unit->percentage = info->percentage;
            if (info->direction == 1) {
                unit->direction = 1;
            } else if (info->direction == 4) {
                unit->direction = 0;
            } else if (info->direction == 5) {
                unit->direction = 2;
            }
            FUN_00255e38(reinterpret_cast<SlotWorld *>(world), reinterpret_cast<UnitRecordIn *>(&entry.unit), 0, slot + 1, 0);
        }
    }
}
}
