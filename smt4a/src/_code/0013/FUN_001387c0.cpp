#include "sys/ProcessResult.h"
#include "common.h"
#include "nn/Result.h"
#include "shard/W6_W6Match2_EntrySequence.h"

extern "C" {

extern u8 DAT_005b40c8;
extern u32 globalBlockGetFirst(void);
extern u32 FUN_001a0380(const char *path);

/* Unmounts the current registration and clears its mounted flag on success. */
bool FUN_001387c0(void)
{
    if (DAT_005b40c8 == 0) {
        return true;
    }
    const char *path = reinterpret_cast<const char *>(globalBlockGetFirst());
    u32 status = FUN_001a0380(path);
    FUN_0013ebd8(status);
    if (nnResultIsSuccess(status)) {
        DAT_005b40c8 = 0;
        return true;
    }
    return false;
}

} /* extern "C" */
