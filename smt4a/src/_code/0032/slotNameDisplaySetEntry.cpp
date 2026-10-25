#include "shard/W5_W5Match5_GameSaveViews.h"

// These fields extend beyond the shared table and sort-info prefixes; keep their views local.
struct DisplaySlotTable {
    u8 unk0000[0x1c88];
    s8 indices[24]; // 0x1c88
};
struct DisplaySlotInfo {
    u8 unk00[6];
    u16 sortKey; // 0x06
    u8 unk08[0x38];
    u16 name[8]; // 0x40
};
struct DisplaySlotRecord {
    u8 unk00[0x34];
    u16 name[8]; // 0x34
};
struct SlotNameDisplay {
    u8 unk00[0x34];
    u16 selectedId; // 0x34
    u8 unk36[0x1a];
    u16 name[8]; // 0x50
    u16 entryId; // 0x60
    u16 sortKey; // 0x62
};
extern "C" {
DisplaySlotTable *gameGetSlotTable();
void FUN_002e59f8(const u16 *source, u16 *destination, u32 bytes);

// Fill a display name and sort key from the selected party record, or from the default entry.
void slotNameDisplaySetEntry(SlotNameDisplay *display, s32 entryId)
{
    DisplaySlotTable *table = gameGetSlotTable();
    if (entryId == 0) {
        display->selectedId = 0;
        display->entryId = 536;
        DisplaySlotInfo *info = (DisplaySlotInfo *)FUN_00184310(536);
        display->sortKey = info->sortKey;
        FUN_002e59f8(info->name, display->name, 16);
        return;
    }
    u16 selectedId = (u16)entryId;
    display->selectedId = selectedId;
    SlotRecord *record = (SlotRecord *)table;
    for (s32 i = 0; i < 24; ++i) {
        s32 index = table->indices[i];
        if (index >= 0) {
            record = gameGetSlotRecord(index);
            if (record->entryId == display->selectedId)
                break;
        }
    }
    display->entryId = selectedId;
    display->sortKey = record->sortKey;
    FUN_002e59f8(((DisplaySlotRecord *)record)->name, display->name, 16);
}
}
