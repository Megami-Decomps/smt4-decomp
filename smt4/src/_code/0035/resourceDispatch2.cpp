#include "common.h"

extern "C" {

#define RESULT_NOT_INITIALIZED 0xe0810bf8

extern int g_nnCecdHandle;
extern int g_cecdUseLocalBackend;

int cecdServiceQueryRequest10A(u32 arg);
int cecdServiceQueryRequest10B(u32 arg);

/* Dispatches to cecdServiceQueryRequest10B(arg) when g_cecdUseLocalBackend is set, else to cecdServiceQueryRequest10A(arg) when g_nnCecdHandle is set, else fails with an error code. */
u32 resourceDispatch2(u32 arg)
{
    if (g_cecdUseLocalBackend != 0) {
        return cecdServiceQueryRequest10B(arg);
    }
    if (g_nnCecdHandle == 0) {
        return RESULT_NOT_INITIALIZED;
    }
    return cecdServiceQueryRequest10A(arg);
}

} /* extern "C" */
