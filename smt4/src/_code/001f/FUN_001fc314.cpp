#include "common.h"

#include "map/MapCollisionPlacement.h"

extern "C" {

s32 dataTable2cSub0GetCount(void);
s32 mapBlockBitIsSet(s32 block);
void mapBlockBitSet(s32 block, s32 value);

/* Clears the map block bit of every type 2 record for `key`, stopping at the -1 terminator. */
void FUN_001fc314(s32 key)
{
    for (s32 i = 0; i < dataTable2cSub0GetCount(); i++) {
        MapCollisionPlacementRecord *record = dataTable2cSub0GetRecord(i);

        if (record->map == -1) {
            return;
        }
        if (record->map == key && record->kind == 2 && mapBlockBitIsSet(record->flag) != 0) {
            mapBlockBitSet(record->flag, 0);
        }
    }
}

} /* extern "C" */
