#include "battle/BtlEntry.h"
#include "battle/btlMain.h"
#include "shard/Shard0031.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/UnitRecordAccess.h"

extern "C" {
void unitStateClearEventBits(u16 *flags);
SlotTable *gameGetSlotTable();

// Clear transient event state, retaining KO state and its zero-HP consequence.
void FUN_0033a670(BtlMainState *battle)
{
    // These event fields and the count lie past the ends of the shared prefix types.
    struct PlayerEventView { u8 prefix[0x72]; u16 flags; };
    struct DemonEventView { u8 prefix[0x44]; u16 flags; };
    struct PartyCountView { u8 prefix[0x910B]; u8 count; };
    for (s32 index = 0; index < BTL_ENTRY_COUNT; ++index) {
        BtlEntry *entry = &battle->entries[index];
        if (entry != NULL && (entry->flags & BTL_ENTRY_FLAG_ACTIVE) &&
            !(entry->flags & BTL_ENTRY_FLAG_BLOCKED) && !(entry->flags & BTL_ENTRY_FLAG_PRESENT)) {
            if (entry->data.equipA != NULL) {
                unitStateClearEventBits(&reinterpret_cast<PlayerEventView *>(entry->data.equipA)->flags);
                BtlEquip *unit = entry->data.equipA;
                if (!(reinterpret_cast<PlayerEventView *>(unit)->flags & 2))
                    continue;
                unit->hp = 0;
            } else if (entry->data.equipB != NULL) {
                unitStateClearEventBits(&reinterpret_cast<DemonEventView *>(entry->data.equipB)->flags);
                BtlEquip *unit = entry->data.equipB;
                if (!(reinterpret_cast<DemonEventView *>(unit)->flags & 2))
                    continue;
                unit->hp = 0;
            } else if (entry->data.reserve != NULL) {
                unitStateClearEventBits(&reinterpret_cast<DemonEventView *>(entry->data.reserve)->flags);
            }
        }
    }
    PartyCountView *party = reinterpret_cast<PartyCountView *>(gameGetSlotTable());
    for (s32 index = -1; index < party->count; ++index) {
        if (index < 0) {
            unitStateClearEventBits(&gameGetPlayerData()->ailments);
        } else {
            BtlEquip *unit = reinterpret_cast<BtlEquip *>(gameGetUnitRecord(index));  /* battle code views unit records as BtlEquip */
            if (unit != NULL)
                unitStateClearEventBits(&reinterpret_cast<DemonEventView *>(unit)->flags);
        }
    }
}
}
