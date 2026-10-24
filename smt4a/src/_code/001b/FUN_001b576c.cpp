#include "classes/WindowStatus.h"
#include "nn/Result.h"

extern "C" {

s32 FUN_00428308(u32 kind, u32 entry);

/* Wraps FUN_00428308's SDK result: a failure code is kept, anything else becomes success (0). */
WindowStatusResult FUN_001b576c(u32 kind, u32 entry)
{
    s32 code = FUN_00428308(kind, entry);

    if (nnResultIsFailure(code)) {
        return WindowStatusResult(code);
    }
    return WindowStatusResult(0);
}

} /* extern "C" */
