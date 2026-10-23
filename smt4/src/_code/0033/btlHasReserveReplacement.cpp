#include "shard/W4_W4Match2_BtlUnits.h"
#include "battle/btlUnit.h"

// The count lies beyond the existing party-slot prefix view.
struct ReservePartyView {
    /* 0x0000 */ u8 unk0000[0x90F0];
    /* 0x90F0 */ s8 stock[24];
    /* 0x9108 */ s8 active[3];
    /* 0x910B */ u8 count;
};
extern "C" {
extern u32 g_btlScriptUnit;
BtlUnit* btlUnitGet(u32 id);
BtlUnitLink* gameGetUnitRecord(s32 slot);
ReservePartyView* gameGetSlotTable(void);

// Check whether the selected combatant can be replaced by a different reserve unit.
u32 btlHasReserveReplacement(const BtlUnitEntry* entry)
{
    if (entry != NULL) {
        if (entry->flags & 2) {
            BtlUnit* actor = btlUnitGet(g_btlScriptUnit);
            if (actor->params != NULL && (*(u32*)actor->params & 2)) {
                ReservePartyView* party = gameGetSlotTable();
                for (s32 index = 0; index < party->count; ++index) {
                    if (party->stock[index] >= 0 && gameGetUnitRecord(party->stock[index]) != NULL &&
                        party->stock[index] >= 0)
                        return 1;
                }
            }
        } else if (entry->flags & 8) {
            s32 currentId = (s16)entry->groupId;
            if (currentId == 0)
                return 0;
            ReservePartyView* party = gameGetSlotTable();
            for (s32 index = 0; index < party->count; ++index) {
                if (party->stock[index] >= 0) {
                    BtlUnitLink* unit = gameGetUnitRecord(party->stock[index]);
                    if (unit != NULL && unit->id != currentId && party->stock[index] >= 0)
                        return 1;
                }
            }
        }
    }
    return 0;
}
}
