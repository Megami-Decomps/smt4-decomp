#include "shard/Shard0031.h"

extern "C" {

extern u32 gameDataBlocksGetWord(void);
extern void scrSetResult(u32 value);

/* Script command: returns the value of gameDataBlocksGetWord as the result. */
u32 scrCommGetGameDataValue(void)
{
    scrSetResult(gameDataBlocksGetWord());
    return 1;
}

} /* extern "C" */
