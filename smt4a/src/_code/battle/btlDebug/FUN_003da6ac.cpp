/* NON_MATCHING: recovered slot/flag query arguments restore paired battle-state loads; retail retains a linker-inlined false guard and kind-three re-test whose original callee identity is unresolved, and branch/index-base layout differs. */
#include "battle/BtlMainAccess.h"
#include "common.h"
#include "battle/BtlDebugMenuEntry.h"

/* The debug menu (observed fields). */
struct BtlDebugMenu {
    /* 0x0000 */ u8 unk0000[0x3890];
    /* 0x3890 */ s32 selection;
    /* 0x3894 */ u8 unk3894[0x86C];
    /* 0x4100 */ BtlDebugPage page;
    /* 0x4210 */ s16 entryTable[1];
};

struct BtlDebugMasks {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u64 blocked;
};

extern "C" {

extern BtlDebugMasks DAT_00573bd8;

s8 *gameGetSlotTable(void);
u32 gameGetSlotRecord(s32 slotIndex);
BtlDebugEntry *FUN_002cc228(u8 index, s32 empty);
s32 gameFlagIsSet(u32 flag);
u8 gameDataFlagTestBit(u32 bit);
s32 idListHasFlaggedRecord(u32 record);
s32 FUN_00291e14(void);
s32 btlObjectHasEntryFlag(u32 record);
s32 FUN_002b24fc(void);

/* Returns the kind of the `which`-th visible entry of the debug menu, or 0 when there are fewer. */
u8 FUN_003da6ac(BtlDebugMenu *menu, s32 which)
{
    u8 result = 0;
    s32 found = 0;
    s8 *slotFlags = gameGetSlotTable() + 0x1C9F;
    BtlDebugPage *page = &menu->page;
    s32 i;

    for (i = 0; i < DEBUG_MENU_ENTRY_COUNT; i++) {
        BtlDebugEntry *entry = FUN_002cc228(i, menu->selection == 0);
        u32 record = 0;
        s32 selection = menu->selection;

        if (selection != 4 && selection != 0) {
            s32 slotIndex = slotFlags[selection];
            if (slotIndex >= 0)
                record = gameGetSlotRecord(slotIndex);
        }
        if (entry == NULL || entry->enabled != 1) {
            continue;
        }
        if (entry->flagId != 0 && gameFlagIsSet(entry->flagId) == 0) {
            continue;
        }
        if (entry->dataFlagId != 0 && gameDataFlagTestBit(entry->dataFlagId) == 0) {
            continue;
        }
        if (entry->needsBattleState != 0 && (reinterpret_cast<BtlStateMasks *>(btlGetMainState())->held & DAT_00573bd8.blocked) != 0) {
            continue;
        }
        if (entry->kind == 5) {
            if (menu->entryTable[menu->selection] != -1 && page->pending != 0) {
                continue;
            }
        } else if (entry->kind == 2) {
            continue;
        } else if (entry->kind == 3) {
            if (menu->entryTable[menu->selection] != -1 && record != 0 && idListHasFlaggedRecord(record) == 0) {
                if ((entry->flags & 1) != 0 || FUN_00291e14() == 0 || btlObjectHasEntryFlag(record) == 0) {
                    continue;
                }
            }
        }
        if (entry->kind != 6 && entry->kind != 8) {
            if (entry->kind == 9 && FUN_002b24fc() == 0) {
                continue;
            }
        }
        if ((entry->flags & 1) != 0 && FUN_00291e14() != 0) {
            continue;
        }
        if (found == which) {
            result = entry->kind;
            break;
        }
        found++;
    }
    return result;
}

} /* extern "C" */
