#include "common.h"

extern "C" {

extern s32 FUN_0023793c(u32 id);
extern u32 FUN_0035fd20(u32 id);

/* Result of FUN_0035fd20 for `id`, or the error 0xC8A0D018 when FUN_0023793c reports it unusable. */
u32 FUN_0035f808(u32 id)
{
    if (FUN_0023793c(id) == 0) {
        return 0xC8A0D018;
    }
    return FUN_0035fd20(id);
}

} /* extern "C" */
