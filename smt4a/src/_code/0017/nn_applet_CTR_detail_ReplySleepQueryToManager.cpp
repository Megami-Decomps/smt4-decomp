/* NON_MATCHING: the runner forwards the reply unchanged in retail; the IPC call's byte
 * argument narrows it here. Narrowing this function's parameter regresses its callers. */
#include "nn/applet/SleepQuery.h"
#include "nn/err/Fatal.h"

extern "C" {
void nn_applet_CTR_detail_OpenSession(void);
void nn_applet_CTR_detail_CloseSession(void);
u32 FUN_0018b70c(void);

/* Sends the sleep-query reply to the applet manager. */
void nn_applet_CTR_detail_ReplySleepQueryToManager(u32 reply)
{
    nn_applet_CTR_detail_OpenSession();
    u32 handle = FUN_0018b70c();
    throwFatalIfFailed(FUN_0018bb68(handle, reply), __current_pc());
    nn_applet_CTR_detail_CloseSession();
}
} /* extern "C" */
