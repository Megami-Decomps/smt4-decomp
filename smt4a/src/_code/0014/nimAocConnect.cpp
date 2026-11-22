/* NON_MATCHING: written as its IV twin (an nn::Result status and a pointer to the active flag); only the first failure
 * test differs: retail shifts the result into r2, this build into r1 (the IV twin has the same difference). */
#include "nn/Result.h"

extern "C" {
extern u8 DAT_005c0a84;
s32 srvInitialize();
u32 libc_strlen(const u16* text);
s32 srvGetServiceHandle(u32 context, const u16* text, u32 length, u32 flags);

/* Connects the service once and marks it active only when both SDK calls succeed. */
s32 nimAocConnect(u32 context, const u16* text)
{
    u8 *active = &DAT_005c0a84;
    nn::Result status;
    if (*active != 0) {
        status = (s32)0xe0a0d3f9;
    } else {
        status = srvInitialize();
        if (!nnResultIsFailure(status)) {
            u32 length = libc_strlen(text);
            status = srvGetServiceHandle(context, text, length, 0);
            if (!nnResultIsFailure(status)) {
                *active = 1;
                status = 0;
            }
        }
    }
    return status;
}
}
