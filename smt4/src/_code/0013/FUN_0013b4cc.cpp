/* NON_MATCHING: retail reads the thread-local storage with `mrc` and issues `svc 0x32` (SendSyncRequest) inline: this version calls placeholder functions instead. */
#include "common.h"

extern "C" {

extern u32 *coproc_movefrom_User_R_Thread_and_Process_ID(void); /* the thread-local storage pointer */
extern u32 svcSendSyncRequest(u32 handle);                      /* svc 0x32 */

/* Writes the IPC command (header 0x10082) into the thread's command buffer and sends it to the
 * session; returns the result code, or the first reply word on success. */
u32 FUN_0013b4cc(u32 *session, u32 a, u32 b, u32 c)
{
    u32 *cmdBuf = coproc_movefrom_User_R_Thread_and_Process_ID() + 0x80 / 4;
    u32 result;

    cmdBuf[0] = 0x10082;
    cmdBuf[1] = a;
    cmdBuf[2] = c;
    cmdBuf[3] = (c << 14) | 2;
    cmdBuf[4] = b;
    result = svcSendSyncRequest(*session);
    if ((s32)(result & 0x80000000) >= 0) {
        result = cmdBuf[1];
    }
    return result;
}

} /* extern "C" */
