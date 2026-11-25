/* NON_MATCHING: the entry-list and owner subblock bases use different saved registers;
 * the widget flag update uses a direct offset where retail uses a halfword load with writeback. */
#include "AsdSDK/AsdDebugHooks.h"
#include "shard/Shard004A.h"
#include "shard/W6_W6Match8_DevilRecordA.h"
#include "gamedata/NkmEnemyRecord.h"
#include "camp/UnitComparison.h"
#include "camp/CampStateQueries_UnitComparison.h"
#include "ui/ItemListSelection.h"
#include "gamedata/NkmEnemyLookup.h"

namespace {
struct InventoryCursorState {
    u8 prefix[8];
    s32 count;
    u8 padding0C;
    u8 enabled;
    u8 suffix[0x56];
};
struct InventoryListView { s16 count; u16 capacity; };
struct InventoryHelpList { u8 prefix[0x10]; u8 active; u8 suffix[0x23]; };
struct InventoryWidget;
struct InventoryWidgetVtable {
    u32 prefix[2];
    void (*setCursor)(InventoryWidget *widget, InventoryCursorState *cursor);
};
struct InventoryWidget { InventoryWidgetVtable *vtable; u16 flags; };
struct InventoryOwnerView {
    u8 prefix[0x20];
    InventoryCursorState cursor;
    u8 padding84[0x10];
    u8 percentage;
    u8 padding95[0x783];
    InventoryHelpList help;
    InventoryWidget *widget;
    u8 padding850[0x10];
    s8 alternate;
    u8 padding861[3];
    InventoryListView list;
};
}
extern "C" {
void releaseEntriesB(InventoryWidget *widget);
void releaseEntriesA(InventoryHelpList *help);
void slotPoolResetTrackedState(InventoryListView *list);
s32 itemIsCollectedWithRelated(u16 id);
void inventoryListAppend(InventoryListView *list, const CampUnitComparison *record);
void listScrollerInitialize(InventoryCursorState *cursor, s32 visible, s32 count, s32 first, s32 mode, s32 enabled);
u8 gaugePercent(InventoryListView *list);
void *jyoucyuGetTableEntry(u32 index);
void compendiumListMapEncounterDemons(Screen4A *work);
void messageIdListSetRange(InventoryHelpList *help, u32 group, u32 image, s32 count);

/* Rebuilds the available demons, initializes the selection widget, and refreshes the help rows. */
void FUN_004a4848(Screen4A *owner)
{
    /* The prefix view preserves the owner's odd-start byte padding and existing alignment. */
    struct InventoryTotalView { u8 prefix[0xA86A]; s16 total; };
    InventoryOwnerView *work = (InventoryOwnerView *)owner;
    releaseEntriesB(work->widget);
    releaseEntriesA(&work->help);
    InventoryListView *list = &work->list;
    slotPoolResetTrackedState(list);
    if (work->alternate == 0) {
        s32 total = 0;
        for (s32 id = 1; id < 0x500; ++id) {
            NkmBaseRecordA *candidate = nkmBaseGetRecord((u16)id);
            NkmEnemyRecordA *record = nkmEnemyFindById((u16)id);
            if (candidate != NULL && record != NULL && (record->flags & 1) != 0) {
                ++total;
                if (itemIsCollectedWithRelated(candidate->id) != 0) {
                    CampUnitComparison entry;
                    campFillUnitComparison(&entry, candidate->id, 0);
                    entry.unk18[0] = 1;
                    inventoryListAppend(list, &entry);
                }
            }
        }
        ((InventoryTotalView *)owner)->total = total;
        itemListSelectVariant((ItemListSelectionOwner *)owner, 1, 1);
        listScrollerInitialize(&work->cursor, 10, list->count, 0, 1, 1);
        asdDebugHookPtrInt(&work->cursor, 1);
        work->cursor.enabled = 1;
        work->percentage = gaugePercent(list);
        jyoucyuGetTableEntry(0);
        jyoucyuGetTableEntry(0);
    } else {
        compendiumListMapEncounterDemons(owner);
    }
    work->widget->vtable->setCursor(work->widget, &work->cursor);
    work->widget->flags |= 0x1000;
    s32 count = work->cursor.count;
    if (work->alternate == 0) {
        count = count < 10 ? count : 10;
        messageIdListSetRange(&work->help, 0x14, 0x40E, count);
    } else {
        count = count < 10 ? count : 10;
        messageIdListSetRange(&work->help, 0x13, 0x1030, count);
    }
    work->help.active = 1;
}
} /* extern "C" */
