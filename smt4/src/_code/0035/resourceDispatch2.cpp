#include "common.h"

extern "C" {

#define RESULT_NOT_INITIALIZED 0xe0810bf8

extern int g_nnCecdHandle;
extern int DAT_0047384c;

int FUN_003592b8(u32 arg);
int FUN_00359730(u32 arg);

/* Dispatches to FUN_00359730(arg) when DAT_0047384c is set, else to FUN_003592b8(arg) when g_nnCecdHandle is set, else fails with an error code. */
u32 resourceDispatch2(u32 arg)
{
    if (DAT_0047384c != 0) {
        return FUN_00359730(arg);
    }
    if (g_nnCecdHandle == 0) {
        return RESULT_NOT_INITIALIZED;
    }
    return FUN_003592b8(arg);
}

} /* extern "C" */
