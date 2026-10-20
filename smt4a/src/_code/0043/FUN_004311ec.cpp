/* NON_MATCHING: retail reads the thread-local storage with `mrc` and issues `svc 0x32` (SendSyncRequest) inline: this version calls placeholder functions instead. */
#include "common.h"

extern "C" {

extern u32 DAT_005b479c; /* service session handle */

extern u32 *coproc_movefrom_User_R_Thread_and_Process_ID(void); /* the thread-local storage pointer */
extern u32 svcSendSyncRequest(u32 handle);                      /* svc 0x32 */

/* Sends IPC command 0x00030040 with one argument on the session and stores the 64-bit reply in
 * `out`; returns the result code, or the first reply word on success. */
u32 FUN_004311ec(u32 arg, u64 *out)
{
    u32 *cmdBuf = coproc_movefrom_User_R_Thread_and_Process_ID() + 0x80 / 4;
    u32 result;

    cmdBuf[0] = 0x00030040;
    cmdBuf[1] = arg;
    result = svcSendSyncRequest(DAT_005b479c);
    if ((s32)(result & 0x80000000) >= 0) {
        *out = *(u64 *)&cmdBuf[2];
        result = cmdBuf[1];
    }
    return result;
}

} /* extern "C" */
