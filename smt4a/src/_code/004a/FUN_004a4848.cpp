/* NON_MATCHING: demon list population and comparison rows restored; owner subobject bases, local stack placement and help-tail ordering differ. */
#include "shard/Shard004A.h"
#include "shard/W6_W6Match8_DevilRecordA.h"
#include "gamedata/Table00.h"
#include "camp/UnitComparison.h"

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
    u8 alternate;
    u8 padding861[3];
    InventoryListView list;
};
}
extern "C" {
void releaseEntriesB(InventoryWidget *widget);
void releaseEntriesA(InventoryHelpList *help);
void slotPoolResetTrackedState(InventoryListView *list);
Table00Record *dataTable00FindById(u32 id);
s32 FUN_0026264c(u16 id);
void campFillUnitComparison(CampUnitComparison *record, u32 id, u32 flags);
void inventoryListAppend(InventoryListView *list, const CampUnitComparison *record);
void itemListSelectVariant(Screen4A *work, s32 mode, s32 enabled);
void FUN_004cfeb0(InventoryCursorState *cursor, s32 visible, s32 count, s32 first, s32 mode, s32 enabled);
u8 gaugePercent(InventoryListView *list, u32 mode);
void *jyoucyuGetTableEntry(u32 index);
void FUN_004a5b20(Screen4A *work);
void FUN_004d05c4(InventoryHelpList *help, u32 group, u32 image, s32 count);

// Rebuild the available demon list, connect its selection widget and refresh the help rows.
void FUN_004a4848(Screen4A *owner)
{
    // Local views preserve the owner's odd-start byte padding and its existing alignment.
    struct InventoryTotalView { u8 prefix[0xA86A]; s16 total; };
    InventoryOwnerView *work = reinterpret_cast<InventoryOwnerView *>(owner);
    releaseEntriesB(work->widget);
    releaseEntriesA(&work->help);
    slotPoolResetTrackedState(&work->list);
    if (work->alternate == 0) {
        s32 total = 0;
        for (s32 id = 1; id < 0x500; ++id) {
            DevilRecordA *candidate = FUN_00184310((u16)id);
            Table00Record *record = dataTable00FindById((u16)id);
            if (candidate != NULL && record != NULL && (record->flags & 1) != 0) {
                ++total;
                if (FUN_0026264c(candidate->id) != 0) {
                    CampUnitComparison entry;
                    campFillUnitComparison(&entry, candidate->id, 0);
                    entry.unk18[0] = 1;
                    inventoryListAppend(&work->list, &entry);
                }
            }
        }
        reinterpret_cast<InventoryTotalView *>(owner)->total = total;
        itemListSelectVariant(owner, 1, 1);
        FUN_004cfeb0(&work->cursor, 10, work->list.count, 0, 1, 1);
        work->cursor.enabled = 1;
        work->percentage = gaugePercent(&work->list, 1);
        jyoucyuGetTableEntry(0);
        jyoucyuGetTableEntry(0);
    } else {
        FUN_004a5b20(owner);
    }
    work->widget->vtable->setCursor(work->widget, &work->cursor);
    work->widget->flags |= 0x1000;
    s32 count = work->cursor.count;
    if (work->alternate != 0) {
        if (count >= 10)
            count = 10;
        FUN_004d05c4(&work->help, 0x13, 0x1030, count);
    } else {
        if (count >= 10)
            count = 10;
        FUN_004d05c4(&work->help, 0x14, 0x40E, count);
    }
    work->help.active = 1;
}
}
