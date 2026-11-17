/* NON_MATCHING: party-slot addressing, short-circuit compare scheduling and final zero-result register differ. */
#include "gamedata/SaveSlotRecord.h"
#include "shard/Shard0031.h"
#include "gamedata/PlayerDataBlock.h"
#include "code/Code0018.h"

extern "C" {
s32 FUN_003e0024();
s32 FUN_003e0154();
s32 FUN_003e0034();
s32 FUN_003e0164();
s32 gameSlotTableFindFree();
SlotTable *gameGetSlotTable();
s32 recordGetScaledMaximum(SlotRecordA *unit);
PartySlotA *partyGetSlot(u16 slot);

// Check whether the player, stored party, or support roster needs HP/MP/status recovery.
u32 FUN_004ced50()
{
    struct PlayerStatusView { u8 prefix[0x5E]; u16 status; };
    PartySlotA *player = reinterpret_cast<PartySlotA *>(gameGetPlayerData());
    s32 hp = FUN_003e0024();
    s32 maxHp = FUN_003e0154();
    s32 mp = FUN_003e0034();
    s32 maxMp = FUN_003e0164();
    if (hp < maxHp || mp < maxMp || reinterpret_cast<PlayerStatusView *>(player)->status != 0)
        return 1;
    s32 count = gameSlotTableFindFree();
    SlotTable *party = gameGetSlotTable();
    for (s32 index = 0; index < count; ++index) {
        if (party->slots[index] >= 0) {
            SlotRecordA *unit = gameGetSlotRecord(party->slots[index]);
            s32 hp = unit->hp;
            s32 maxHp = recordGetScaledMaximum(unit);
            if (hp < maxHp || unit->mp < unit->maxMp)
                return 1;
            if (unit->ailments & ~4)
                return 1;
        }
    }
    for (s32 index = 0; index < 12; ++index) {
        PartySlotA *unit = partyGetSlot((u16)index);
        if (partySlotIsOccupied(unit)) {
            s16 hp = unit->record.hp;
            if (hp < recordGetScaledMaximum(&unit->record))
                return 1;
            if (unit->record.mp < unit->record.maxMp || unit->record.ailments != 0)
                return 1;
        }
    }
    return 0;
}
}
