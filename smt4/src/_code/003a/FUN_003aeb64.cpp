/* NON_MATCHING: register allocation and the order of the duplicate scans differ (retail keeps the order counts and the output cursor in different registers and re-tests the side per record); same loops, lists and calls. */
#include "common.h"

namespace {
/* A unit entry of the battle state (0x114 bytes): its first word is the unit's id. */
struct UnitEntry {
    /* 0x000 */ s32 id;
    /* 0x004 */ u8 unk004[0x38];
    /* 0x03c */ u8 team;                 /* 2: the player's team */
    /* 0x03d */ u8 unk03d[0x25];
    /* 0x062 */ s16 listedId;
    /* 0x064 */ u8 unk064[0x8c];
    /* 0x0f0 */ s32 slot;                /* negative: not placed in a slot yet */
    /* 0x0f4 */ u8 unk0f4[0x20];
};

/* A battle record found by listed id. */
struct BattleRecord {
    /* 0x000 */ u32 flags;               /* 1: shown, 2: blank, 8: party member, 0x10: enemy */
    /* 0x004 */ u8 unk004[0x6a];
    /* 0x06e */ s16 key;
    /* 0x070 */ u8 unk070[0x5e];
    /* 0x0ce */ u16 partyId;
    /* 0x0d0 */ u8 unk0d0[0xf6];
    /* 0x1c6 */ u16 level;
};

/* The battle state: only the unit table pointer. */
struct BattleState {
    /* 0x0000 */ u8 unk0000[0x1e98];
    /* 0x1e98 */ UnitEntry *units;
};

/* A party slot record: its id at +0x46. */
struct PartySlot {
    /* 0x00 */ u8 unk00[0x46];
    /* 0x46 */ u16 id;
};

/* One output row (0x18 bytes). */
struct RosterRow {
    /* 0x00 */ u32 id;
    /* 0x04 */ u8 isEnemy;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u32 side;
    /* 0x0c */ u32 index;
    /* 0x10 */ u16 level;
    /* 0x12 */ u8 stat7;
    /* 0x13 */ u8 stat10;
    /* 0x14 */ u8 stat11;
    /* 0x15 */ u8 stat20;
    /* 0x16 */ u8 unk16[2];
};

/* A (key, unit id) pair of the per-side order lists. */
struct OrderPair {
    s32 key;
    s32 unit;
};
}

extern "C" {
BattleState *btlGetMainState(void);
BattleRecord *btlMainFindEntryByListedId(BattleState *state, s32 id);
s32 btlFindNthActiveSpecialEntry(BattleState *state, s32 arg);
s32 recordCompareFloatKey(const void *a, const void *b);
void FUN_002b7bca(void *array, s32 count, s32 elementSize, s32 (*compare)(const void *, const void *));
PartySlot *saveResolvePartySlot(s32 index);
u32 battleGetEntryHalfword(s32 id, s32 field);

/* The side (0 or 1) an unplaced unit is listed under. */
static s32 sideOf(UnitEntry *unit)
{
    s32 side = 0;
    if (btlFindNthActiveSpecialEntry(btlGetMainState(), 1) < 0 && unit->team != 2) {
        side = 1;
    }
    return side;
}

/* Builds the battle roster rows: first the two per-side order lists of the enemies that wait to act (sorted),
   then one row per shown unit - blank rows, party members (with their party slot) and enemies (with their
   place in the order list). Returns the number of rows. */
s32 FUN_003aeb64(u32 unused, RosterRow *rows)
{
    OrderPair order[2][109];
    s32 orderCount[2] = { 0, 0 };
    for (s32 i = 0; i < 109; i++) {
        order[0][i].key = -1;
        order[1][i].key = -1;
        UnitEntry *unit = &btlGetMainState()->units[i];
        if (unit != NULL) {
            BattleRecord *record = btlMainFindEntryByListedId(btlGetMainState(), unit->listedId);
            if (record != NULL && (record->flags & 0x10) != 0 && unit->slot < 0) {
                s32 side = sideOf(unit);
                s32 known = 0;
                for (s32 j = 0; j < orderCount[side]; j++) {
                    if (order[side][j].key == record->key) {
                        known = 1;
                    }
                }
                if (orderCount[side] <= 0 || !known) {
                    order[side][orderCount[side]].key = record->key;
                    order[side][orderCount[side]].unit = unit->id;
                    orderCount[side]++;
                }
            }
        }
    }
    if (orderCount[0] > 1) {
        FUN_002b7bca(order[0], orderCount[0], 8, recordCompareFloatKey);
    }
    if (orderCount[1] > 1) {
        FUN_002b7bca(order[1], orderCount[1], 8, recordCompareFloatKey);
    }
    s32 rowCount = 0;
    s32 seenCount = 0;
    s32 seen[109];
    for (s32 i = 0; i < 109; i++) {
        UnitEntry *unit = &btlGetMainState()->units[i];
        if (unit == NULL) {
            continue;
        }
        BattleRecord *record = btlMainFindEntryByListedId(btlGetMainState(), unit->listedId);
        if (record == NULL || (record->flags & 1) == 0) {
            continue;
        }
        RosterRow *row = &rows[rowCount];
        if ((record->flags & 2) != 0) {
            row->id = 0xffffffff;
            row->isEnemy = 0;
            row->side = 0;
            row->index = 0;
        } else if ((record->flags & 8) != 0) {
            row->id = record->partyId;
            row->isEnemy = 0;
            row->side = 0;
            for (s32 k = 1; k < 4; k++) {
                PartySlot *slot = saveResolvePartySlot(k - 1);
                if (slot != NULL && slot->id == row->id) {
                    row->index = k;
                    break;
                }
            }
        } else {
            if ((record->flags & 0x10) == 0) {
                continue;
            }
            s32 already = 0;
            for (s32 j = 0; j < seenCount; j++) {
                if (seen[j] == record->key) {
                    already = 1;
                }
            }
            if (seenCount > 0 && already) {
                continue;
            }
            seen[seenCount] = record->key;
            row->id = record->partyId;
            row->isEnemy = 1;
            seenCount++;
            if (unit->slot >= 0) {
                row->side = 1;
                row->index = 0;
            } else {
                row->side = sideOf(unit);
                row->index = 0;
                for (s32 j = 0; j < orderCount[row->side]; j++) {
                    if (order[row->side][j].key == -1) {
                        break;
                    }
                    if (order[row->side][j].key == record->key) {
                        row->index = j;
                        break;
                    }
                }
            }
        }
        row->level = record->level;
        row->stat7 = battleGetEntryHalfword(unit->listedId, 7);
        row->stat10 = battleGetEntryHalfword(unit->listedId, 10);
        row->stat11 = battleGetEntryHalfword(unit->listedId, 0xb);
        row->stat20 = battleGetEntryHalfword(unit->listedId, 0x14) != 0;
        rowCount++;
    }
    return rowCount;
}

} /* extern "C" */
