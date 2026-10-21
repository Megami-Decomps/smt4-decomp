#include "common.h"
struct ValueRecord { u8 unk00[4]; u32 value; };
struct ValueHolder { u8 unk00[4]; ValueRecord *record; };
/* Returns the held record's value, or zero when absent. */
extern "C" u32 FUN_005001d8(ValueHolder *holder) {
    return holder->record != NULL ? holder->record->value : 0;
}
