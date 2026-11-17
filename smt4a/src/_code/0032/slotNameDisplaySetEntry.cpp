#include "shard/W5_W5Match5_GameSaveViews.h"
#include "gamedata/NkmBaseRecordA.h"
#include "gamedata/SaveSlotTable.h"

struct SlotNameDisplay {
    u8 unk00[0x34];
    u16 selectedId; // 0x34
    u8 unk36[0x1a];
    u16 name[8]; // 0x50
    u16 entryId; // 0x60
    u16 sortKey; // 0x62
};
extern "C" {
void memcpySrcFirst(const u16 *source, u16 *destination, u32 bytes);

// Fill a display name and sort key from the selected party record, or from the default entry.
void slotNameDisplaySetEntry(SlotNameDisplay *display, s32 entryId)
{
    SaveSlotTableA *table = gameGetSlotTable();
    if (entryId == 0) {
        display->selectedId = 0;
        display->entryId = 536;
        NkmBaseRecordA *info = nkmBaseGetRecord(536);
        display->sortKey = info->level;
        memcpySrcFirst(info->name, display->name, 16);
        return;
    }
    u16 selectedId = (u16)entryId;
    display->selectedId = selectedId;
    SlotRecordA *record = (SlotRecordA *)table;
    for (s32 i = 0; i < 24; ++i) {
        s32 index = table->party[i];
        if (index >= 0) {
            record = gameGetSlotRecord(index);
            if (record->id == display->selectedId)
                break;
        }
    }
    display->entryId = selectedId;
    display->sortKey = record->level;
    memcpySrcFirst(record->skills, display->name, 16);
}
}
