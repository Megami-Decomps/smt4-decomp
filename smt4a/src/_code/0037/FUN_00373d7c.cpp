#include "battle/btlReflect.h"

extern "C" {

s32 chainCountIdUnflagged(ReflectContext *context, s32 id);

/* Script command: answers whether reflect chain 0 has no entries. */
u32 FUN_00373d7c(void)
{
    if (chainCountIdUnflagged(g_btlActionReflect, 0) > 0) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
