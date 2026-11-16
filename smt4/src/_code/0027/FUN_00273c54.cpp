#include "common.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "code/Code0026.h"

struct MapBlockEntry {
    u8 flags;     // 0x00, bit 0 = used, bit 2 = pending
    u8 unk01[0x13];
};

struct MapBlock {
    u8 unk0000[0xf20];
    MapBlockEntry entries[16]; // 0xf20
};

extern "C" {
MapBlock *gameGetMapBlock(void);
s32 dataTableGetRecordFifty(void);
s32 FUN_0027d968(void);
s32 gameFlagIsSet(s32 flagId);

/* Marks the map block entries of available records on the current map as pending (bit 2), or clears it once their completion flag is set. */
void FUN_00273c54(void)
{
    MapBlock *mapBlock = gameGetMapBlock();
    s32 mapEntryIndex = 0;
    s32 recordIndex = 0;

    if (dataTableGetRecordFifty() > 0) {
        do {
            MapAvailabilityRecordPrefixIV *record = reinterpret_cast<MapAvailabilityRecordPrefixIV *>(FUN_00267144(recordIndex));
            if (record->status != -1 && record->mapId != 0 &&
                FUN_0027d968() == record->mapId) {
                if ((mapBlock->entries[mapEntryIndex].flags & 1) != 0) {
                    if (gameFlagIsSet(mapEntryIndex + 0x310) != 0) {
                        mapBlock->entries[mapEntryIndex].flags &= ~4;
                    } else if ((record->requiredFlag == 0 ||
                                gameFlagIsSet(record->requiredFlag) != 0) &&
                               (record->blockingFlag == 0 ||
                                gameFlagIsSet(record->blockingFlag) == 0)) {
                        mapBlock->entries[mapEntryIndex].flags |= 4;
                    }
                }
                ++mapEntryIndex;
            }
            ++recordIndex;
        } while (dataTableGetRecordFifty() > recordIndex);
    }
}
}
