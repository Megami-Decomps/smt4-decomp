#include "common.h"

extern "C" {

#define RESULT_NOT_INITIALIZED 0xe0810bf8

extern int g_nnCecdHandle;
extern int g_cecdUseLocalBackend;

int cecdServiceSendRequestC1(u32 arg);
int cecdServiceSendRequestC2(u32 arg);

/* Dispatches to cecdServiceSendRequestC2(arg) when g_cecdUseLocalBackend is set, else to cecdServiceSendRequestC1(arg) when g_nnCecdHandle is set, else fails with an error code. */
u32 resourceDispatch(u32 arg)
{
    if (g_cecdUseLocalBackend != 0) {
        return cecdServiceSendRequestC2(arg);
    }
    if (g_nnCecdHandle == 0) {
        return RESULT_NOT_INITIALIZED;
    }
    return cecdServiceSendRequestC1(arg);
}

} /* extern "C" */
