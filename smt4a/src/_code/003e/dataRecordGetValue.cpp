#include "common.h"

extern "C" {

struct DataRecord {
    /* 0x00 */ u8 unk00[0x26];
    /* 0x26 */ u16 value;
};
DataRecord *dataFindKeyedRecordWithOverrides(u32 id);

u32 dataRecordGetValue(u32 id)
{
    DataRecord *record = dataFindKeyedRecordWithOverrides(id);
    return record != NULL ? record->value : 0;
}

} /* extern "C" */
