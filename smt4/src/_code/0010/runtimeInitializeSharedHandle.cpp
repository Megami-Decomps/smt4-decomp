/* NON_MATCHING: instruction selection/order differs: retail bne 34; compiler bne 30. */
#include "common.h"

extern "C" {

extern u32 DAT_00471b58;
extern s32 FUN_001132cc(u32 *result);

/* Lazily obtains the shared handle, retaining it only on success. */
void runtimeInitializeSharedHandle(void)
{
    if (DAT_00471b58 == 0) {
        u32 handle = 0;
        if (FUN_001132cc(&handle) >= 0) {
            DAT_00471b58 = handle;
        }
    }
}

} /* extern "C" */
