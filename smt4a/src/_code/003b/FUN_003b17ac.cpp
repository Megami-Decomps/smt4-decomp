#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
s32 btlFindEntryValue(s32 entry, u32 field);
s32 scrSetResult(s32 value);

/* Script command: returns field three of the battle entry in argument zero. */
s32 FUN_003b17ac(void)
{
    scrSetResult(btlFindEntryValue(scrGetArg(0), 3));
    return 1;
}

} /* extern "C" */
