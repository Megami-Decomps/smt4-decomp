#include "common.h"

extern "C" {

u32 libc_strlen(const u16 *s);
s32 ipcServiceRequest04ReadBuffer(const void *buffer, u32 length);

/* IPC request with a wide-string argument: passes the string and its length including the terminator. */
s32 ipcRequestWithString(const u16 *str)
{
    return ipcServiceRequest04ReadBuffer(str, str != NULL ? libc_strlen(str) + 1 : 0);
}

} /* extern "C" */
