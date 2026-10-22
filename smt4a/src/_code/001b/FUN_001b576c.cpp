/* NON_MATCHING: retail call target FUN_00243808 has no registered symbol or unit; the subsequent linker-NOP tail calls _ZN18WindowStatusResultC1Ej. */
#include "common.h"

extern "C" {

s32 FUN_00428308(u32 kind, u32 entry);
s32 _ZN18WindowStatusResultC1Ej(u32 value, u32 mode, u32 kind, u32 entry);
s32 FUN_001b576c(u32 value, u32 kind, u32 entry)
{
    s32 result = FUN_00428308(kind, entry);
    if (result < 0) {
        return _ZN18WindowStatusResultC1Ej(value, 0, kind, entry);
    }
    return result;
}

} /* extern "C" */