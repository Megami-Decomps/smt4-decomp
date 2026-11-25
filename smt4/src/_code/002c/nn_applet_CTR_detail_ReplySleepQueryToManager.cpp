/* NON_MATCHING: the runner forwards the reply unchanged in retail; the IPC call's byte
 * argument narrows it here. Narrowing this function's parameter regresses its callers. */
#include "nn/applet/SleepQuery.h"
#include "nn/err/Fatal.h"

extern "C" {
void FUN_002bb378(void);
void nn_applet_CTR_detail_CloseSession(void);
u32 FUN_002bb100(void);

/* Sends the sleep-query reply to the applet manager. */
void nn_applet_CTR_detail_ReplySleepQueryToManager(u32 reply)
{
    FUN_002bb378();
    u32 handle = FUN_002bb100();
    throwFatalIfFailed(FUN_0013b9b0(handle, reply), __current_pc());
    nn_applet_CTR_detail_CloseSession();
}
} /* extern "C" */
