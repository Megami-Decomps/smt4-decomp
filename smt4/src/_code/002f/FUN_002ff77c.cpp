#include "common.h"
#include "gamedata/DevilRecord.h"
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/BtlMainAccess.h"
#include "util/SlotRangeSelect.h"
#include "gamedata/DataTable40.h"

extern "C" {

#define ITEM_KIND_3 3

extern BtlEntry *btlMainFindActiveEntry(BtlMainState *state);
extern s32 btlScriptResolveGroupArg(s32 group);
extern u32 btlEntryHasCategoryThreeSkill(const BtlEntry *entry);
extern u32 scrGetArg(u32 index);
extern int scrSetResult(s32 value);

/* Whether one of the entry's equipped items or its demon's items is of kind 3. */
static __inline u32 entryHasKindThreeItem(const BtlEntry *entry)
{
    if (entry->equipA != NULL) {
        for (s32 j = 0; j < 8; j++) {
            const Table04Record *item = dataTable40FindById(entry->equipA->items[j]);
            if (item != NULL && item->sort.category == ITEM_KIND_3) {
                return 1;
            }
        }
    }
    if (entry->equipB != NULL) {
        for (s32 j = 0; j < 8; j++) {
            const Table04Record *item = dataTable40FindById(entry->equipB->items[j]);
            if (item != NULL && item->sort.category == ITEM_KIND_3) {
                return 1;
            }
        }
    }
    if (entry->devil != NULL) {
        DevilRecord *devil = devilGetRecord(entry->id);

        for (s32 j = 0; j < 8; j++) {
            const Table04Record *item = dataTable40FindById(devil->skills[j]);
            if (item != NULL && item->sort.category == ITEM_KIND_3) {
                return 1;
            }
        }
    }
    return 0;
}

/* Script command: 1 if the entry with the given id (in the range, or the active one) carries an item of kind 3. */
u32 FUN_002ff77c(void)
{
    u32 id = scrGetArg(0);
    s32 first;
    s32 count;

    btlSideGetEntryRange(btlScriptResolveGroupArg(scrGetArg(1)), &first, &count);
    for (s32 i = first; i < first + count; i++) {
        BtlEntry *entry = &btlGetMainState()->entries[i];

        if ((entry->flags & BTL_ENTRY_FLAG_PRESENT) == 0 && (entry->flags & BTL_ENTRY_FLAG_ACTIVE) != 0 &&
            (entry->flags & BTL_ENTRY_FLAG_BLOCKED) == 0 && entry->id == id && entryHasKindThreeItem(entry)) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->hasActiveEntry != 0) {
        BtlEntry *entry = btlMainFindActiveEntry(btlGetMainState());
        if (entry != NULL && entry->id == id && btlEntryHasCategoryThreeSkill(entry) != 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

}
