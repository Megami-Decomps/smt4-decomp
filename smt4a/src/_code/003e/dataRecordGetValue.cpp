#include "common.h"

extern "C" {

struct DataRecord {
    /* 0x00 */ u8 unk00[0x26];
    /* 0x26 */ u16 value;
};
DataRecord *FUN_00186f58(u32 id);

u32 dataRecordGetValue(u32 id)
{
    DataRecord *record = FUN_00186f58(id);
    return record != NULL ? record->value : 0;
}

} /* extern "C" */
