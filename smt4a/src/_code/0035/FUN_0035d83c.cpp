/* NON_MATCHING: retail's wait call leaves r1 unset (the 64-bit timeout sits in r2:r3 of a three-argument wrapper); the svc.h declaration needs an explicit skipped argument. */
#include "common.h"
#include "nn/svc.h"

struct Object0035d83c {
    /* 0x00 */ u8 unk00[0x44];
    /* 0x44 */ u32 handle;
};

extern "C" {

void FUN_002e3140(s32 result);

/* Polls the object's handle (0x44) without waiting: 0 when the poll timed out, otherwise 1 (an error result is reported first). */
u32 FUN_0035d83c(Object0035d83c *object)
{
    u32 handle = object->handle;
    if (handle != 0) {
        s32 result = nn::svc::WaitSynchronization1(handle, 0, 0, 0);
        if (result < 0)
            FUN_002e3140(result);
        if ((result & 0x3ff) == 0x3fe)
            return 0;
    }
    return 1;
}

} /* extern "C" */
