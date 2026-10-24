#include "common.h"

struct DataRecord {
    u8 unk00[0x42];
    u8 flags; // 0x42, bit 0 = permanent
};

extern "C" {

DataRecord *dataTable8FindRecord(s32 id);
s32 FUN_00287790(s32 a, DataRecord *record, s32 c, s32 d, s32 e);
void flagValueSub(s32 id, s32 amount);

// Apply the record to the value (the target on entry, the result on exit); when it succeeded for a plain request and is not permanent, consume one use.
s32 FUN_00480140(s32 value, s32 id, s32 plain)
{
    DataRecord *record = dataTable8FindRecord(id);
    if (record == NULL) {
        return 1;
    }
    value = FUN_00287790(value, record, plain, 0, 0);
    if (value == 0) {
        if (plain == 0 && (record->flags & 1) == 0) {
            flagValueSub(id, 1);
        }
    }
    return value;
}

} /* extern "C" */
