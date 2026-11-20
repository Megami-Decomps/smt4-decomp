#include "gamedata/MapSaveBlock.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "code/Code0026.h"

extern "C" {
s32 dataTableGetRecordFifty(void);
s32 FUN_0027d968(void);
s32 gameFlagIsSet(s32 flagId);

/* Marks the map block entries of available records on the current map as pending (bit 2), or clears it once their completion flag is set. */
void mapUpdatePendingAvailabilityFlags(void)
{
    MapSaveBlock *mapBlock = gameGetMapBlock();
    s32 mapEntryIndex = 0;
    s32 recordIndex = 0;

    if (dataTableGetRecordFifty() > 0) {
        do {
            MapAvailabilityRecordPrefixIV *record = reinterpret_cast<MapAvailabilityRecordPrefixIV *>(FUN_00267144(recordIndex));
            if (record->status != -1 && record->mapId != 0 &&
                FUN_0027d968() == record->mapId) {
                if ((mapBlock->markers[mapEntryIndex].flags & 1) != 0) {
                    if (gameFlagIsSet(mapEntryIndex + 0x310) != 0) {
                        mapBlock->markers[mapEntryIndex].flags &= ~4;
                    } else if ((record->requiredFlag == 0 ||
                                gameFlagIsSet(record->requiredFlag) != 0) &&
                               (record->blockingFlag == 0 ||
                                gameFlagIsSet(record->blockingFlag) == 0)) {
                        mapBlock->markers[mapEntryIndex].flags |= 4;
                    }
                }
                ++mapEntryIndex;
            }
            ++recordIndex;
        } while (dataTableGetRecordFifty() > recordIndex);
    }
}
}
