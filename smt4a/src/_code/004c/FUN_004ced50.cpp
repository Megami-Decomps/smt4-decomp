/* NON_MATCHING: party-slot addressing, short-circuit compare scheduling and final zero-result register differ. */
#include "shard/W6_W6Match1_PartySlot.h"
#include "shard/Shard0031.h"

extern "C" {
PartySlotA *gameGetPlayerData();
s32 FUN_003e0024();
s32 FUN_003e0154();
s32 FUN_003e0034();
s32 FUN_003e0164();
s32 gameSlotTableFindFree();
SlotTable *gameGetSlotTable();
PartySlotA *gameGetSlotRecord(s32 slot);
s32 recordGetScaledMaximum(PartySlotA *unit);
PartySlotA *FUN_003e4d68(u16 slot);
s32 FUN_00187168(PartySlotA *unit);

// Check whether the player, stored party, or support roster needs HP/MP/status recovery.
u32 FUN_004ced50()
{
    struct PlayerStatusView { u8 prefix[0x5E]; u16 status; };
    PartySlotA *player = gameGetPlayerData();
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
            PartySlotA *unit = gameGetSlotRecord(party->slots[index]);
            s32 hp = unit->unk2A;
            s32 maxHp = recordGetScaledMaximum(unit);
            if (hp < maxHp || (s16)unit->unk2C < (s16)unit->unk10)
                return 1;
            if (unit->unk60 & ~4)
                return 1;
        }
    }
    for (s32 index = 0; index < 12; ++index) {
        PartySlotA *unit = FUN_003e4d68((u16)index);
        if (FUN_00187168(unit)) {
            s16 hp = unit->unk2A;
            if (hp < recordGetScaledMaximum(unit))
                return 1;
            if ((s16)unit->unk2C < (s16)unit->unk10 || unit->unk60 != 0)
                return 1;
        }
    }
    return 0;
}
}
