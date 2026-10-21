#include "common.h"
extern "C" {
s32 FUN_00440e8c(s32 *result, void *context, u32 value, u32 mode);
s32 FUN_00300c20(void);
/* Returns the operation result, or the online error when the call fails. */
s32 FUN_00301430(void *context, u32 value, u32 mode) {
    s32 result = 0;
    if (FUN_00440e8c(&result, context, value, mode) < 0) return FUN_00300c20();
    return result;
}
}
