#include "battle/BtlMainAccess.h"
#include "common.h"
#include "battle/BtlDataIdRecord.h"

extern "C" {

s32 scrGetArg(s32 index);
void scrSetResult(u32 value);
BtlDataIdRecord *btlDataFindRecordById(void *state, u16 id);

/* Script command: sets the result to value argument 1 (0-3) of the battle data row whose id is
 * argument 0, or -1 when there is no such row or value. */
u32 scrCommBtlGetDataValue(void)
{
    s32 id = scrGetArg(0);
    s32 index = scrGetArg(1);
    BtlDataIdRecord *record = btlDataFindRecordById((void *)btlGetMainState(), id);
    u32 result;

    if (record == NULL) {
        result = -1;
    } else {
        u32 value = -1;
        switch (index) {
        case 0: value = record->values[0]; break;
        case 1: value = record->values[1]; break;
        case 2: value = record->values[2]; break;
        case 3: value = record->values[3]; break;
        }
        result = value;
    }
    scrSetResult(result);
    return 1;
}

} /* extern "C" */
