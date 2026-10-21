#include "shard/S3AsdCec.h"

extern "C" {
extern AsdCec g_asdCec;
s32 FUN_0042f1cc(u32 handle, u32 value);

/* Applies a message-box operation and reports success. */
s32 FUN_00340c2c(u32 value)
{
    s32 success = 0;
    if (g_asdCec.box != NULL) {
        s32 severity = FUN_0042f1cc(g_asdCec.box->handle, value) & 0x80000000;
        if (severity >= 0) {
            success = 1;
        }
    }
    return success;
}
}
