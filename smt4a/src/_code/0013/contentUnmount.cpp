#include "common.h"
#include "sys/ProcessResult.h"
#include "nn/Result.h"
#include "shard/W6_W6Match2_EntrySequence.h"

extern "C" {

extern u8 g_contentMounted; /* the content archive is mounted */
extern u32 globalBlockGetFirst(void);
extern u32 fsUnmountByName(const char *name);

/* Unmounts the content archive if it is mounted, recording the result; returns false only when unmounting
 * fails. */
bool contentUnmount(void)
{
    if (g_contentMounted == 0) {
        return true;
    }
    const char *name = (const char *)globalBlockGetFirst();
    u32 result = fsUnmountByName(name);
    processResultSetValue(result);
    if (nnResultIsSuccess(result)) {
        g_contentMounted = 0;
        return true;
    }
    return false;
}

} /* extern "C" */
