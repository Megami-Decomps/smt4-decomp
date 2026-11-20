#include "nn/Result.h"

extern "C" {
extern u32 g_amAppSession;          /* the am:app session handle (0: not connected) */
extern const char g_amAppServiceName[]; /* "am:app" */
s32 srvInitialize(void);
u32 libc_strlen(const char* string);
s32 srvGetServiceHandle(u32* handle, const char* name, u32 length, u32 flags);

/* Connects to the application-manager service "am:app" unless already connected; returns the first failure. */
s32 nnAmConnectOnce(void)
{
    if (g_amAppSession == 0) {
        s32 result = srvInitialize();
        if (nnResultIsFailure(result)) {
            return result;
        }
        u32 length = libc_strlen(g_amAppServiceName);
        result = srvGetServiceHandle(&g_amAppSession, g_amAppServiceName, length, 0);
        if (nnResultIsFailure(result)) {
            return result;
        }
    }
    return 0;
}

} /* extern "C" */
