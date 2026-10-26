/* NON_MATCHING: error literal loads into r4 then moves to r0; retail loads into r0 then preserves it in r4. */
#include "sys/ProcessResult.h"
#include "common.h"
#include "sys/FilePaths.h"

extern "C" {
s32 FUN_002ad888(void);
u32 FUN_002a84e8(const u16 *path);

// Perform the filesystem operation on a converted kind-two path and save its result.
u32 FUN_002e1458(const char *path)
{
    u16 converted[248];
    if (pathBuildWide(path, reinterpret_cast<s16 *>(converted), 2) != 0) {
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
