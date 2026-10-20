/* NON_MATCHING: retail reads the thread-local storage with `mrc` and issues `svc 0x32` (SendSyncRequest) inline: this version calls placeholder functions instead. */
#include "common.h"

extern "C" {

extern u32 DAT_005c0a80; /* service session handle */

extern u32 *coproc_movefrom_User_R_Thread_and_Process_ID(void); /* the thread-local storage pointer */
extern u32 svcSendSyncRequest(u32 handle);                      /* svc 0x32 */

/* Sends IPC command 0x00030042 with `size` and the buffer `data` (static-buffer descriptor of
 * `size` bytes) on the session; returns the result code, or the first reply word on success. */
u32 FUN_00439a28(const void *data, u32 size)
{
    u32 *cmdBuf = coproc_movefrom_User_R_Thread_and_Process_ID() + 0x80 / 4;
    u32 result;

    cmdBuf[0] = 0x00030042;
    cmdBuf[1] = size;
    cmdBuf[3] = (u32)data;
    cmdBuf[2] = (size << 14) | 2;
    result = svcSendSyncRequest(DAT_005c0a80);
    if ((s32)(result & 0x80000000) >= 0) {
        result = cmdBuf[1];
    }
    return result;
}

} /* extern "C" */
