/* NON_MATCHING: compiler places the shared zero-HP store in the demon branch rather than the player branch. */
#include "shard/W4_Match6_BtlEntry.h"
#include "shard/Shard0031.h"
#include "gamedata/PlayerDataBlock.h"

extern "C" {
void unitStateClearEventBits(u16 *flags);
SlotTable *gameGetSlotTable();
BtlEquip *gameGetUnitRecord(s32 index);

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
            if (entry->equipA != NULL) {
                unitStateClearEventBits(&reinterpret_cast<PlayerEventView *>(entry->equipA)->flags);
                BtlEquip *unit = entry->equipA;
                if (reinterpret_cast<PlayerEventView *>(unit)->flags & 2)
                    unit->hp = 0;
            } else if (entry->equipB != NULL) {
                unitStateClearEventBits(&reinterpret_cast<DemonEventView *>(entry->equipB)->flags);
                BtlEquip *unit = entry->equipB;
                if (reinterpret_cast<DemonEventView *>(unit)->flags & 2)
                    unit->hp = 0;
            } else if (entry->reserve != NULL) {
                unitStateClearEventBits(&reinterpret_cast<DemonEventView *>(entry->reserve)->flags);
            }
        }
    }
    PartyCountView *party = reinterpret_cast<PartyCountView *>(gameGetSlotTable());
    for (s32 index = -1; index < party->count; ++index) {
        if (index < 0) {
            unitStateClearEventBits(&reinterpret_cast<PlayerEventView *>(gameGetPlayerData())->flags);
        } else {
            BtlEquip *unit = gameGetUnitRecord(index);
            if (unit != NULL)
                unitStateClearEventBits(&reinterpret_cast<DemonEventView *>(unit)->flags);
        }
    }
}
}
