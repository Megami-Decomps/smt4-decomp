#include "common.h"
#include "shard/aocContentLookupSucceeds.h"

extern "C" {

extern u32 g_aocMain;
extern s32 FUN_001b3148(u32 main);
extern s32 FUN_001b2d88(u32 id, u32 kind, u32 arg);

/* Whether add-on content is present and the content lookup for (id, arg) succeeds. */
u32 aocContentLookupSucceeds(u32 id, u32 arg)
{
    if (FUN_001b3148(g_aocMain) != 0) {
        return FUN_001b2d88(id, 0x1d, arg) != 0;
    }
    return 0;
}

} /* extern "C" */
