/* NON_MATCHING: loop entry: retail loads the span's count into r0 and first into r6 (ldr, ldr, add); here first is loaded, copied to r6, then added to count. */
#include "common.h"
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/BtlMainAccess.h"
#include "util/SlotRangeSelect.h"

extern "C" {

typedef struct ItemRecord {
    /* 0x00 */ u8 unk00[0x23];
    /* 0x23 */ u8 kind;
} ItemRecord;

typedef struct DevilRecord {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ u16 items[8];
} DevilRecord;

typedef struct EntrySpan {
    s32 count;
    s32 unk4;
    s32 first;
    s32 unkC[3];
} EntrySpan;

#define ITEM_KIND_3 3

extern BtlEntry *btlMainFindActiveEntry(BtlMainState *state);
extern s32 btlScriptResolveGroupArg(s32 group);
extern ItemRecord *dataTable40FindById(u16 id);
extern DevilRecord *devilGetRecord(u16 id);
extern u32 btlEntryHasCategoryThreeSkill(const BtlEntry *entry);
extern u32 scrGetArg(u32 index);
extern int scrSetResult(s32 value);

/* Script command: 1 if the entry with the given id (in the range, or the active one) carries an item of kind 3. */
u32 FUN_002ff77c(void)
{
    u32 id = scrGetArg(0);
    EntrySpan span;
    s32 i;
    s32 j;
    BtlEntry *entry;
    ItemRecord *item;

    FUN_002499fc(btlScriptResolveGroupArg(scrGetArg(1)), &span.first, &span.count);
    for (i = span.first; i < span.first + span.count; i++) {
        entry = &btlGetMainState()->entries[i];

        if ((entry->flags & BTL_ENTRY_FLAG_PRESENT) == 0 && (entry->flags & BTL_ENTRY_FLAG_ACTIVE) != 0 &&
            (entry->flags & BTL_ENTRY_FLAG_BLOCKED) == 0 && entry->id == id) {
            if (entry->equipA != NULL) {
                for (j = 0; j < 8; j++) {
                    item = dataTable40FindById(entry->equipA->items[j]);
                    if (item != NULL && item->kind == ITEM_KIND_3) {
                        scrSetResult(1);
                        return 1;
                    }
                }
            }
            if (entry->equipB != NULL) {
                for (j = 0; j < 8; j++) {
                    item = dataTable40FindById(entry->equipB->items[j]);
                    if (item != NULL && item->kind == ITEM_KIND_3) {
                        scrSetResult(1);
                        return 1;
                    }
                }
            }
            if (entry->devil != NULL) {
                DevilRecord *devil = devilGetRecord(entry->id);

                for (j = 0; j < 8; j++) {
                    item = dataTable40FindById(devil->items[j]);
                    if (item != NULL && item->kind == ITEM_KIND_3) {
                        scrSetResult(1);
                        return 1;
                    }
                }
            }
        }
    }
    if (btlGetMainState()->hasActiveEntry != 0) {
        entry = btlMainFindActiveEntry(btlGetMainState());
        if (entry != NULL && entry->id == id && btlEntryHasCategoryThreeSkill(entry) != 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

}
