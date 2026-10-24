#include "common.h"

struct MapBlockRecord {
    s8 key;         // 0x00
    u8 unk01;       // 0x01
    u8 type;        // 0x02
    s8 block;       // 0x03
};

extern "C" {

s32 dataTable2CType0Count(void);
MapBlockRecord *dataTable2CGetEntry(s32 index);
s32 gameFlagBitsTest(s32 block);
void gameFlagSetIndexedBit(s32 block, s32 value);

/* Clears the map block bit of every type 2 record for `key`, stopping at the -1 terminator. */
void FUN_002ba544(s32 key)
{
    for (s32 i = 0; i < dataTable2CType0Count(); i++) {
        MapBlockRecord *record = dataTable2CGetEntry(i);

        if (record->key == -1) {
            return;
        }
        if (record->key == key && record->type == 2 && gameFlagBitsTest(record->block) != 0) {
            gameFlagSetIndexedBit(record->block, 0);
        }
    }
}

} /* extern "C" */
