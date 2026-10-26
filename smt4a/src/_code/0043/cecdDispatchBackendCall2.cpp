#include "common.h"

extern "C" {

#define RESULT_NOT_INITIALIZED 0xe0810bf8

extern int g_nnCecdHandle;
extern int DAT_005c1fc8;

int FUN_004301e8(u32 arg);
int FUN_0043069c(u32 arg);

/* Dispatches to FUN_0043069c(arg) when DAT_005c1fc8 is set, else to FUN_004301e8(arg) when g_nnCecdHandle is set, else fails with an error code. */
u32 cecdDispatchBackendCall2(u32 arg)
{
    if (DAT_005c1fc8 != 0) {
        return FUN_0043069c(arg);
    }
    if (g_nnCecdHandle == 0) {
        return RESULT_NOT_INITIALIZED;
    }
    return FUN_004301e8(arg);
}

} /* extern "C" */
