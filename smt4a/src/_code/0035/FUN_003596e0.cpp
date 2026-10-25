/* NON_MATCHING: error literal loads into r4 then moves to r0; retail loads into r0 then preserves it in r4. */
#include "sys/ProcessResult.h"
#include "common.h"

extern "C" {
s32 FUN_002e0e04(const char *path, u16 *converted, s32 kind);
s32 FUN_001886bc(void);
u32 FUN_00188444(const u16 *path);

// Perform the filesystem operation on a converted kind-two path and save its result.
u32 FUN_003596e0(const char *path)
{
    u16 converted[248];
    if (FUN_002e0e04(path, converted, 2) != 0) {
        FUN_001886bc();
        u32 result = FUN_00188444(converted);
        FUN_0013ebd8(result);
        return result;
    }
    u32 result = 0xe0e046bc;
    FUN_0013ebd8(result);
    return result;
}
}
