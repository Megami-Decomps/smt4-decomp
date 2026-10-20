/* NON_MATCHING: retail reads the thread-local storage with `mrc` and issues `svc 0x32` (SendSyncRequest) inline: this version calls placeholder functions instead. */
#include "common.h"

extern "C" {

extern u32 DAT_005c149c; /* service session handle */

extern u32 *coproc_movefrom_User_R_Thread_and_Process_ID(void); /* the thread-local storage pointer */
extern u32 svcSendSyncRequest(u32 handle);                      /* svc 0x32 */

/* Sends IPC command 0x100a0000 (no arguments) on the session and stores the reply byte in `out`;
 * returns the result code, or the first reply word on success. */
u32 FUN_00426a84(u8 *out)
{
    u32 *cmdBuf = coproc_movefrom_User_R_Thread_and_Process_ID() + 0x80 / 4;
    u32 result;

    cmdBuf[0] = 0x100a0000;
    result = svcSendSyncRequest(DAT_005c149c);
    if ((s32)(result & 0x80000000) >= 0) {
        *out = (u8)cmdBuf[2];
        result = cmdBuf[1];
    }
    return result;
}

} /* extern "C" */
