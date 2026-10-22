/* NON_MATCHING: Record-flag writeback addressing and saved-register allocation differ. */
#include "common.h"
#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" {
u8 *gameGetMapBlock(void);
s32 dataTableGetRecordFifty(void);
MapAvailabilityRecordPrefixIV *FUN_00267144(s32 recordIndex);
s32 FUN_0027d968(void);
s32 gameFlagIsSet(s32 flagId);

void FUN_00273c54(void)
{
    u8 *mapBlock = gameGetMapBlock();
    s32 mapEntryIndex = 0;
    s32 recordIndex = 0;

    if (dataTableGetRecordFifty() > 0) {
        do {
            MapAvailabilityRecordPrefixIV *record = FUN_00267144(recordIndex);
            if (record->status != -1 && record->mapId != 0 &&
                FUN_0027d968() == record->mapId) {
                // Only this byte column and its stride are recovered.
                u8 *flags = mapBlock + 0xF20 + mapEntryIndex * 0x14;
                if ((*flags & 1) != 0) {
                    if (gameFlagIsSet(mapEntryIndex + 0x310) != 0) {
                        *flags = static_cast<u8>(*flags & ~4);
                    } else if ((record->requiredFlag == 0 ||
                                gameFlagIsSet(record->requiredFlag) != 0) &&
                               (record->blockingFlag == 0 ||
                                gameFlagIsSet(record->blockingFlag) == 0)) {
                        *flags = static_cast<u8>(*flags | 4);
                    }
                }
                ++mapEntryIndex;
            }
            ++recordIndex;
        } while (dataTableGetRecordFifty() > recordIndex);
    }
}
}
