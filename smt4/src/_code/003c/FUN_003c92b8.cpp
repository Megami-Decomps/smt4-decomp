/* NON_MATCHING: 145 lines. Written with one result (retail keeps `found` in a stack slot and stores 1 on the shared
 * success tail) and the fallbacks tested on the chosen id, which armcc jump-threads into retail's branches. Remaining:
 * the callee-saved registers of lists, the base record, the level and the chosen id (retail r9, r7, r8, sl; here sl,
 * r8, r9, r7), the result's zero stored before the first call in retail, and the bitfield store's mask constants. */
#include "common.h"
#include "shard/W6_W6Match5_DevilSort.h"
#include "camp/Unite/UniteWork.h"
#include "battle/btlHelp.h"
#include "util/Random.h"
#include "gamedata/UnitRecordAccess.h"

/* The per-race level lists: the table of level bounds at 0x104 and the race index at 0x33. */
struct LevelLists {
    /* 0x000 */ u8 unk000[0x33];
    /* 0x033 */ u8 race;
    /* 0x034 */ u8 unk034[0xD0];
    /* 0x104 */ u16 *bounds;
};

struct PartySlotsView {
    u8 unk0000[0x90F0];
    s8 stock[0x18];
};

extern "C" {
u32 uniteChooseAvailableDevilAtLevel(u32 first, u32 second, u32 result, u32 level);
u16 demonFindClosestEligibleLevel(LevelLists *lists, s32 race, u32 level, s32 arg);
s32 itemGetFlagBit1(u16 id);
PartySlotsView *gameGetSlotTable(void);
s32 partyMemberFindById(u32 id);
s32 dataTableChooseWeightedId(void);
u32 FUN_003c9b94(LevelLists *lists, u16 first, u16 second, UnitePairEntryIV *entry);

/* Picks the demon a fusion of `first` and `second` yields and stores it in `entry`: the pair's
 * normal result level plus a random bonus, with a small chance of the special demon (0x218), a
 * level search over the race 0x33 demons the party does not hold, and fallbacks above and below.
 * Returns whether a result was found. */
u32 FUN_003c92b8(LevelLists *lists, u16 first, u16 second, UnitePairEntryIV *entry)
{
    const u8 *levelBounds = dataTable05Sub0GetEntries();
    u32 found = 0;

    if (FUN_003c9b94(lists, first, second, entry) != 0) {
        NkmBaseRecord *baseRecord = nkmBaseGetRecord((u16)entry->resultId);
        u8 level = dataTableChooseWeightedId() + baseRecord->level;
        u32 chosenId = 0;

        if (randNextInRange(99) < 5) {
            if (partyMemberFindById(0x218) == 0) {
                chosenId = 0x218;
            } else {
                for (u8 trial = 1; trial < level; trial++) {
                    chosenId = uniteChooseAvailableDevilAtLevel(first, second, baseRecord->id, trial);
                    if (chosenId != 0) {
                        break;
                    }
                }
            }
        }
        if (chosenId == 0) {
            u32 chance = 25;

            for (u32 id = 0; id < 0x4B1; id++) {
                if (nkmBaseGetRecord((u16)id)->race == 0x33 && itemGetFlagBit1((u16)id) != 0) {
                    chance = 10;
                    break;
                }
            }
            if (randNextInRange(99) < chance) {
                u8 searchLevel = level;

                do {
                    chosenId = demonFindClosestEligibleLevel(lists, 0x33, searchLevel, 1);
                    NkmBaseRecord *candidate = nkmBaseGetRecord((u16)chosenId);

                    if (candidate->id != baseRecord->id && candidate->id != first && candidate->id != second
                        && candidate->level <= searchLevel) {
                        PartySlotsView *slots = gameGetSlotTable();
                        s32 i;

                        for (i = 0; i < 0x18; i++) {
                            if ((u32)slots->stock[i] < 0x18 && gameGetUnitRecord(gameGetSlotTable()->stock[i])->id == candidate->id) {
                                break;
                            }
                        }
                        if (i == 0x18) {
                            break;
                        }
                    }
                    chosenId = 0;
                    searchLevel = candidate->level - 1;
                } while (lists->bounds[lists->race * 2 - 1] < searchLevel);
            }
        }
        if (chosenId == 0) {
            chosenId = uniteChooseAvailableDevilAtLevel(first, second, baseRecord->id, level);
        }
        if (chosenId == 0) {
            for (u16 step = 1; step <= 5; step++) {
                if (level + step <= levelBounds[7]) {
                    chosenId = uniteChooseAvailableDevilAtLevel(first, second, entry->resultId, (u8)(step + level));
                    break;
                }
            }
        }
        if (chosenId == 0 && level - baseRecord->level >= 1) {
            chosenId = uniteChooseAvailableDevilAtLevel(first, second, entry->resultId, (u8)(level - 1));
        }
        if (chosenId != 0) {
            entry->resultId = chosenId;
            found = 1;
        }
    }
    return found;
}

}
