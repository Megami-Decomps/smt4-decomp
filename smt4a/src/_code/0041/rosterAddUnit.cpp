/* NON_MATCHING: retail reloads the flag byte and clears bit 7 and the low bits of the second byte in a separate read-modify-write after the bit-6 update (built folds them into the same register), and addresses the active slot id as base + 2048 + 228 where the build pools 0x8E4. */
#include "gamedata/RosterView.h"
#include "AsdSDK/Source/Gfx/Model/AsdEnv.h"
#include "code/Code001b.h"
#include "quest_center/QuestRecordA.h"

extern "C" {

s32 goalConditionsSatisfied(u32 id);
void encounterRefreshOnFlagChange(u32 flag, s32 value);
void clearTwoWords(void *words);
void clearThreeWords(void *words);

/* Reports a game flag change to encounterRefreshOnFlagChange, then sets or clears the flag's bit (the sibling
 * FUN_00417a60, FUN_00417c24 and FUN_00418070 write flags through the same inline). */
static __inline void gameFlagWrite(u32 flag, s32 value)
{
    u8 *bits = gameFlagBlockGet();

    encounterRefreshOnFlagChange(flag, value);
    u32 index = flag >> 3;
    if (value) {
        bits[index] |= 1 << (flag & 7);
    } else {
        s32 keep = ~(1 << (flag & 7));
        bits[index] &= keep;
    }
}

/* Clears the selected record's flags 0x500-0x51f (FUN_00417a60's helper). */
static __inline void clearSelectedFlags(void)
{
    u32 flag;

    for (flag = 0x500; flag < 0x520; flag++) {
        gameFlagWrite(flag, 0);
    }
}

/* Adds a unit to the roster: refreshes its state flags, then stores it in the active party, the leader slot or the
 * first free stock slot, and clears the 0x500..0x51F flag range. Returns 0 when the id cannot be added. */
u32 rosterAddUnit(u16 id)
{
    RosterFlags *entry = &reinterpret_cast<RosterView *>(gameFlagBlockGet())->flags[id];
    RosterView *roster = reinterpret_cast<RosterView *>(gameFlagBlockGet());
    s32 kind;
    s32 i;

    if (entry->known == 0 && id < 0x15E) {
        return 0;
    }
    kind = table1bOr1cGetRecordValue(id);
    if (dataTable1bOr1cRecordHasFlag1(id) == 0 && kind != 0 && kind != 10 && kind != 1 && roster->leader != 0) {
        return 0;
    }
    entry->refresh = 0;
    entry->current = 1;
    if (entry->partner != 0) {
        entry->hasPartner = 1;
    } else {
        entry->hasPartner = 0;
    }
    entry->cleared = 0;
    entry->flagsB &= ~0x3D;
    if (kind == 10 && goalConditionsSatisfied(id) != 0) {
        entry->flagsB |= 0x20;
    }
    if (dataTable1bOr1cRecordHasFlag1(id) != 0) {
        if (kind == 1) {
            for (i = 0; i < 4; i++) {
                if (roster->active[i].id == 0) {
                    roster->active[i].id = id;
                    clearTwoWords(&roster->active[i].data[2]);
                    break;
                }
            }
        }
    } else if (kind != 0 && kind != 10 && kind != 2 && kind != 11) {
        for (i = 1; i < 20; i++) {
            if (roster->stock[i].id != 0) {
                u8 *record = reinterpret_cast<u8 *>(questDataGetRecord(roster->stock[i].id));

                if (record != NULL && record[6] == 6) {
                    clearThreeWords(&roster->stock[i]);
                }
            }
        }
        if (kind == 6 || kind == 9) {
            roster->leader = id;
        } else {
            for (i = 1; i < 20; i++) {
                if (roster->stock[i].id == 0) {
                    clearThreeWords(&roster->stock[i]);
                    roster->stock[i].id = id;
                    break;
                }
            }
        }
        clearSelectedFlags();
    }
    return 1;
}

} /* extern "C" */
