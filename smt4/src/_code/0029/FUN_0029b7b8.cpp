/* NON_MATCHING: inlined ownership search retains an extra ID base, spills the unit pointer and assigns different saved registers. */
#include "shard/W7_W7Match2_PartyDamage.h"
#include "shard/W6_W6Match3_ContentWordList.h"
#include "gamedata/UnitStats.h"

extern "C" {
PartyDamageSlotsIV *gameGetSlotTable(void);
const ContentWordList *dataTable54FindById(u32 id);
s32 gameCountUnits(void);
StatBlock *gameGetUnitRecord(s32 slot);
s32 flagWordTestBit(const StatBlock *unit, u32 bit);
s32 FUN_0029ea68(u16 id);
u32 arrayContainsU16(u16 *sources, s32 count, u32 mode);
}

static __inline bool findOwnedSource(const PartyDamageSlotsIV *party,
                                     const ContentWordList *list, s32 index, u16 *sources)
{
    for (s32 slot = 0; slot < gameCountUnits(); ++slot) {
        if (party->stock[slot] >= 0) {
            StatBlock *unit = gameGetUnitRecord(party->stock[slot]);
            if (!flagWordTestBit(unit, 10) && !flagWordTestBit(unit, 2) && unit->id == list->ids[index]) {
                sources[index] = 1;
                return true;
            }
        }
    }
    return false;
}

// Classify selected unit IDs as owned or otherwise available, then validate the set.
extern "C" u32 FUN_0029b7b8(u32, u32 listId, u16 *sources)
{
    s32 count = 0;
    PartyDamageSlotsIV *party = gameGetSlotTable();
    const ContentWordList *list = dataTable54FindById(listId);
    if (list == NULL) {
        return 0;
    }
    u32 *words = reinterpret_cast<u32 *>(sources);
    for (s32 index = 0; index < 6; ++index) {
        words[index] = 0;
    }
    for (s32 index = 0; index < 12; ++index) {
        if (list->ids[index] != 0) {
            if (!findOwnedSource(party, list, index, sources)) {
                if (sources[index] == 0 && FUN_0029ea68(list->ids[index])) {
                    sources[index] = 2;
                }
            }
            ++count;
        }
    }
    return arrayContainsU16(sources, count, 0) ^ 1;
}
