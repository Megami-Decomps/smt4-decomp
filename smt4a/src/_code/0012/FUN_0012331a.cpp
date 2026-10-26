#include "common.h"
extern "C" {
s32 FUN_00441388(s32 *result, void *context, u32 value, u32 mode);
s32 FUN_00300c20(void);
/* Returns the operation result, or the online error when the call fails. */
s32 FUN_0012331a(void *context, u32 value, u32 mode) {
    s32 result = 0;
    if (FUN_00441388(&result, context, value, mode) < 0) return FUN_00300c20();
    return result;
}
}
