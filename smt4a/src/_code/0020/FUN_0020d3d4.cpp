/* NON_MATCHING: 14 lines: the first loop's blocked-mask words land in r2/r3 swapped, the page pointer is set up
 * one instruction later in retail, and retail branches to the kind-3 test out of line (bne/b where the build has
 * beq/b). The constant-false guard is btlDebugQueryEnabled (linker-inlined mov r0, #0). */
#include "battle/BtlMainAccess.h"
#include "gamedata/NkmBaseRecordA.h"
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
extern "C" {

extern BtlDebugBlockMask DAT_00573b88;

BtlDebugEntry *FUN_002cc228(u8 index, s32 empty);
s32 gameFlagIsSet(u32 flag);
s32 gameDataFlagTestBit(u32 flag);
s32 btlListIsKind9Available(void);
s32 btlDebugQueryEnabled(void);
s32 btlIsDefeatSuppressed(void);
s8 *gameGetSlotTable(void);
BtlDebugUnitRecord *gameGetSlotRecord(s32 slot);
s32 idListHasFlaggedRecord(BtlDebugUnitRecord *record);
void gridNavigationConfigure(void *list, s32 count, s32 a, s32 b, s32 c, s32 d);

/* Whether a kind-3 entry is offered to the unit: always when its record is flagged, otherwise only for an entry
 * without flag bit 0, while defeat is suppressed, and for a demon with extra flag 4. Retail re-tests the kind and
 * the record after the caller has, so this is an inlined function body. */
static __inline bool debugEntryOfferedToUnit(const BtlDebugEntry *entry, BtlDebugUnitRecord *record)
{
    if (idListHasFlaggedRecord(record) != 0) {
        return true;
    }
    if (entry->kind != 3) {
        return false;
    }
    if ((entry->flags & 1) != 0) {
        return false;
    }
    if (btlIsDefeatSuppressed() == 0) {
        return false;
    }
    if (record == NULL) {
        return false;
    }
    if (btlIsDefeatSuppressed() == 0) {
        return false;
    }
    NkmBaseRecordA *demon = nkmBaseGetRecord(record->demonId);
    if (demon == NULL) {
        return false;
    }
    return (demon->extraFlags & 4) != 0;
}

/* Sets up the debug menu's lists: the number of visible entries of the shared page, and for each of
 * the three party slots the number of entries visible for that slot's unit. */
void FUN_0020d3d4(BtlDebugMenuLists *menu)
{
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
        if (entry->needsBattleState != 0 && (reinterpret_cast<BtlStateMasks *>(btlGetMainState())->held & DAT_00573b88.blocked) != 0) {
            continue;
        }
        if (entry->kind == 2) {
            continue;
        }
        if (entry->kind != 6 && entry->kind != 8) {
            if (btlDebugQueryEnabled() != 0) {
                continue;
            }
            if (entry->kind == 9 && btlListIsKind9Available() == 0) {
                continue;
            }
        }
        if ((entry->flags & 1) != 0 && btlIsDefeatSuppressed() != 0) {
            continue;
        }
        count++;
    }
    gridNavigationConfigure(menu->allList, count, 1, count, 1, 1);
    BtlDebugPage *page = &menu->page;
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
                    if (entry->needsBattleState != 0 && (reinterpret_cast<BtlStateMasks *>(btlGetMainState())->held & DAT_00573b88.blocked) != 0) {
                        continue;
                    }
                    if (entry->kind == 5) {
                        if (page->pending != 0) {
                            continue;
                        }
                    } else if (entry->kind == 3 && !debugEntryOfferedToUnit(entry, record)) {
                        continue;
                    }
                    if ((entry->flags & 1) != 0 && btlIsDefeatSuppressed() != 0) {
                        continue;
                    }
                    count++;
                }
            }
        }
        gridNavigationConfigure(menu->slotList[slot], count, 1, count, 1, 1);
    }
}

} /* extern "C" */
