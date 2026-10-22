#include "shard/Shard0037.h"

extern "C" {

extern u32 gameDataGetTableValue(void);
extern void scrSetResult(u32 value);

/* Script command: result is gameDataGetTableValue(). */
u32 scrCommGameDataGetTableValue(void)
{
    scrSetResult(gameDataGetTableValue());
    return 1;
}

} /* extern "C" */
