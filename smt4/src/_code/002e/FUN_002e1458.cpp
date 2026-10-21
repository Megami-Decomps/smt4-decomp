/* NON_MATCHING: error literal loads into r4 then moves to r0; retail loads into r0 then preserves it in r4. */
#include "common.h"

extern "C" {
s32 FUN_00254884(const char *path, u16 *converted, s32 kind);
s32 FUN_002ad888(void);
u32 FUN_002a84e8(const u16 *path);
void FUN_002c3510(u32 result);

// Perform the filesystem operation on a converted kind-two path and save its result.
u32 FUN_002e1458(const char *path)
{
    u16 converted[248];
    if (FUN_00254884(path, converted, 2) != 0) {
        FUN_002ad888();
        u32 result = FUN_002a84e8(converted);
        FUN_002c3510(result);
        return result;
    }
    u32 result = 0xe0e046bc;
    FUN_002c3510(result);
    return result;
}
}
