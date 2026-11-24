#include "common.h"
#include "shard/Shard0031.h"

extern "C" {

s32 questIsReported(void);
void scrSetResult(s32 value);

s32 scrCommClearGameDataWord(void)
{
    questIsReported();
    gameDataBlocksSetWord(0);
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
