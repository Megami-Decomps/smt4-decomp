#include "common.h"
#include "nn/Result.h"

extern "C" {

extern u32 DAT_00471b58;
extern nn::Result FUN_001132cc(u32 *handle);

/* Lazily obtains the shared handle, retaining it only on success. */
void runtimeInitializeSharedHandle(void)
{
    if (DAT_00471b58 == 0) {
        u32 handle = 0;
        nn::Result result = FUN_001132cc(&handle);
        if (nnResultIsSuccess(result)) {
            DAT_00471b58 = handle;
        }
    }
}

} /* extern "C" */
