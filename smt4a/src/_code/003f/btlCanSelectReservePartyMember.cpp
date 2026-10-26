/* NON_MATCHING: only the first mask/entry load order and AND destination registers differ; all remaining instructions match. */
#include "common.h"
#include "battle/btlUnit.h"
#include "shard/W5_W5Match5_GameSaveViews.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BattleUnit.h"

struct PartyReserveMasks {
    u8 unk00[8];
    u64 primary;
    u64 alternate;
};
struct PartyReserveSlots {
    u8 unk0000[0x1c88];
    s8 slots[0x1b];
    u8 count; /* 0x1ca3 */
};

extern "C" {
extern PartyReserveMasks DAT_00573c90;
extern u32 g_btlScriptUnit;
s32 gameFlagIsSet(u32 flag);
PartyReserveSlots *gameGetSlotTable();

// Check whether the enabled reserve-party feature has another eligible slot for this combatant.
u32 btlCanSelectReservePartyMember(const BtlCombatantEntryA *entry)
{
    if (!gameFlagIsSet(0x401)) {
        return 0;
    }
    if (entry != NULL) {
        u64 flags = entry->flags;
        if ((DAT_00573c90.primary & flags) != 0) {
            BtlCombatantEntryA *active = reinterpret_cast<BtlCombatantEntryA *>(reinterpret_cast<BtlUnitA *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)))->params);
            if (active != NULL && (active->flags & DAT_00573c90.primary) != 0) {
                PartyReserveSlots *party = gameGetSlotTable();
                for (s32 index = 0; index < party->count; ++index) {
                    if (party->slots[index] >= 0 && gameGetSlotRecord(party->slots[index]) != NULL &&
                        party->slots[index] >= 0) {
                        return 1;
                    }
                }
            }
        } else if ((flags & DAT_00573c90.alternate) != 0) {
            s16 id = static_cast<s16>(entry->id);
            if (id != 0) {
                PartyReserveSlots *party = gameGetSlotTable();
                for (s32 index = 0; index < party->count; ++index) {
                    if (party->slots[index] >= 0) {
                        SlotRecord *record = gameGetSlotRecord(party->slots[index]);
                        if (record != NULL && record->entryId != id && party->slots[index] >= 0) {
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}
}
