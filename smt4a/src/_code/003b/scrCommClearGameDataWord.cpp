#include "common.h"
#include "shard/gameDataBlocksSetWord.h"

extern "C" {

s32 FUN_00284dbc(void);
void scrSetResult(s32 value);

s32 scrCommClearGameDataWord(void)
{
    FUN_00284dbc();
    gameDataBlocksSetWord(0);
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
