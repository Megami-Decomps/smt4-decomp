#include "common.h"
#include "nn/Result.h"

extern "C" {

extern u32 DAT_005c0ad8;
extern nn::Result FUN_0014a900(u32 *handle);

/* Lazily obtains the shared handle, retaining it only on success. */
void runtimeInitializeSharedHandle(void)
{
    if (DAT_005c0ad8 == 0) {
        u32 handle = 0;
        nn::Result result = FUN_0014a900(&handle);
        if (nnResultIsSuccess(result)) {
            DAT_005c0ad8 = handle;
        }
    }
}

} /* extern "C" */
