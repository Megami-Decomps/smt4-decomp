#include "common.h"
#include "gamedata/Table00Lookup.h"

extern "C" {

s32 scrGetArg(u32 index);
s32 randNextInRange(u16 max);
void scrSetResult(s32 value);

/* Script command: picks one of the record's three values at random (-1 when none is set) and returns it. */
s32 FUN_002f76d0(void)
{
    Table00Record *record = dataTable00FindById((u16)scrGetArg(0));
    s32 values[3];
    s32 count = 0;

    values[0] = record->drops[0].value;
    if (values[0] > 0) {
        count++;
    }
    values[1] = record->drops[1].value;
    if (values[1] > 0) {
        count++;
    }
    values[2] = record->drops[2].value;
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
