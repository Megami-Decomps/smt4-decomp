/* NON_MATCHING: the bitfield result stores, the level-search loops and the slot-table scan are scheduled and merged differently from retail; the fusion result selection is the same. */
#include "common.h"
#include "shard/W6_W6Match5_DevilSort.h"
#include "shard/W5_W5Match2_UniteWork.h"
#include "battle/btlHelp.h"

/* The per-race level lists: the table of level bounds at 0x104 and the race index at 0x33. */
struct LevelLists {
    /* 0x000 */ u8 unk000[0x33];
    /* 0x033 */ u8 race;
    /* 0x034 */ u8 unk034[0xD0];
    /* 0x104 */ u16 *bounds;
};

struct PartySlotsView {
    u8 unk0000[0x90F0];
    u8 stock[0x18];
};

extern "C" {
u32 uniteChooseAvailableDevilAtLevel(u32 first, u32 second, u32 result, u32 level);
u32 demonFindClosestEligibleLevel(LevelLists *lists, s32 race, u32 level, s32 arg);
s32 itemGetFlagBit1(u16 id);
struct UnitRecordView {
    u8 unk00[0x46];
    u16 id;
};
UnitRecordView *gameGetUnitRecord(s32 index);
PartySlotsView *gameGetSlotTable(void);
s32 partyMemberFindById(u32 id);
u32 randNextInRange(u32 limit);
s32 dataTableChooseWeightedId(void);
u32 FUN_003c9b94(LevelLists *lists, u16 first, u16 second, UnitePairEntryIV *entry);

/* Picks the demon a fusion of `first` and `second` yields and stores it in `entry`: the pair's
 * normal result level plus the owned-level bonus, with a small chance of the special demon, a
 * level search over the race's eligible demons, and fallbacks above and below. Returns whether a
 * result was found. */
u32 FUN_003c92b8(LevelLists *lists, u16 first, u16 second, UnitePairEntryIV *entry)
{
    const u8 *levelBounds = dataTable05Sub0GetEntries();
    u32 chosenId;

    if (FUN_003c9b94(lists, first, second, entry) == 0) {
        return 0;
    }
    DevilSortRecord *baseRecord = devilGetRecord((u16)entry->resultId);
    u32 level = dataTableChooseWeightedId() + baseRecord->level;

    if (randNextInRange(99) < 5) {
        if (partyMemberFindById(0x218) == 0) {
            entry->resultId = 0x218;
            return 1;
        }
        for (u32 trial = 1; trial < level; trial = (trial + 1) & 0xFF) {
            chosenId = uniteChooseAvailableDevilAtLevel(first, second, baseRecord->id, trial);
            if (chosenId != 0) {
                entry->resultId = chosenId;
                return 1;
            }
        }
    }
    u32 chance = 25;

    for (u32 id = 0; id < 0x4B1; id++) {
        if (devilGetRecord((u16)id)->race == 0x33 && itemGetFlagBit1((u16)id) != 0) {
            chance = 10;
            break;
        }
    }
    if (randNextInRange(99) < chance) {
        u32 searchLevel = level;

        do {
            chosenId = demonFindClosestEligibleLevel(lists, 0x33, searchLevel, 1);
            DevilSortRecord *candidate = devilGetRecord((u16)chosenId);

            if (candidate->id != baseRecord->id && candidate->id != first && candidate->id != second
                && candidate->level <= searchLevel) {
                PartySlotsView *slots = gameGetSlotTable();
                s32 i;

                for (i = 0; i < 0x18; i++) {
                    if (slots->stock[i] < 0x18 && gameGetUnitRecord((s8)slots->stock[i])->id == candidate->id) {
                        break;
                    }
                }
                if (i == 0x18) {
                    if (chosenId != 0) {
                        entry->resultId = chosenId;
                        return 1;
                    }
                    break;
                }
            }
            searchLevel = (candidate->level - 1) & 0xFF;
        } while (lists->bounds[lists->race * 2 - 1] < searchLevel);
    }
    chosenId = uniteChooseAvailableDevilAtLevel(first, second, baseRecord->id, level);
    if (chosenId == 0) {
        for (u32 step = 1; step < 6; step = (step + 1) & 0xFFFF) {
            if (level + step <= levelBounds[7]) {
                chosenId = uniteChooseAvailableDevilAtLevel(first, second, entry->resultId, (step + level) & 0xFF);
                if (chosenId != 0) {
                    entry->resultId = chosenId;
                    return 1;
                }
                break;
            }
        }
        if ((s32)(level - baseRecord->level) < 1) {
            return 0;
        }
        chosenId = uniteChooseAvailableDevilAtLevel(first, second, entry->resultId, (level - 1) & 0xFF);
        if (chosenId == 0) {
            return 0;
        }
    }
    entry->resultId = chosenId;
    return 1;
}

}
