#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {

u16 gameDataBlocksGetCounter(void);

u32 scrSetCounterResult(void)
{
    scrSetResult(gameDataBlocksGetCounter());
    return 1;
}

} /* extern "C" */
