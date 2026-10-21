#include "common.h"

extern "C" {

struct ValueRecord {
    /* 0x00 */ u8 unk00[0xe];
    /* 0x0e */ u16 value;
};
struct RecordOwner {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ ValueRecord *record;
};

u32 controllerGetRecordValue(RecordOwner *owner)
{
    ValueRecord *record = owner->record;
    return record != NULL ? record->value : 0;
}

} /* extern "C" */
