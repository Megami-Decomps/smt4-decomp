#include "battle/btlReflect.h"

extern "C" {

s32 chainCountIdUnflagged(ReflectContext *context, s32 id);

/* Script command: answers whether reflect chain 1 has no entries. */
u32 FUN_0039e1f4(void)
{
    if (chainCountIdUnflagged(g_btlActionReflect, 1) > 0) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
