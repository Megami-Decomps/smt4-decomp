/* NON_MATCHING: retail call target FUN_00243808 has no registered symbol or unit; the subsequent linker-NOP tail calls resultPairInitialize. */
#include "common.h"

extern "C" {

s32 FUN_00428308(u32 kind, u32 entry);
s32 resultPairInitialize(u32 value, u32 mode, u32 kind, u32 entry);
s32 FUN_001b576c(u32 value, u32 kind, u32 entry)
{
    s32 result = FUN_00428308(kind, entry);
    if (result < 0) {
        return resultPairInitialize(value, 0, kind, entry);
    }
    return result;
}

} /* extern "C" */