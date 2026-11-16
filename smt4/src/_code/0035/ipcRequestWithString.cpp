#include "common.h"

extern "C" {

u32 libc_strlen(const char *s);
s32 ipcServiceRequest04ReadBuffer(const char *str, u32 length);

/* IPC request with a string argument: passes the string and its length including the terminator. */
s32 ipcRequestWithString(const char *str)
{
    return ipcServiceRequest04ReadBuffer(str, str != NULL ? libc_strlen(str) + 1 : 0);
}

} /* extern "C" */
