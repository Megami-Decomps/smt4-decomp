#include "common.h"
#include "util/AocReadyAndAccepts.h"

extern "C" {

extern u32 g_aocMain;

s32 FUN_001b2d88(u32 a, u32 b, u32 c);
s32 FUN_001b3148(u32 aoc);

/* True when the add-on content is ready and FUN_001b2d88 (with kind 0x38) accepts (a, b). */
u32 aocReadyAndAccepts(u32 a, u32 b)
{
    s32 result = FUN_001b3148(g_aocMain);

    if (result != 0) {
        result = FUN_001b2d88(a, 0x38, b);
        if (result != 0) {
            result = 1;
        }
    }
    return result;
}

} /* extern "C" */
