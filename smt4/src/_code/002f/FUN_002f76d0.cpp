#include "common.h"

struct ChoiceRecord {
    u8 unk00[0x58];   // 0x00
    u16 first;        // 0x58
    u8 unk5A[4];      // 0x5A
    u16 second;       // 0x5E
    u8 unk60[4];      // 0x60
    u16 third;        // 0x64
};

extern "C" {

s32 scrGetArg(u32 index);
ChoiceRecord *dataTable00FindById(u16 id);
s32 randNextInRange(u16 max);
void scrSetResult(s32 value);

/* Script command: picks one of the record's three values at random (-1 when none is set) and returns it. */
s32 FUN_002f76d0(void)
{
    ChoiceRecord *record = dataTable00FindById(scrGetArg(0));
    s32 values[3];
    s32 count = 0;

    values[0] = record->first;
    if (values[0] > 0) {
        count++;
    }
    values[1] = record->second;
    if (values[1] > 0) {
        count++;
    }
    values[2] = record->third;
    if (values[2] > 0) {
        count++;
    }
    s32 result = -1;
    if (count > 0) {
        result = values[randNextInRange(count - 1)];
    }
    scrSetResult(result);
    return 1;
}

} /* extern "C" */
