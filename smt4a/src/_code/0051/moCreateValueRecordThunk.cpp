#include "common.h"

extern "C" {

struct ValueRecord;
struct RecordOwner {
    /* 0x0 */ u8 unk00[4];
    /* 0x4 */ ValueRecord *record;
};

s32 moCreateValueRecord(ValueRecord **record, u32 first, u32 second);

/* Creates the owner's value record (this-adjusting thunk into moCreateValueRecord). */
s32 moCreateValueRecordThunk(RecordOwner *owner, u32 first, u32 second)
{
    return moCreateValueRecord(&owner->record, first, second);
}
}
