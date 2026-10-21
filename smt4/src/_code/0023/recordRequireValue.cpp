/* NON_MATCHING: compiler branches around the assertion call rather than predicating the retail call. */
#include "common.h"
extern "C" {
struct CheckedValue { u32 unk00; u32 value; };
void FUN_002bbb2c(u32 error,u32 site);
/* Report an invalid zero value before returning the stored word. */
u32 recordRequireValue(const CheckedValue *record)
{
    if (record->value==0) FUN_002bbb2c(0xE0A046DA,__current_pc());
    return record->value;
}
}
