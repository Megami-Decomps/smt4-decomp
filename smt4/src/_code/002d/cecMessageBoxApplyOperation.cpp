#include "shard/S3AsdCec.h"

extern "C" {
extern AsdCecBoxHolder g_asdCec;
s32 FUN_00358518(u32 handle, u32 value);

/* Applies a message-box operation and reports success. */
s32 cecMessageBoxApplyOperation(u32 value)
{
    s32 success = 0;
    if (g_asdCec.box != NULL) {
        s32 severity = FUN_00358518(g_asdCec.box->handle, value) & 0x80000000;
        if (severity >= 0) {
            success = 1;
        }
    }
    return success;
}
}
