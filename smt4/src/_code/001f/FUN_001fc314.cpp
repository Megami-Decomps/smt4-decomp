#include "common.h"

struct MapBlockRecord {
    s8 key;         // 0x00
    u8 unk01;       // 0x01
    u8 type;        // 0x02
    s8 block;       // 0x03
};

extern "C" {

s32 dataTable2cSub0GetCount(void);
MapBlockRecord *dataTable2cSub0GetRecord(s32 index);
s32 mapBlockBitIsSet(s32 block);
void mapBlockBitSet(s32 block, s32 value);

/* Clears the map block bit of every type 2 record for `key`, stopping at the -1 terminator. */
void FUN_001fc314(s32 key)
{
    for (s32 i = 0; i < dataTable2cSub0GetCount(); i++) {
        MapBlockRecord *record = dataTable2cSub0GetRecord(i);

        if (record->key == -1) {
            return;
        }
        if (record->key == key && record->type == 2 && mapBlockBitIsSet(record->block) != 0) {
            mapBlockBitSet(record->block, 0);
        }
    }
}

} /* extern "C" */
