/* NON_MATCHING: retail has a constant-false guard (mov #0 / cmp / nop / bne) before the kind-9 test and re-tests the kind in the kind-3 chain (dead compare/branch pairs ours omits), loads the held-button word with ldrd/ldm differently and lays the kind-5/3 tails out of line (190 rows against 203). Counting logic follows retail. */
#include "common.h"
#include "battle/BtlDebugMenuEntry.h"

/* The debug menu's list pages (observed fields). */
struct BtlDebugMenuLists {
    /* 0x0000 */ u8 unk0000[0x38BC];
    /* 0x38BC */ u8 allList[0x64];
    /* 0x3920 */ u8 slotList[3][100];
    /* 0x3A4C */ u8 unk3A4C[0x6B4];
    /* 0x4100 */ BtlDebugPage page;
};

/* The mask the entries' battle-state requirement is blocked by (observed field). */
struct BtlDebugBlockMask {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u64 blocked;
};

/* A unit record (observed field). */
struct BtlDebugUnitRecord {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u16 demonId;
};

/* A demon's data (observed field). */
struct BtlDebugDemon {
    /* 0x00 */ u8 unk00[0xB3];
    /* 0xB3 */ u8 flags;
};

extern "C" {

extern BtlDebugBlockMask DAT_00573b88;

BtlDebugEntry *FUN_002cc228(u8 index, s32 empty);
s32 gameFlagIsSet(u32 flag);
s32 gameDataFlagTestBit(u32 flag);
BtlStateMasks *btlGetMainState(void);
s32 FUN_002b24fc(void);
s32 FUN_00291e14(void);
s8 *gameGetSlotTable(void);
BtlDebugUnitRecord *gameGetSlotRecord(s32 slot);
s32 idListHasFlaggedRecord(BtlDebugUnitRecord *record);
BtlDebugDemon *FUN_00184310(u16 id);
void FUN_00203b40(void *list, s32 count, s32 a, s32 b, s32 c, s32 d);

/* Sets up the debug menu's lists: the number of visible entries of the shared page, and for each of
 * the three party slots the number of entries visible for that slot's unit. */
void FUN_0020d3d4(BtlDebugMenuLists *menu)
{
    BtlDebugPage *page = &menu->page;
    s32 count = 0;
    s32 i;
    s32 slot;

    for (i = 0; i < DEBUG_MENU_ENTRY_COUNT; i++) {
        BtlDebugEntry *entry = FUN_002cc228(i, 1);

        if (entry == NULL || entry->enabled != 1) {
            continue;
        }
        if (entry->flagId != 0 && gameFlagIsSet(entry->flagId) == 0) {
            continue;
        }
        if (entry->dataFlagId != 0 && gameDataFlagTestBit(entry->dataFlagId) == 0) {
            continue;
        }
        if (entry->needsBattleState != 0 && (btlGetMainState()->held & DAT_00573b88.blocked) != 0) {
            continue;
        }
        if (entry->kind == 2) {
            continue;
        }
        if (entry->kind != 6 && entry->kind != 8 && entry->kind == 9 && FUN_002b24fc() == 0) {
            continue;
        }
        if ((entry->flags & 1) != 0 && FUN_00291e14() != 0) {
            continue;
        }
        count++;
    }
    FUN_00203b40(menu->allList, count, 1, count, 1, 1);
    for (slot = 0; slot < 3; slot++) {
        BtlDebugUnitRecord *record = NULL;

        count = 0;
        if (gameGetSlotTable()[slot + 0x1CA0] >= 0) {
            record = gameGetSlotRecord(gameGetSlotTable()[slot + 0x1CA0]);
            if (record != NULL) {
                for (i = 0; i < DEBUG_MENU_ENTRY_COUNT; i++) {
                    BtlDebugEntry *entry = FUN_002cc228(i, 0);

                    if (entry == NULL || entry->enabled != 1) {
                        continue;
                    }
                    if (entry->flagId != 0 && gameFlagIsSet(entry->flagId) == 0) {
                        continue;
                    }
                    if (entry->dataFlagId != 0 && gameDataFlagTestBit(entry->dataFlagId) == 0) {
                        continue;
                    }
                    if (entry->needsBattleState != 0 && (btlGetMainState()->held & DAT_00573b88.blocked) != 0) {
                        continue;
                    }
                    if (entry->kind == 5) {
                        if (page->pending != 0) {
                            continue;
                        }
                    } else if (entry->kind == 3 && idListHasFlaggedRecord(record) == 0) {
                        BtlDebugDemon *demon;

                        if ((entry->flags & 1) != 0 || FUN_00291e14() == 0 || FUN_00291e14() == 0) {
                            continue;
                        }
                        demon = FUN_00184310(record->demonId);
                        if (demon == NULL || (demon->flags & 4) == 0) {
                            continue;
                        }
                    }
                    if ((entry->flags & 1) != 0 && FUN_00291e14() != 0) {
                        continue;
                    }
                    count++;
                }
            }
        }
        FUN_00203b40(menu->slotList[slot], count, 1, count, 1, 1);
    }
}

} /* extern "C" */
