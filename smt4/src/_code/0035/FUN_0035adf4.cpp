/* NON_MATCHING: retail reads the thread-local storage with `mrc` and issues `svc 0x32` (SendSyncRequest) inline: this version calls placeholder functions instead. */
#include "common.h"

extern "C" {

extern u32 DAT_00472ad8; /* service session handle */

extern u32 *coproc_movefrom_User_R_Thread_and_Process_ID(void); /* the thread-local storage pointer */
extern u32 svcSendSyncRequest(u32 handle);                      /* svc 0x32 */

/* Sends IPC command 0x10042 (one argument and the constant 32) on the session; returns the result
 * code, or the first reply word on success. */
u32 FUN_0035adf4(u32 arg)
{
    u32 *cmdBuf = coproc_movefrom_User_R_Thread_and_Process_ID() + 0x80 / 4;
    u32 result;

    cmdBuf[0] = 0x10042;
    cmdBuf[1] = arg;
    cmdBuf[2] = 32;
    result = svcSendSyncRequest(DAT_00472ad8);
    if ((s32)(result & 0x80000000) >= 0) {
        result = cmdBuf[1];
    }
    return result;
}

} /* extern "C" */
