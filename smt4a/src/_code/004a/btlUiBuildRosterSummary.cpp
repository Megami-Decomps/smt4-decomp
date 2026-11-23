/* NON_MATCHING: 140 lines (shape 56), register allocation only. Retail loads the two words of the first mask test
 * separately and combines them through r0/r1 (this build uses ldrd and r2/r3), swaps the scratch registers of the
 * position-count store, the party id compare and the seen-list store, and places the `side = 0` assignment of the
 * second pass after the function's return. */
#include <stdlib.h>
#include "battle/BtlEntryLookup.h"
#include "battle/BtlMainAccess.h"
#include "battle/BtlUiGlobal.h"
#include "battle/BattleContextCommandsA.h"
#include "gamedata/SaveSlotRecord.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

/* One line of the roster summary (0x18 bytes). */
struct BtlRosterSummaryEntry {
    /* 0x00 */ s32 id;        /* the unit's id, -1 for a blank line */
    /* 0x04 */ u8 grouped;    /* placed by side and position rather than by party slot */
    /* 0x08 */ s32 side;
    /* 0x0C */ s32 slot;      /* party slot, or the position within the side */
    /* 0x10 */ u16 statusFlags;
    /* 0x12 */ u8 values[4];  /* entry values 7, 10, 11 and 8 */
    /* 0x16 */ u8 value22Set;
};

/* A group's place within its side: sorted by the roster record's key. */
struct BtlRosterPosition {
    /* 0x00 */ s32 selectionIndex;
    /* 0x04 */ f32 key;
};

enum {
    ROSTER_RECORDS = 109,
    ROSTER_GROUP_FIXED = 2    /* a record of this group stays on side 0 */
};

extern "C" {

s32 recordCompareFloatKey(const void *left, const void *right);
s32 btlFindSelectionIndexByOrdinal(const BtlMainStateA *state, s32 ordinal);
SlotRecordA *btlMainGetUnk14(void);

/* Fills `output` with one line per listed combatant and returns the number of lines. Grouped combatants are first
 * collected per side and sorted by their record's key, so that each can be given its position within its side; a
 * selection index is listed once. */
s32 btlUiBuildRosterSummary(void *unused, BtlRosterSummaryEntry *output)
{
    BtlRosterPosition positions[2][ROSTER_RECORDS];
    s32 seen[ROSTER_RECORDS];
    s32 seenCount;
    s32 positionCounts[2];
    s32 index;

    positionCounts[0] = 0;
    positionCounts[1] = 0;
    for (index = 0; index < ROSTER_RECORDS; ++index) {
        positions[0][index].selectionIndex = -1;
        positions[1][index].selectionIndex = -1;
        BattleRosterRecordA *record = &btlGetMainState()->roster[index];
        if (record == NULL) {
            continue;
        }
        BtlCombatantEntryA *entry = btlMainFindEntryByListedId(btlGetMainState(), record->summon.memberId);
        if (entry == NULL) {
            continue;
        }
        if ((entry->flags & g_btlUi.rosterGroupedMask) && record->reflection.group < 0) {
            s32 side = 0;
            if (btlFindSelectionIndexByOrdinal(btlGetMainState(), 1) < 0 && record->data[0x3c] != ROSTER_GROUP_FIXED) {
                side = 1;
            }
            bool listed = false;
            for (s32 position = 0; position < positionCounts[side]; ++position) {
                if (positions[side][position].selectionIndex == entry->selectionIndex) {
                    listed = true;
                }
            }
            if (!listed) {
                positions[side][positionCounts[side]].selectionIndex = entry->selectionIndex;
                positions[side][positionCounts[side]].key = record->initialPositionX;
                ++positionCounts[side];
            }
        }
    }
    if (positionCounts[0] > 1) {
        qsort(positions[0], positionCounts[0], sizeof(BtlRosterPosition), recordCompareFloatKey);
    }
    if (positionCounts[1] > 1) {
        qsort(positions[1], positionCounts[1], sizeof(BtlRosterPosition), recordCompareFloatKey);
    }

    s32 count = 0;
    seenCount = 0;
    for (index = 0; index < ROSTER_RECORDS; ++index) {
        BattleRosterRecordA *record = &btlGetMainState()->roster[index];
        if (record == NULL) {
            continue;
        }
        BtlCombatantEntryA *entry = btlMainFindEntryByListedId(btlGetMainState(), record->summon.memberId);
        if (entry == NULL) {
            continue;
        }
        if (!(entry->flags & g_btlUi.rosterMask)) {
            continue;
        }
        BtlRosterSummaryEntry *line = &output[count];
        if (entry->flags & g_btlUi.rosterBlankMask) {
            line->id = -1;
            line->grouped = 0;
            line->side = 0;
            line->slot = 0;
        } else if (entry->flags & g_btlUi.rosterPartyMask) {
            line->id = entry->data.id;
            line->grouped = 0;
            line->side = 0;
            for (s32 slot = 1; slot < 4; ++slot) {
                SlotRecordA *member = gameGetSaveSlotData(slot - 1);
                if (member != NULL && member->id == line->id) {
                    line->slot = slot;
                    break;
                }
            }
            if (btlIsDefeatSuppressed()) {
                SlotRecordA *leader = btlMainGetUnk14();
                if (leader != NULL && leader->id == line->id) {
                    line->slot = 0;
                }
            }
        } else if (entry->flags & g_btlUi.rosterGroupedMask) {
            bool listed = false;
            for (s32 position = 0; position < seenCount; ++position) {
                if (seen[position] == entry->selectionIndex) {
                    listed = true;
                }
            }
            if (listed) {
                continue;
            }
            seen[seenCount] = entry->selectionIndex;
            ++seenCount;
            line->id = entry->data.id;
            line->grouped = 1;
            if (record->reflection.group >= 0) {
                line->side = 1;
                line->slot = 0;
            } else {
                if (btlFindSelectionIndexByOrdinal(btlGetMainState(), 1) < 0 &&
                    record->data[0x3c] != ROSTER_GROUP_FIXED) {
                    line->side = 1;
                } else {
                    line->side = 0;
                }
                line->slot = 0;
                for (s32 position = 0; position < positionCounts[line->side]; ++position) {
                    if (positions[line->side][position].selectionIndex == -1) {
                        break;
                    }
                    if (positions[line->side][position].selectionIndex == entry->selectionIndex) {
                        line->slot = position;
                        break;
                    }
                }
            }
        } else {
            continue;
        }
        line->statusFlags = entry->data.statusFlags;
        line->values[0] = btlFindEntryValue(record->summon.memberId, 7);
        line->values[1] = btlFindEntryValue(record->summon.memberId, 10);
        line->values[2] = btlFindEntryValue(record->summon.memberId, 11);
        line->values[3] = btlFindEntryValue(record->summon.memberId, 8);
        line->value22Set = btlFindEntryValue(record->summon.memberId, 22) != 0;
        ++count;
    }
    return count;
}

} /* extern "C" */
