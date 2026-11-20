#include "nn/Result.h"
#include "code/Code002c_Result.h"

extern "C" {
extern u8 DAT_00471ba8;
void asdFatalError();
u32 libc_strlen(const char *text);
s32 srvGetServiceHandle(u32 *handle, const char *name, u32 length, u32 flags);
s32 ipcSendParameterlessCommand0x2b0000();
s32 svcCloseHandle(u32 handle);

bool modelServiceEnsureOpen(u32 *handle, const char *name)
{
    u8 *ready = &DAT_00471ba8;
    if (*ready) {
        return true;
    }
    if (nnResultIsFailure((s32)srvInitialize())) {
        asdFatalError();
    }
    s32 result = srvGetServiceHandle(handle, name, libc_strlen(name), 1);
    if ((s32)(result & 0x80000000) < 0) {
        if ((u32)result == 0xd0401834) {
            return false;
        }
        if (nnResultIsFailure(result)) {
            asdFatalError();
        }
    }
    s32 closeResult = ipcSendParameterlessCommand0x2b0000();
    if ((s32)(closeResult & 0x80000000) < 0) {
        if (nnResultIsFailure(svcCloseHandle(*handle))) {
            asdFatalError();
        }
        return false;
    }
    *ready = 1;
    return true;
}
}
