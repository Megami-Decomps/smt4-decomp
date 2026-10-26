#include "common.h"

extern "C" {

#define RESULT_NOT_INITIALIZED 0xe0810bf8

extern int g_nnCecdHandle;
extern int DAT_005c1fc8;

int FUN_0043015c(u32 arg);
int FUN_00430610(u32 arg);

/* Dispatches to FUN_00430610(arg) when DAT_005c1fc8 is set, else to FUN_0043015c(arg) when g_nnCecdHandle is set, else fails with an error code. */
u32 resourceDispatch(u32 arg)
{
    if (DAT_005c1fc8 != 0) {
        return FUN_00430610(arg);
    }
    if (g_nnCecdHandle == 0) {
        return RESULT_NOT_INITIALIZED;
    }
    return FUN_0043015c(arg);
}

} /* extern "C" */
